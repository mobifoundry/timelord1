#ifndef ABSTRACTAPIMETHOD_H
#define ABSTRACTAPIMETHOD_H

#include <QRunnable>
#include <QEventLoop>
#include <QTimer>
#include <QPointer>
#include <QJsonParseError>
#include <QNetworkReply>


class AbstractApiMethod : public QObject, public QRunnable
{
    Q_OBJECT

public:
    enum AuthenticationMethod
    {
        BASIC = 0,
        WSSE = 1
    };

    AbstractApiMethod();
    virtual ~AbstractApiMethod();

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

    QString pathQuery() const;
    void setPathQuery(const QString &pathQuery);

    AbstractApiMethod::AuthenticationMethod authenticationMethod() const;
    void setAuthenticationMethod(const AbstractApiMethod::AuthenticationMethod &authenticationMethod);

protected:

    QPointer<QEventLoop> loopWaitResponse;
    QPointer<QTimer> timerWaitResponse;
    int m_maxTimeResponse;

    QString m_userName;
    QString m_password;
    QString m_clientName;
    QString m_host;
    QString m_scheme;


    QString m_pathQuery;
    QByteArray m_body;
    AbstractApiMethod::AuthenticationMethod m_authenticationMethod;


    virtual void onResponseFinished(const QJsonDocument jsonResponse) = 0;
    void run();
    void runOperation(const QString pathQuery, const QByteArray body = "");

signals:
    void statusQuery(const int status);
    void statusErrorQuery(const QString errorQuery);

public slots:
    void onResponseStatus(const QByteArray response, const int status, QNetworkReply::NetworkError error);

private slots:
    void onTimeout();

};

#endif // ABSTRACTAPIMETHOD_H
