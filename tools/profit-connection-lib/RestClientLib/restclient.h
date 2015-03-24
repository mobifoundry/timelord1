#ifndef RESTCLIENT_H
#define RESTCLIENT_H

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QCryptographicHash>
#include <QDateTime>
#include <QUuid>
#include <QJsonParseError>

class RestClient : public QNetworkAccessManager
{
    Q_OBJECT
public:

    enum AuthenticationMethod
    {
        BASIC = 0,
        WSSE = 1
    };

    explicit RestClient(QObject *parent = 0);

    void setUserName(const QString &userName);
    void setPassword(const QString &password);
    void setClientName(const QString &clientName);
    void setHost(const QString &host);
    void setScheme(const QString &scheme);
    void setAuthenticationMethod(RestClient::AuthenticationMethod authentMethod);
    QString userName() const;
    QString clientName() const;
    QString host() const;
    QString scheme() const;

    void sendRequest(const QString &path, Operation methodName, const QByteArray &body = "");

private:

    QString m_userName;
    QString m_password;
    QString m_clientName;
    QString m_host;
    QString m_scheme;
    RestClient::AuthenticationMethod m_authenticationMethod;

    void createHeaders(QNetworkRequest &req, const QString &path, const QByteArray &body) const;
    const QByteArray createWsseToken() const;

signals:

    void responseFinished(const QByteArray responseByte, const int status,
                          QNetworkReply::NetworkError error, QUrl url);
    void responseError(QNetworkReply::NetworkError error);
    void responseSslErrors(const QList<QSslError> &errorList);

private slots:

    void replyFinished(QNetworkReply *reply);

};

#endif // RESTCLIENT_H
