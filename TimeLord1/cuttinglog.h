#ifndef CUTTINGLOG_H
#define CUTTINGLOG_H

#include <QObjectList>
#include <QQmlListProperty>

#include "cell.h"

class CuttingLog : public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY(float x READ x WRITE setX NOTIFY xChanged)
    Q_PROPERTY(float y READ y WRITE setY NOTIFY yChanged)
    Q_PROPERTY(float width READ width WRITE setWidth NOTIFY widthChanged)
    Q_PROPERTY(float height READ height WRITE setHeight NOTIFY heightChanged)
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QQmlListProperty<QObject> cells READ qmlCells NOTIFY cellsChanged)

    explicit CuttingLog(QObject *parent = 0);


    float x() const;
    void setX(float x);

    float y() const;
    void setY(float y);

    float width() const;
    void setWidth(float width);

    float height() const;
    void setHeight(float height);

    QString name() const;
    void setName(QString name);

    QQmlListProperty<QObject> qmlCells();
    QObjectList cells() const;
    void setCells(const QObjectList &cells);

private:
    float m_x;
    float m_y;
    float m_width;
    float m_height;
    QString m_name;

    QObjectList m_cells;

signals:
    void xChanged();
    void yChanged();
    void widthChanged();
    void heightChanged();
    void nameChanged(QString name);
    void cellsChanged();
};

class FinishedCuttingLog : public CuttingLog{

    int stepWhenFinished;
};

class PutAsideCuttingLog : public CuttingLog{
    int stepWhenPutOut;
    int stepWhenPutIn;
};

#endif // CUTTINGLOG_H
