#ifndef TIMECLOCK_H
#define TIMECLOCK_H

#include <QObject>
#include <QDateTime>
#include <QStringList>

class TimeClock : public QObject
{
    Q_OBJECT

public:
    Q_PROPERTY( QString name READ getName WRITE setName NOTIFY nameChanged )
    explicit TimeClock();
    void setName(QString name);
    QString getName() const;

    void calulateElapsedTime();
public slots:

    void startClock(QString empName);
    void stopClock(QString empName);
signals:
    void nameChanged(QString name);
private:
    QTime clock;
    QString m_name;
    int hh;
    int mm;
    int ss;
    QString timeStamp;
    QString LBL024;
    QString LBL025;
    QStringList clockInTimes;
    QStringList clockedInEmps;
    QStringList names;
    int jobNum;
    int empNum;
    int empCount;
    QList<int> totalTime;
    int pad(int i);
    int elapsedHours;
    int milliSecondsRemaining;
    int elapsedMinutes;
    int elapsedSeconds;
    int hour;
    int minute;
    int second;

};

#endif // TIMECLOCK_H
