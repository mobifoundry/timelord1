#include "restclient.h"

RestClient::RestClient(QObject *parent) :
    QNetworkAccessManager(parent),
    m_authenticationMethod(AuthenticationMethod::WSSE)
{
    connect(this, &RestClient::finished, this, &RestClient::replyFinished);
}

void RestClient::setUserName(const QString &userName)
{
    m_userName = userName;
}

void RestClient::setPassword(const QString &password)
{
    m_password = password;
}

void RestClient::setClientName(const QString &clientName)
{
    m_clientName = clientName;
}

void RestClient::setHost(const QString &host)
{
    m_host = host;
}

void RestClient::setScheme(const QString &scheme)
{
    m_scheme = scheme;
}

void RestClient::setAuthenticationMethod(AuthenticationMethod authentMethod)
{
    m_authenticationMethod = authentMethod;
}

QString RestClient::userName() const
{
    return m_userName;
}

QString RestClient::clientName() const
{
    return m_clientName;
}

QString RestClient::host() const
{
    return m_host;
}

QString RestClient::scheme() const
{
    return m_scheme;
}

void RestClient::sendRequest(const QString &path, Operation methodName, const QByteArray &body)
{
    QNetworkRequest request;

    createHeaders(request, path, body);

    switch(methodName)
    {
    case Operation::GetOperation:
        get(request);
        break;

    case Operation::PostOperation:
        post(request,body);
        break;

    case Operation::PutOperation:
        put(request,body);
        break;

    case Operation::DeleteOperation:
        deleteResource(request);

    default:
        emit responseError(QNetworkReply::ProtocolFailure);
        return;
    }
}

const QByteArray RestClient::createWsseToken() const
{
    QCryptographicHash cHash3(QCryptographicHash::Md5);
    cHash3.addData(m_password.toLocal8Bit());
    QByteArray dmd53 = cHash3.result().toHex();
    QString passwordMd5(dmd53);

    QString created = QDateTime::currentDateTime().toString(Qt::ISODate);
    QString nonce = QUuid::createUuid().toString().replace("-", "");

    QString digestq(nonce);
    digestq += created + passwordMd5;

    QByteArray nonce64 = nonce.toLocal8Bit().toBase64();
    QString nonce2(nonce64);

    QCryptographicHash cHash(QCryptographicHash::Sha1);
    cHash.addData(digestq.toLocal8Bit());
    QByteArray digestSha1 = cHash.result().toBase64();

    QString digest(digestSha1);

    QString wsseTokenSt = "UsernameToken Username=\"" + m_userName +  "\", "
            + "PasswordDigest=\"" + digest + "\", "
            + "Nonce=\"" + nonce2 + "\", "
            + "Created=\"" + created + "\"";
    return wsseTokenSt.toLocal8Bit();
}

void RestClient::createHeaders(QNetworkRequest &req, const QString &path, const QByteArray &body) const
{
    QByteArray authorizationToken;

    if (m_authenticationMethod == RestClient::WSSE)
    {
        authorizationToken = "WSSE profile=\"UsernameToken\"";
        QByteArray xClientNameToken = m_clientName.toLocal8Bit();
        QByteArray xWsseToken = createWsseToken();
        req.setRawHeader("X-WSSE", xWsseToken);
        req.setRawHeader("X-Client-Name", xClientNameToken);
    }
    else if (m_authenticationMethod == RestClient::BASIC)
    {
        QString token = m_userName + ":" + m_password;
        token = "Basic " + token.toLocal8Bit().toBase64();
        authorizationToken = token.toLocal8Bit();
    }

    QString contentType;
    QJsonParseError error;
    QJsonDocument::fromJson(body, &error);

    if (error.error == QJsonParseError::NoError)
    {
        contentType = "application/json";
    }
    else//TODO parse xml
    {
        contentType = "application/xml";
    }

    req.setHeader(QNetworkRequest::ContentTypeHeader, contentType);
    req.setRawHeader("Authorization", authorizationToken);
    req.setUrl(QUrl(scheme() + "://" + host() + path));
}

void RestClient::replyFinished(QNetworkReply *reply)
{
    QByteArray replyArray;
    auto status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    auto url = reply->request().url();

    if (reply->error() == QNetworkReply::NoError)
    {
        replyArray = reply->readAll();
    }
    else
    {
        replyArray = "";
        emit responseError(reply->error());

    }
    emit responseFinished(replyArray, status, reply->error(), url);
    reply->deleteLater();
}
