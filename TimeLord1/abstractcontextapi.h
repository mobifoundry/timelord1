#ifndef ABSTRACTCONTEXTAPI_H
#define ABSTRACTCONTEXTAPI_H

#include <QThreadPool>
#include "QFile"
#include "QTextStream"
#include "QApplication"

#include "abstractcontextapi.h"
#include "abstractapimethod.h"

class AbstractContextApi : public QThreadPool
{
    Q_OBJECT
public:
    explicit AbstractContextApi(QObject *parent = 0);
    ~AbstractContextApi();

    QString userName() const;
    void setUserName(const QString &userName);

    QString password() const;
    void setPassword(const QString &password);

    QString clientName() const;
    void setClientName(const QString &clientName);

    QString host() const;
    void setHost(const QString &host);

    QString scheme() const;
    void setScheme(const QString &scheme);

protected:
    AbstractApiMethod *ptr_operation;
    virtual void initStart(AbstractApiMethod *operation) = 0;
    QByteArray loadFileQrc(const QString path);
    void deleteObjectList(QList<QObject*> &objectList);

private:
    QString m_userName;
    QString m_password;
    QString m_clientName;
    QString m_host;
    QString m_scheme;

signals:
    void statusQuery(const int status);
    void statusErrorQuery(const QString errorQuery);
    void sendAuthentificationStatus(const int status);

public slots:

};

#endif // ABSTRACTCONTEXTAPI_H
