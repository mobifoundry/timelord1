#ifndef ORDERITEM_H
#define ORDERITEM_H

#include <QVariantMap>

class OrderItem : public QObject
{
    Q_OBJECT

public:
    explicit OrderItem(QObject *parent = 0);

    Q_PROPERTY( QString id READ id WRITE setId NOTIFY idChanged )
    Q_PROPERTY( QVariantMap previews READ previews WRITE setPreviews NOTIFY previewsChanged)

    QString id() const;
    void setId(const QString &id);

    QVariantMap previews() const;
    void setPreviews(const QVariantMap &previews);

signals:

    void idChanged(QString arg);
    void previewsChanged();

private:

    QString m_id;
    QVariantMap m_previews;
};

#endif // ORDERITEM_H
