#include "orderitem.h"

OrderItem::OrderItem(QObject *parent) :
    QObject(parent)
{
}

QString OrderItem::id() const
{
    return m_id;
}

void OrderItem::setId(const QString &id)
{
    if (id != m_id)
    {
        m_id = id;
        emit idChanged(m_id);
    }
}

QVariantMap OrderItem::previews() const
{
    return m_previews;
}

void OrderItem::setPreviews(const QVariantMap &previews)
{
    if (m_previews != previews)
    {
        m_previews = previews;
        emit previewsChanged();
    }
}

