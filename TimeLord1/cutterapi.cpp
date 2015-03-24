/********************************************************************************************************************************************
 * class: CutterApi
 *
 * Copyright(C) 2014 OpenSoft - Irvine, CA
 * Copyright(C) 2014 Print Fulfillment Services - Louisville, Ky
 *
 * This code privides communication to and from Itotec cutters, it is used to load cut course programs into the cutters PLC and monitor
 * communication between Itotec VT display units and PLC.
 *
 * 13Feb14 - Changed from being a QThread to standard QObject.  Change was made to allow for monitoring of Itotec cutters during operation.
 *           CutterApi needs to montior traffic during life of PCARS cutting station, it monitors clamp and blade actions after cut course
 *           program has been loaded into the cutter.
 *           Louis Meadows
 *
 *
 *
 *
 ***********************************************************************************************************************************************/

#include "cutterapi.h"
#include "QDebug"

CutterApi::CutterApi(const QString &portName,
                     const QString &port2Name,
                     const quint32 &baudrate,
                     const QSerialPort::DataBits &databits,
                     const QSerialPort::Parity &parity,
                     const QSerialPort::StopBits &stopbits,
                     const QSerialPort::FlowControl &flowcontrol,
                     QObject *parent) :
    QObject(parent),
    m_portName(portName),
    m_port2Name(port2Name),
    m_baudrate(baudrate),
    m_databits(databits),
    m_parity(parity),
    m_stopbits(stopbits),
    m_flowcontrol(flowcontrol)
{
    qDebug()<<"CutterApi is alive." << portName << port2Name;
    serial  = nullptr;
    serial2 = nullptr;
    bladeDrop = false;
    loaded = false;
    sync = 3;
    frameCount = 0;

}



bool CutterApi::checkConnection(QSerialPort * port)
{

    if (port->isOpen()) {
        qDebug()<<port->portName()+" Port Currently Open";
        return true;
    }

    port->setPortName(port->portName());

    if (!port->open(QIODevice::ReadWrite))
    {
        emit statusError(tr("Can't open %1, error code %2")
                         .arg(port->portName()).arg(port->error()));
        qDebug()<<QString("Can't open %1, error code %2").arg(port->portName()).arg(port->error());
        return false;
    }
    else
        qDebug()<< port->portName()+" Port Open";

    if (!port->setBaudRate(m_baudrate))
    {
        emit statusError(tr("Can't set baudrate to port %1, error code %2")
                         .arg(port->portName()).arg(port->error()));
        return false;
    }

    if (!port->setDataBits(m_databits))
    {
        emit statusError(tr("Can't set data bits to port %1, error code %2")
                         .arg(port->portName()).arg(port->error()));
        return false;
    }

    if (!port->setParity(m_parity))
    {
        emit statusError(tr("Can't set parity to port %1, error code %2")
                         .arg(port->portName()).arg(port->error()));
        return false;
    }

    if (!port->setStopBits(m_stopbits))
    {
        emit statusError(tr("Can't set stop bits to port %1, error code %2")
                         .arg(port->portName()).arg(port->error()));
        return false;
    }

    if (!port->setFlowControl(m_flowcontrol))
    {
        emit statusError(tr("Can't set flow control to port %1, error code %2")
                         .arg(port->portName()).arg(port->error()));
        return false;
    }
//    port->setBreakEnabled(true);
//    port->sendBreak(500);
    return true;
}
/*****************************************************************************************************************************************************
 * method: readResponse2
 *
 * This method handles ReadyRead signals from second seriel port and should not be blocked once station is in operation
 *
 *
 *****************************************************************************************************************************************************/
void CutterApi::readResponse2()
{

    QTextStream out(stdout);
    QByteArray packet = serial2->readAll();
    QString commPort = serial2->portName();
    QByteArray ESC;
    QString resp;
    ESC[0] = 0x1B;
    if (packet[0]==ESC[0]) {
        vt=true;
        resp = commPort+" VT: ";
        resp += packet;
        qDebug()<<resp;
    }
    else {
        resp = commPort+" PLC: ";
        resp += packet;
        vt=false;

    }


}
/********************************************************************************************************************************************************
 * method: showbits
 *
 * Takes unsigned int converts to binary and displays the binary code returning a QBitArray
 * Louis Meadows
 *
 * *******************************************************************************************************************************************************/
QBitArray CutterApi::showbits(unsigned int x)
  {
      int i;
      QBitArray bits((sizeof(int)*8)-1);
      for(i=(sizeof(int)*8)-1; i>=0; i--) {
          if (x&(1<<i)){
            //  putchar('1');
              bits.setBit(i);
          } else {
            //  putchar('0');
          }

      }
      return bits;
      printf("\n");
  }
/************************************************************************************************************************************************************
 * method: bytesToBits
 *
 * Takes a QByteArray and converts to QBitArray
 * Louis Meadows
 *
 *
 *************************************************************************************************************************************************************/
QBitArray CutterApi::bytesToBits(QByteArray bytes)
{
    QBitArray bits(bytes.count()*8);
    // Convert from QByteArray to QBitArray
    for(int i=0; i<bytes.count(); ++i)
        for(int b=0; b<8; ++b)
            bits.setBit(i*8+b, bytes.at(i)&(1<<b));
    return bits;
}
/************************************************************************************************************************************************************
 * method: checkBlade
 *
 * Watches of Itotec cutter status register to be return by the PLC and check the clamp and blade bits.  These bits determine when the nextStep signal is emitted
 * Louis Meadows
 *
 *
 **************************************************************************************************************************************************************/
void CutterApi::checkBlade(QString resp)
{
    QString commPort = serial->portName();

    qDebug()<<commPort<<"Sync:"<<sync <<" BGP:"<<countBGP  <<" PLC->" + resp;
    sync++;

    if (sync==2){

        const unsigned int cutreg = resp.toInt();
        qDebug() <<"cutterReg ->" + resp <<" looking glass:";
        QBitArray bits = showbits(cutreg);
        for (int i=0; i<bits.count(); ++i){
            qDebug() << QString("bit %1 ->").arg(i) << bits.testBit(i);
        }
        if (!bits.testBit(12)){
            qDebug()<< "CLAMP DOWN $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
        }
        if ((!bits.testBit(14))&&    // BLADE DOWN
           (!bits.testBit(12))){     // CLAMP DOWN
            qDebug()<<"BLADE DROPPED !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
            countBGP--;
            bladeDrop = true;
            cutterReg = resp;
        }
        else
        {
           if ((bladeDrop==true)&&
              (bits.testBit(12))) // Clamp up
           {
               emit nextStep();
               qDebug()<<"BGP:"<<countBGP + " nextStep() signaled >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
               bladeDrop = false;
           }
        }
    }
    if (resp.indexOf("32,32,32,32,32,32,32,32")!=-1) {  // 32,32,32,32,32,32,32,32,0,4095,0,0,0,0,0,32  No Keys Pressed
        sync = 0;
    }
    emit statusLoad(serial->portName() + " response read:" +  byteArrayResponse);
}

/****************************************************************************************************************************************************
 * method: checkProgress
 *
 * ReadyRead signal handler for the main serial port
 * Louis Meadows
 *
 *
 *****************************************************************************************************************************************************/
void CutterApi::checkProgress()
{
    frameCount++;
    response.clear();
    byteArrayResponse.clear();
    byteArrayResponse =serial->readAll();
    switch(serial->error()) {
    case QSerialPort::NoError:
        break;
    case QSerialPort::ParityError:
        qDebug()<<"Parity Error";
        break;
    case QSerialPort::FramingError:
        qDebug()<<"Framing Error";
        break;
    case QSerialPort::BreakConditionError:
        qDebug()<<"Break Condition Error";
        break;
    case QSerialPort::ReadError:
        qDebug()<<"Read Error";
        break;
    case QSerialPort::UnknownError:
        qDebug()<<"Unknown Error";
         break;
    default:
        break;

    }

    qDebug() <<frameCount<< "<-"<< serial->errorString()<<"->RAWFRAME:"<<byteArrayResponse;
    if (loaded) {
        response = QString(byteArrayResponse);
        QStringList framebuf = response.split("\r",QString::SkipEmptyParts);
        foreach (const QString &resp, framebuf) {
           checkBlade(resp);
          }
       }
}

void CutterApi::run()
{
    qDebug()<<"CutterApi::run";
    loaded = false;
    if (serial==nullptr){
        serial = new QSerialPort(m_portName,this);
        connect(serial, SIGNAL(readyRead()),this, SLOT(checkProgress()));
        checkConnection(serial);
    } else {
        serial->flush();
    }
    if (serial2==nullptr){
        serial2 = new QSerialPort(m_port2Name,this);
        connect(serial2, SIGNAL(readyRead()),this, SLOT(readResponse2()));
        checkConnection(serial2);
    } else {
        serial2->flush();
    }
    if (checkConnection(serial)) {
        for (auto pack : m_programCutter){
            writeCuttingProgram(serial, pack);
        }
    }
    else
    {
        qDebug()<<QString("Data is not written to the port %1.").arg(serial->portName());
        emit statusError(QString("Data is not written to the port %1.").arg(serial->portName()));
        return;
    }

    countBGP++;
    QByteArray packet;
    packet.clear();
    packet.append(",G00W,");
    packet.append(QString::number(41));
    writeCuttingProgram(serial, packet);
    packet.clear();
    packet.append(",G15W,");
    packet.append(QString::number(16384));
    writeCuttingProgram(serial, packet);
    packet.clear();
    packet.append(",G76W,");
    packet.append(QString::number(51));
    writeCuttingProgram(serial, packet);


    serial->setDataTerminalReady(false);
    serial->waitForReadyRead(3000);
    serial->setDataTerminalReady(true);

    packet.clear();
    packet.append(",G76W,");
    packet.append(QString::number(115));
    writeCuttingProgram(serial, packet);
    packet.clear();
    packet.append(",G15W,");
    packet.append(QString::number(-32768));
    writeCuttingProgram(serial, packet);
    packet.clear();
    packet.append(",G00W,");
    packet.append(QString::number(35));
    writeCuttingProgram(serial, packet);

    serial->setDataTerminalReady(false);
    serial->waitForReadyRead(3000);
    serial->setDataTerminalReady(true);

    packet.clear();
    packet.append(",B041,");   // arrow down
    packet.append(QString::number(2));
    writeCuttingProgram(serial, packet);

    serial->setDataTerminalReady(false);
    serial->waitForReadyRead(3000);
    serial->setDataTerminalReady(true);

    packet.clear();
    packet.append(",B041,");    // arrow up
    packet.append(QString::number(1));
    writeCuttingProgram(serial, packet);

    serial->setDataTerminalReady(false);
    m_programCutter.clear();
    loaded = true;
//    countBGP=200;
//     emit nextStep();
//    while (countBGP>0){
//
//        serial->waitForReadyRead(20);
//        serial2->waitForReadyRead(20);
//    }
}

bool CutterApi::loadCutterProgram(const QList<quint32> &cutPositions, const quint16 &startRegisterVt)
{
    qDebug()<<"CutterApi::loadCutterProgram";
    prepareCuttingProgram(startRegisterVt, cutPositions);

    if (!m_programCutter.isEmpty())
    {
//        start();
        run();
        return true;
    }
    else
    {
        qDebug()<<"m_programCutter isEmpty!";
        return false;
    }
}

void CutterApi::prepareCuttingProgram(const quint16 &startRegisterVt, const QList<quint32> &cutPositions)
{
    QByteArray programPack;
    quint16 countN = 0;
    quint16 reg = startRegisterVt;
    countBGP = 0;
    qDebug()<<"CutterApi::prepareCuttingProgram";
    for (auto pos : cutPositions)
    {
        if (static_cast<quint8>(reg) == 0x80)
        {
            reg += 0x80;
        }
        programPack.append(",");
        programPack.append(QString::number(reg++,16).toUpper() + QString(",%1,").arg(pos));
        programPack.append(QString::number(reg++,16).toUpper() + ",0,");
        programPack.append(QString::number(reg++,16).toUpper() + ",0,");
        programPack.append(QString::number(reg++,16).toUpper() + ",1");
        ++countN;
        if (countN == 4)
        {
            //programPack.append(QString("M004,%1,M138,%1").arg(++countN));//todo https://github.com/opensoft/PCARS/tree/development/CutterLoader
            m_programCutter.append(programPack);
            qDebug()<<"programPack:"<<programPack;
            programPack.clear();
            countN = 0;
        }
        countBGP++;
    }
    int i = countBGP;
    while (i<51){
        if (static_cast<quint8>(reg) == 0x80)
        {
            reg += 0x80;
        }
        programPack.append(",");
        programPack.append(QString::number(reg++,16).toUpper() + ",0,");
        programPack.append(QString::number(reg++,16).toUpper() + ",0,");
        programPack.append(QString::number(reg++,16).toUpper() + ",0,");
        programPack.append(QString::number(reg++,16).toUpper() + ",0");
        ++countN;
        if (countN == 4)
        {
            m_programCutter.append(programPack);
            programPack.clear();
            countN = 0;
        }
        i++;
    }
    if (countN)
    {
        m_programCutter.append(programPack);
    }
}

bool CutterApi::writeCuttingProgram(QSerialPort *,const QByteArray &packet)
{
    if (serial->isDataTerminalReady())
        qDebug()<<"DTR High";
    else
        serial->setDataTerminalReady(true);
    if (serial->isRequestToSend())
        qDebug()<<"RTS HIGH";
    else
        serial->setRequestToSend(true);
    auto byteArray = packet;
    byteArray.prepend("10").prepend(0x1B);//start
    byteArray.append("\r");//end

    response = "NO";
    if (serial->write(byteArray) != -1)
    {
        qDebug() << byteArray;
        emit statusLoad(serial->portName() + " write:" + byteArray);
        serial->waitForReadyRead(500);
        byteArrayResponse =serial->readAll();
        response = QString(byteArrayResponse);
        if (response.indexOf("OK")==-1)
        {
            qDebug() <<"->" + byteArrayResponse;
            serial->write(byteArray);
            qDebug() << byteArray;
            serial->waitForReadyRead(500);
            byteArrayResponse =serial->readAll();
        }
        qDebug() <<"->" + byteArrayResponse;
        emit statusLoad(serial->portName() + " response read:" +  byteArrayResponse);

        return true;
    }

    emit statusError(QString("Data is not written to the port %1.").arg(serial->portName()));

    return false;
}
