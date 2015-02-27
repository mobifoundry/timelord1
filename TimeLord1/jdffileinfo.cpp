#include "jdffileinfo.h"

JdfFileInfo::JdfFileInfo(QObject *parent) :
    QObject(parent)
{
}

QString JdfFileInfo::nameFile() const
{
    return m_nameFile;
}

void JdfFileInfo::setNameFile(const QString &nameFile)
{
    if ( nameFile != m_nameFile )
    {
        m_nameFile = nameFile;
        emit nameFileChanged();
    }
}

long JdfFileInfo::size() const
{
    return m_size;
}

void JdfFileInfo::setSize(long size)
{
    if ( size != m_size )
    {
        m_size = size;
        emit sizeChanged();
    }
}

QString JdfFileInfo::lastModified() const
{
    return m_lastModified;
}

void JdfFileInfo::setLastModified(const QString &lastModified)
{
    if ( lastModified != m_lastModified )
    {
        m_lastModified = lastModified;
        emit lastModifiedChanged();
    }
}

QString JdfFileInfo::absoluteFilePath() const
{
    return m_absoluteFilePath;
}

void JdfFileInfo::setAbsoluteFilePath(const QString &absoluteFilePath)
{
    if ( absoluteFilePath != m_absoluteFilePath )
    {
        m_absoluteFilePath = absoluteFilePath;
        emit absoluteFilePathChanged();
    }
}
