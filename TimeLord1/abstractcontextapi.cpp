#include "abstractcontextapi.h"

AbstractContextApi::AbstractContextApi(QObject *parent) :
    QThreadPool(parent)
{
}

AbstractContextApi::~AbstractContextApi()
{
    while (activeThreadCount())// TODO fix
    {
        QApplication::processEvents();
        QThread::msleep(1);
    }
}

QByteArray AbstractContextApi::loadFileQrc(const QString path)
{
    if (!path.isEmpty())
    {
        QFile file(path);
        if(file.open(QIODevice::ReadOnly))
        {
            QTextStream in(&file);
            QString line = in.readAll();
            file.close();
            return line.toLocal8Bit();
        }
    }
    return "";
}

void AbstractContextApi::deleteObjectList(QList<QObject *> &objectList)
{
    foreach (QObject *object, objectList)
    {
        delete object;
    }
    objectList.clear();
}

QString AbstractContextApi::userName() const
{
    return m_userName;
}

void AbstractContextApi::setUserName(const QString &userName)
{
    m_userName = userName;
}

QString AbstractContextApi::password() const
{
    return m_password;
}

void AbstractContextApi::setPassword(const QString &password)
{
    m_password = password;
}

QString AbstractContextApi::clientName() const
{
    return m_clientName;
}

void AbstractContextApi::setClientName(const QString &clientName)
{
    m_clientName = clientName;
}

QString AbstractContextApi::host() const
{
    return m_host;
}

void AbstractContextApi::setHost(const QString &host)
{
    m_host = host;
}

QString AbstractContextApi::scheme() const
{
    return m_scheme;
}

void AbstractContextApi::setScheme(const QString &scheme)
{
    m_scheme = scheme;
}
