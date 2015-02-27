#ifndef CONFIGHOLDER_H
#define CONFIGHOLDER_H

#include <QSettings>
#include <QGuiApplication>
#include <QFile>
#include <QDir>
#include <QProcess>

#ifndef Q_OS_ANDROID
#include "QSerialPortInfo"
#endif

class ConfigHolder : public QObject
{
    Q_OBJECT
public:
     ConfigHolder(const QString &fileConfig = "cuttingstation.conf", QObject *parent = 0);

     void initialize();

public slots:

     bool isConfigFileExists() const;

     QString hostProfit() const;
     void setHostProfit(const QString &hostProfit);
     QString realName() const;
     QString prftName() const;
     QString schemeProfit() const;
     void setSchemeProfit(const QString &schemeProfit);
     QString labelPrinter() const;
     int updateTime();
     QString stationSubtype() const;

     QString username() const;
     QString password() const;
     void setUsername(const QString &username);
     void setPassword(const QString &password);

     QString usernameShws() const;
     QString passwordShws() const;
     void setUsernameShws(const QString &usernameShws);
     void setPasswordShws(const QString &passwordShws);

     QString hostShws() const;
     void setHostShws(const QString &hostShws);

     QString schemeShws() const;
     void setSchemeShws(const QString &schemeShws);

     QString pathFileJdf() const;
     void setPathFileJdf(const QString &pathFileJdf);

     QString stationType() const;
     void setStationType(const QString &stationType);

     QString port() const;
     void setPort(const QString &port);

     QString port2() const;
     void setPort2(const QString &port2);

     QString pathFileJson() const;
     void setPathFileJson(const QString &pathFileJson);

     QString pathFileConfig() const;

     qint32 baudrate() const;
     void setBaudrate(const qint32 &baudrate);

     quint8 databits() const;
     void setDatabits(const qint8 &databits);

     quint8 parity() const;
     void setParity(const qint8 &parity);

     quint8 stopbits() const;
     void setStopbits(const qint8 &stopbits);

     quint8 flowcontrol() const;
     void setFlowcontrol(const qint8 &flowcontrol);

     QStringList realPorts() const;
     void saveConfig();

private:
     //data from configuration file
     QString m_hostProfit;
     QString m_realName;
     QString m_prftName;
     QString m_schemeProfit;
     QString m_labelPrinter;
     int m_updateTime;
     QString m_stationType;
     QString m_stationSubtype;

    //additional data
     QString m_username;
     QString m_password;

     QString m_hostShws;
     QString m_schemeShws;
     QString m_usernameShws;
     QString m_passwordShws;

     QString m_pathFileJdf;
     QString m_pathFileJson;

     QString m_port;
     QString m_port2;
     qint32 m_baudrate;
     qint8 m_databits;
     qint8 m_parity;
     qint8 m_stopbits;
     qint8 m_flowcontrol;

     const QString m_pathFileConfig;

};

#endif // CONFIGHOLDER_H
