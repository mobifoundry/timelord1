#include "presssheettemplate.h"

PressSheetTemplate::PressSheetTemplate(QObject *parent) :
    QObject(parent)
{

}

QString PressSheetTemplate::id() const
{
    return m_id;
}

void PressSheetTemplate::setId(const QString &id)
{
    if ( id != m_id )
    {
        m_id = id;
        emit idChanged();
    }
}

QString PressSheetTemplate::url() const
{
    return m_url;
}

void PressSheetTemplate::setUrl(const QString &url)
{
    if ( url != m_url )
    {
        m_url = url;
        emit urlChanged();
    }
}

QString PressSheetTemplate::version() const
{
    return m_version;
}

void PressSheetTemplate::setVersion(const QString &version)
{
    if ( version != m_version )
    {
        m_version = version;
        emit versionChanged();
    }
}



bool PressSheetTemplate::enabled() const
{
    return m_enabled;
}

void PressSheetTemplate::setEnabled(const bool &enabled)
{
    if ( enabled != m_enabled )
    {
        m_enabled = enabled;
        emit enabledChanged();
    }
}

int PressSheetTemplate::width() const
{
    return m_width;
}

void PressSheetTemplate::setWidth(const int &width)
{
    if ( width != m_width )
    {
        m_width = width;
        emit widthChanged();
    }
}

int PressSheetTemplate::height() const
{
    return m_height;
}

void PressSheetTemplate::setHeight(const int &height)
{
    if ( height != m_height )
    {
        m_height = height;
        emit heightChanged();
    }
}

QQmlListProperty<QObject> PressSheetTemplate::qmlCells()
{
    return QQmlListProperty<QObject>(this, m_cells);
}

QObjectList PressSheetTemplate::cells() const
{
    return m_cells;
}

void PressSheetTemplate::setCells(const QObjectList &cells)
{
    //todo delete []
    m_cells = cells;
}

