#ifndef CUTTERAPI_H
#define CUTTERAPI_H

#include <QtSerialPort/QSerialPort>
#include <QThread>
#include <QTimer>
#include <QBitArray>
#include <QByteArray>

class CutterApi : public QObject
{
    Q_OBJECT
public:
    explicit CutterApi(const QString &portName,
                       const QString &port2Name,
                       const quint32 &baudrate,
                       const QSerialPort::DataBits &databits,
                       const QSerialPort::Parity &parity,
                       const QSerialPort::StopBits &stopbits,
                       const QSerialPort::FlowControl &flowcontrol,
                       QObject *parent = 0);

    bool loadCutterProgram(const QList<quint32> &cutPositions, const quint16 &startRegisterVt);

private:
    const QString m_portName;
    const QString m_port2Name;
    const qint32 m_baudrate;
    const QSerialPort::DataBits m_databits;
    const QSerialPort::Parity m_parity;
    const QSerialPort::StopBits m_stopbits;
    const QSerialPort::FlowControl m_flowcontrol;
    QByteArray byteArrayResponse;
    QString response;
    int countBGP;
    QSerialPort * serial;
    QSerialPort * serial2;
    QList <QByteArray> m_programCutter;
    QTimer * timer;
    void prepareCuttingProgram(const quint16 &startRegisterVt, const QList<quint32> &cutPositions);
    bool writeCuttingProgram(QSerialPort *port, const QByteArray &packet);
    bool checkConnection(QSerialPort *port);
    bool loaded;
    bool bladeDrop;
    int  sync;
    bool vt;
    QString cutterReg;
    QByteArray byteArray;
    void run();
    void stop();
    QBitArray bytesToBits(QByteArray bytes);
    QBitArray showbits(unsigned int x);
    void checkBlade(QString resp);
    int frameCount;
signals:
    void statusError(QString error);
    void statusLoad(QString message);
    void nextStep();
private slots:
    void checkProgress();
    void readResponse2();
};

#endif // CUTTERAPI_H
