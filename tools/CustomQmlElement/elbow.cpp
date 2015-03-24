#include "elbow.h"

Elbow::Elbow(QQuickItem *parent) :
    QQuickPaintedItem(parent),
    m_color(Qt::white),
    m_rightArmHeight(50),
    m_leftArmWidth(50)
{

}

void Elbow::paint(QPainter *painter)
{
    const quint8 pointCount = 4;

    const QPointF rightFigure[pointCount] =
    {
        QPointF(rightArmHeight() / 2, boundingRect().height() - rightArmHeight()),
        QPointF(boundingRect().width(), boundingRect().height() - rightArmHeight()),
        QPointF(boundingRect().width(), boundingRect().height()),
        QPointF(rightArmHeight() / 2, boundingRect().height())
    };

    const QPointF leftFigure[pointCount] =
    {
        QPointF(0, boundingRect().height() - rightArmHeight() / 2),
        QPointF(0, 0),
        QPointF(leftArmWidth(), 0),
        QPointF(leftArmWidth(), boundingRect().height() - rightArmHeight() / 2)
    };

    painter->save();
    painter->setRenderHint(QPainter::Antialiasing);
    painter->setPen(Qt::NoPen);
    painter->setBrush(m_color);

    painter->drawConvexPolygon(rightFigure, pointCount);
    painter->drawConvexPolygon(leftFigure, pointCount);
    painter->drawChord(boundingRect().x(), boundingRect().height() - rightArmHeight(),
                       rightArmHeight(), rightArmHeight(), 0, 360 * 16);
    painter->drawRect(leftArmWidth(), contentsBoundingRect().height() - rightArmHeight() * 1.5,
                      rightArmHeight() / 2, rightArmHeight());
    painter->setCompositionMode(QPainter::CompositionMode_Clear);
    painter->drawChord(boundingRect().x() + leftArmWidth(), boundingRect().height() - rightArmHeight() * 2,
                       rightArmHeight(), rightArmHeight(), 0, 360 * 16);
    painter->restore();
}

quint32 Elbow::leftArmWidth() const
{
    return m_leftArmWidth;
}

void Elbow::setLeftArmWidth(const quint32 &leftArmWidth)
{
    if (leftArmWidth != m_leftArmWidth)
    {
        m_leftArmWidth = leftArmWidth;
        emit leftArmWidthChanged();
    }
}

quint32 Elbow::rightArmHeight() const
{
    return m_rightArmHeight;
}

void Elbow::setRightArmHeight(const quint32 &rightArmHeight)
{
    if (rightArmHeight != m_rightArmHeight)
    {
        m_rightArmHeight = rightArmHeight;
        emit rightArmHeightChanged();
    }
}

QColor Elbow::color() const
{
    return m_color;
}

void Elbow::setColor(const QColor &color)
{
    if (color!= m_color)
    {
        m_color = color;
        emit colorChanged();
    }
}
