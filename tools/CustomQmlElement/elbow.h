#ifndef ELBOW_H
#define ELBOW_H

#include <QQuickItem>
#include <QQuickPaintedItem>
#include <QPainter>

class Elbow : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)
    Q_PROPERTY(quint32 rightArmHeight READ rightArmHeight WRITE setRightArmHeight NOTIFY rightArmHeightChanged)
    Q_PROPERTY(quint32 leftArmWidth READ leftArmWidth WRITE setLeftArmWidth NOTIFY leftArmWidthChanged)

public:
    explicit Elbow(QQuickItem *parent = 0);

    QColor color() const;
    void setColor(const QColor &color);

    quint32 rightArmHeight() const;
    void setRightArmHeight(const quint32 &heightRight);

    quint32 leftArmWidth() const;
    void setLeftArmWidth(const quint32 &widthLeft);

private:
    void paint(QPainter *painter);

    QColor m_color;
    quint32 m_rightArmHeight;
    quint32 m_leftArmWidth;


signals:
    void colorChanged();
    void rightArmHeightChanged();
    void leftArmWidthChanged();

public slots:

};

#endif // ELBOW_H
