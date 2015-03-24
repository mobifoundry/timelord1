#include "cell.h"

Cell::Cell(QObject *parent) :
    QObject(parent)
{
}

QString Cell::signatureType() const
{
    return m_signatureType;
}

void Cell::setSignatureType(const QString &signatureType)
{
    if (m_signatureType != signatureType)
    {
        m_signatureType = signatureType;
        emit signatureTypeChanged();
    }
}

int Cell::position() const
{
    return m_position;
}

void Cell::setPosition(const int position)
{
    if (m_position != position)
    {
        m_position = position;
        emit positionChanged();
    }
}

float Cell::width() const
{
    return m_width;
}

void Cell::setWidth(const float width)
{
    if (m_width != width)
    {
        m_width = width;
        emit widthChanged();
    }
}

float Cell::height() const
{
    return m_height;
}

void Cell::setHeight(const float height)
{
    if (m_height != height)
    {
        m_height = height;
        emit heightChanged();
    }
}

float Cell::x() const
{
    return m_x;
}

void Cell::setX(const float x)
{
    if (m_x != x)
    {
        m_x = x;
        emit xChanged();
    }
}

float Cell::y() const
{
    return m_y;
}

void Cell::setY(const float y)
{
    if (m_y != y)
    {
        m_y = y;
        emit yChanged();
    }
}

int Cell::rotation() const
{
    return m_rotation;
}

void Cell::setRotation(const int rotation)
{
    if (m_rotation != rotation)
    {
        m_rotation = rotation;
        emit rotationChanged();
    }
}

QString Cell::text() const
{
    return m_text;
}

void Cell::setText(const QString &text)
{
    if (m_text != text)
    {
        m_text = text;
        emit textChanged();
    }
}

int Cell::cuttingLogId() const
{
    return m_cuttingLogId;
}

void Cell::setCuttingLogId(const int cuttingLogId)
{
    if (m_cuttingLogId != cuttingLogId)
    {
        m_cuttingLogId = cuttingLogId;
        emit cuttingLogIdChanged();
    }
}
