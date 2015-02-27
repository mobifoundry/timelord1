#include "cuttinglog.h"

CuttingLog::CuttingLog(QObject *parent) :
    QObject(parent)
{
}

float CuttingLog::x() const
{
    return m_x;
}

void CuttingLog::setX(float x)
{
    m_x = x;
}

float CuttingLog::y() const
{
    return m_y;
}

void CuttingLog::setY(float y)
{
    m_y = y;
}

float CuttingLog::width() const
{
    return m_width;
}

void CuttingLog::setWidth(float width)
{
    m_width = width;
}

float CuttingLog::height() const
{
    return m_height;
}

void CuttingLog::setHeight(float height)
{
    m_height = height;
}

QString CuttingLog::name() const
{
    return m_name;
}

void CuttingLog::setName(QString name)
{
    m_name = name;
}

QQmlListProperty<QObject> CuttingLog::qmlCells()
{
    return QQmlListProperty<QObject>(this, m_cells);
}

QObjectList CuttingLog::cells() const
{
    return m_cells;
}

void CuttingLog::setCells(const QObjectList &cells)
{
    if (cells != m_cells)
    {
        m_cells = cells;
        emit cellsChanged();
    }
}

