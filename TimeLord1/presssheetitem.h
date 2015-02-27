#ifndef PRESSSHEETITEM_H
#define PRESSSHEETITEM_H

#include <QObject>

class PressSheetItem : public QObject
{
    Q_OBJECT

public:
    explicit PressSheetItem(QObject *parent = 0);

    Q_PROPERTY( long long id READ id WRITE setId NOTIFY idChanged )
    Q_PROPERTY( int position READ position WRITE setPosition NOTIFY positionChanged )
    Q_PROPERTY( QString url READ url WRITE setUrl NOTIFY urlChanged )
    Q_PROPERTY( long long pressSheetId READ pressSheetId WRITE setPressSheetId NOTIFY pressSheetIdChanged )
    Q_PROPERTY( long long orderId READ orderId WRITE setOrderId NOTIFY orderIdChanged )
    Q_PROPERTY( QString orderItemId READ orderItemId WRITE setOrderItemId NOTIFY orderItemIdChanged )

    long long id() const
    {
        return m_id;
    }

    int position() const
    {
        return m_position;
    }

    QString url() const
    {
        return m_url;
    }

    long long pressSheetId() const
    {
        return m_pressSheetId;
    }

    long long orderId() const
    {
        return m_orderId;
    }

    QString orderItemId() const
    {
        return m_orderItemId;
    }

signals:

    void idChanged(long long arg);
    void positionChanged(int arg);
    void urlChanged(QString arg);
    void pressSheetIdChanged(long long arg);
    void orderIdChanged(long long arg);
    void orderItemIdChanged(QString arg);

public slots:

    void setId(long long arg)
    {
        if (m_id != arg) {
            m_id = arg;
            emit idChanged(arg);
        }
    }
    void setPosition(int arg)
    {
        if (m_position != arg) {
            m_position = arg;
            emit positionChanged(arg);
        }
    }
    void setUrl(QString arg)
    {
        if (m_url != arg) {
            m_url = arg;
            emit urlChanged(arg);
        }
    }
    void setPressSheetId(long long arg)
    {
        if (m_pressSheetId != arg) {
            m_pressSheetId = arg;
            emit pressSheetIdChanged(arg);
        }
    }
    void setOrderId(long long arg)
    {
        if (m_orderId != arg) {
            m_orderId = arg;
            emit orderIdChanged(arg);
        }
    }

    void setOrderItemId(QString arg)
    {
        if (m_orderItemId != arg) {
            m_orderItemId = arg;
            emit orderItemIdChanged(arg);
        }
    }

private:

    long long m_id;
    int m_position;
    QString m_url;
    long long m_pressSheetId;
    long long m_orderId;
    QString m_orderItemId;
};

#endif // PRESSSHEETITEM_H
