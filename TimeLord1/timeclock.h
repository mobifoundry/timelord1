#ifndef TIMECLOCK_H
#define TIMECLOCK_H

#include <QObject>
#include <QDateTime>
class TimeClock
{

public:
    Q_OBJECT
    Q_PROPERTY( QString name READ getName WRITE setName NOTIFY nameChanged )
    QString getName() const
    {
        return m_name;
    }

public slots:
    void setName(QString name)
    {
        if (m_name == name)
            return;

        m_name = name;
        emit nameChanged(name);
    }

signals:
    QString m_name;
    void nameChanged(QString name);


    explicit TimeClock();
    void clockIn(QString empName);
    void clockOut(QString empName);
};

#endif // TIMECLOCK_H
