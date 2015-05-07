#include "configholder.h"

ConfigHolder::ConfigHolder(const QString &fileConfig, QObject *parent) :
    QObject(parent),
    #ifdef Q_OS_WIN
    m_pathFileConfig(QString("%1/%2")
                     .arg(QGuiApplication::applicationDirPath())
                     .arg(fileConfig))
  #endif
  #ifdef Q_OS_LINUX
  #ifdef Q_OS_ANDROID
  m_pathFileConfig(QString("/%1/CuttingStation/%2").arg(QDir::homePath()).arg(fileConfig))
  #else
  m_pathFileConfig(QString("/etc/CuttingStation/%1").arg(fileConfig))
  #endif
  #endif
{
    initialize();
}

void ConfigHolder::initialize()
{

    QSettings settings(m_pathFileConfig, QSettings::IniFormat);

    settings.setIniCodec("UTF-8");

    settings.beginGroup("profit");
    m_hostProfit = settings.value("host").toString();
    m_realName = settings.value("realName").toString();
    m_prftName = settings.value("prftName").toString();
    m_schemeProfit = settings.value("scheme").toString();
    m_labelPrinter = settings.value("labelPrinter").toString();
    m_updateTime = settings.value("updateTime").toInt();
    m_stationSubtype = settings.value("stationSubtype").toString();
    settings.endGroup();

    settings.beginGroup("shws");
    m_hostShws = settings.value("host").toString();
    m_schemeShws = settings.value("scheme").toString();
    settings.endGroup();

    settings.beginGroup("serialport");
    m_port = settings.value("port").toString();
    m_port2 = settings.value("port2").toString();
    m_baudrate = settings.value("baudrate").toInt();
    m_databits = settings.value("databits").toInt();
    m_parity = settings.value("parity").toInt();
    m_stopbits = settings.value("stopbits").toInt();
    m_flowcontrol = settings.value("flowcontrol").toInt();
    settings.endGroup();

    settings.beginGroup("station");
    m_stationType = settings.value("stationType").toString();
    settings.endGroup();

    settings.beginGroup("demo");
    m_pathFileJdf = settings.value("pathfilejdf").toString();
    m_pathFileJson = settings.value("pathfilejson").toString();
    settings.endGroup();
}

void ConfigHolder::saveConfig()
{
    QSettings settings(m_pathFileConfig, QSettings::IniFormat);

    settings.setIniCodec("UTF-8");

    settings.beginGroup("profit");
    settings.setValue("host", m_hostProfit);
    settings.setValue("scheme", m_schemeProfit);
    settings.endGroup();

    settings.beginGroup("shws");
    settings.setValue("host", m_hostShws);
    settings.setValue("scheme", m_schemeShws);
    settings.endGroup();

    settings.beginGroup("serialport");
    settings.setValue("port", m_port);
    settings.setValue("port2", m_port2);
    settings.setValue("baudrate", m_baudrate);
    settings.setValue("databits", m_databits);
    settings.setValue("parity", m_parity);
    settings.setValue("stopbits", m_stopbits);
    settings.setValue("flowcontrol", m_flowcontrol);
    settings.endGroup();

    settings.beginGroup("station");
    settings.setValue("stationType", m_stationType);
    settings.endGroup();

    settings.beginGroup("demo");
    settings.setValue("pathfilejdf", m_pathFileJdf);
    settings.setValue("pathfilejson", m_pathFileJson);
    settings.endGroup();

    settings.sync();

    if (settings.status())
    {
        QProcess commandProc;
        commandProc.start("/bin/bash");

#ifdef Q_OS_LINUX
        QStringList list;
        list<< "kde" << "gk";

        for (auto iter : list)
        {
            auto commandLine = QString("%1sudo %2\n").arg(iter)
                    .arg(QGuiApplication::applicationFilePath());
            commandProc.write(commandLine.toUtf8());
            commandProc.waitForFinished(200);
        }
#endif
        QGuiApplication::quit();
    }
}
QString ConfigHolder::port2() const
{
    return m_port2;
}

void ConfigHolder::setPort2(const QString &port2)
{
    m_port2 = port2;
}

QString ConfigHolder::stationType() const
{
    return m_stationType;
}

void ConfigHolder::setStationType(const QString &stationType)
{
    m_stationType = stationType;
}


bool ConfigHolder::isConfigFileExists() const
{
    QFile file(m_pathFileConfig);
    return file.open(QIODevice::ReadOnly );
}

QString ConfigHolder::realName() const
{
    return m_realName;
}

QString ConfigHolder::prftName() const
{
    return m_prftName;
}

QString ConfigHolder::labelPrinter() const
{
    return m_labelPrinter;
}

int ConfigHolder::updateTime()
{
    return m_updateTime;
}


QString ConfigHolder::stationSubtype() const
{
    return m_stationSubtype;
}

QString ConfigHolder::username() const
{
    return m_username;
}

QString ConfigHolder::password() const
{
    return m_password;
}

void ConfigHolder::setUsername(const QString &username)
{
    m_username = username;
}

void ConfigHolder::setPassword(const QString &password)
{
    m_password = password;
}

QString ConfigHolder::usernameShws() const
{
    return m_usernameShws;
}

QString ConfigHolder::passwordShws() const
{
    return m_passwordShws;
}

void ConfigHolder::setUsernameShws(const QString &usernameShws)
{
    m_usernameShws = usernameShws;
}

void ConfigHolder::setPasswordShws(const QString &passwordShws)
{
    m_passwordShws = passwordShws;
}
QString ConfigHolder::schemeShws() const
{
    return m_schemeShws;
}

void ConfigHolder::setSchemeShws(const QString &schemeShws)
{
    m_schemeShws = schemeShws;
}

QString ConfigHolder::pathFileJdf() const
{
    return m_pathFileJdf;
}

void ConfigHolder::setPathFileJdf(const QString &pathFileJdf)
{
    m_pathFileJdf = pathFileJdf;
}

QString ConfigHolder::port() const
{
    return m_port;
}

void ConfigHolder::setPort(const QString &port)
{
    m_port = port;
}

QString ConfigHolder::pathFileJson() const
{
    return m_pathFileJson;
}

void ConfigHolder::setPathFileJson(const QString &pathFileJson)
{
    m_pathFileJson = pathFileJson;
}

QString ConfigHolder::pathFileConfig() const
{
    return m_pathFileConfig;
}
qint32 ConfigHolder::baudrate() const
{
    return m_baudrate;
}

void ConfigHolder::setBaudrate(const qint32 &baudrate)
{
    m_baudrate = baudrate;
}
quint8 ConfigHolder::databits() const
{
    return m_databits;
}

void ConfigHolder::setDatabits(const qint8 &databits)
{
    m_databits = databits;
}
quint8 ConfigHolder::parity() const
{
    return m_parity;
}

void ConfigHolder::setParity(const qint8 &parity)
{
    m_parity = parity;
}
quint8 ConfigHolder::stopbits() const
{
    return m_stopbits;
}

void ConfigHolder::setStopbits(const qint8 &stopbits)
{
    m_stopbits = stopbits;
}
quint8 ConfigHolder::flowcontrol() const
{
    return m_flowcontrol;
}

void ConfigHolder::setFlowcontrol(const qint8 &flowcontrol)
{
    m_flowcontrol = flowcontrol;
}

QStringList ConfigHolder::realPorts() const
{
    QStringList realPorts;
#ifndef Q_OS_ANDROID
 //   for (auto info : QSerialPortInfo::availablePorts())
//    {
//        realPorts.append(info.portName());
 //   }
#endif
    return realPorts;
}

QString ConfigHolder::hostShws() const
{
    return m_hostShws;
}

void ConfigHolder::setHostShws(const QString &hostShws)
{
    m_hostShws = hostShws;
}

QString ConfigHolder::schemeProfit() const
{
    return m_schemeProfit;
}

void ConfigHolder::setSchemeProfit(const QString &schemeProfit)
{
    m_schemeProfit = schemeProfit;
}

QString ConfigHolder::hostProfit() const
{
    return m_hostProfit;
}

void ConfigHolder::setHostProfit(const QString &hostProfit)
{
    m_hostProfit = hostProfit;
}
