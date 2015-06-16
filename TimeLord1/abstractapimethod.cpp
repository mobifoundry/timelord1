#include "abstractapimethod.h"

AbstractApiMethod::AbstractApiMethod() :
    m_maxTimeResponse(20000),
    m_body("")
{

}

AbstractApiMethod::~AbstractApiMethod()
{

}

QString AbstractApiMethod::userName() const
{
    return m_userName;
}

void AbstractApiMethod::setUserName(const QString &userName)
{
    m_userName = userName;
}

QString AbstractApiMethod::password() const
{
    return m_password;
}

void AbstractApiMethod::setPassword(const QString &password)
{
    m_password = password;
}

QString AbstractApiMethod::clientName() const
{
    return m_clientName;
}

void AbstractApiMethod::setClientName(const QString &clientName)
{
    m_clientName = clientName;
}

QString AbstractApiMethod::host() const
{
    return m_host;
}

void AbstractApiMethod::setHost(const QString &host)
{
    m_host = host;
}

QString AbstractApiMethod::scheme() const
{
    return m_scheme;
}

void AbstractApiMethod::setScheme(const QString &scheme)
{
    m_scheme = scheme;
}

QString AbstractApiMethod::pathQuery() const
{
    return m_pathQuery;
}

void AbstractApiMethod::setPathQuery(const QString &pathQuery)
{
    m_pathQuery = pathQuery;
}
AbstractApiMethod::AuthenticationMethod AbstractApiMethod::authenticationMethod() const
{
    return m_authenticationMethod;
}

void AbstractApiMethod::setAuthenticationMethod(const AbstractApiMethod::AuthenticationMethod &authenticationMethod)
{
    m_authenticationMethod = authenticationMethod;
}


void AbstractApiMethod::onResponseStatus(const QByteArray response,
                                         const int status,
                                         QNetworkReply::NetworkError error)
{
    if (status >= 400) // 400 Http status code
    {
        if (status == 401)
        {
            emit statusErrorQuery("Username/password is incorrect.");
        }
        else
        {
            emit statusErrorQuery(QString("Error, %1 Http status.").arg(status));
        }
    }
    else if (status == 0)
    {
        if (error == QNetworkReply::SslHandshakeFailedError)
        {
            emit statusErrorQuery("Connection error SSL.");
        }
        else
        {
            emit statusErrorQuery("Connection error.");
        }
    }
    else if (response.isEmpty())
    {
        emit statusErrorQuery("Answer empty.");
    }
    else
    {
        QJsonParseError error;
        QJsonDocument document = QJsonDocument::fromJson(response, &error);

        if (error.error == QJsonParseError::NoError)
        {
            emit statusErrorQuery("");
            onResponseFinished(document);
        }
        else
        {
            emit statusErrorQuery("Error converting to json.");
        }
    }

    emit statusQuery(status);

    if (!loopWaitResponse.isNull())
    {
        loopWaitResponse->quit();
    }
}

void AbstractApiMethod::onTimeout()
{
    emit statusErrorQuery("Error, timeout.");

    loopWaitResponse->quit();
}
