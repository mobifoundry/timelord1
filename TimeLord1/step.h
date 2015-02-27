#ifndef STEP_H
#define STEP_H

#include <QObject>
#include <QStringList>

#include "cuttinglog.h"

class Step : public QObject
{
    Q_OBJECT
public:
    explicit Step(QObject *parent = 0);

    Q_PROPERTY(int rotate READ rotate WRITE setRotate NOTIFY rotateChanged)
    Q_PROPERTY(float cutPosition READ cutPosition WRITE setCutPosition NOTIFY cutPositionChanged)
    Q_PROPERTY(float cutLength READ cutLength WRITE setCutLength NOTIFY cutLengthChanged)
    Q_PROPERTY(bool waste READ waste WRITE setWaste NOTIFY wasteChanged)
    Q_PROPERTY(QStringList outLogNames READ outLogNames WRITE setOutLogNames NOTIFY outLogNamesChanged)
    Q_PROPERTY(QStringList putLogNames READ putLogNames WRITE setPutLogNames NOTIFY putLogNamesChanged)
    Q_PROPERTY(int finished READ finished WRITE setFinished NOTIFY finishedChanged)
    //Q_PROPERTY(QQmlListProperty<QObject> cuttingLogs READ qmlCuttingLogs NOTIFY cuttingLogsChanged)

    int rotate() const;
    void setRotate(int rotate);

    float cutPosition() const;
    void setCutPosition(float cutPosition);

    float cutLength() const;
    void setCutLength(float cutLength);

    bool waste() const;
    void setWaste(bool waste);

    QStringList outLogNames() const;
    void setOutLogNames(const QStringList &outLogNames);

    QStringList putLogNames() const;
    void setPutLogNames(const QStringList &putLogNames);

    int finished() const;
    void setFinished(int finished);

    //QQmlListProperty<QObject> qmlCuttingLogs();
    QList<CuttingLog *> cuttingLogs() const;
    void setCuttingLogs(const QList<CuttingLog *> &cuttingLogs);

private:
    int m_rotate;
    float m_cutPosition;
    float m_cutLength;
    bool m_waste;
    int m_finished;

    QStringList m_outLogNames;
    QStringList m_putLogNames;
    QList<CuttingLog *> m_cuttingLogs;

signals:

    void cutPositionChanged();
    void rotateChanged();
    void cutLengthChanged();
    void wasteChanged();
    void outLogNamesChanged();
    void putLogNamesChanged();
    void finishedChanged();
    void cuttingLogsChanged();
};

#endif // STEP_H
