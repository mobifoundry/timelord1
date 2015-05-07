#ifndef TIMECLOCK_H
#define TIMECLOCK_H

#include <QObject>

class TimeClock
{

public:
    TimeClock();
    void clockIn(QString empName);
    void clockOut(QString empName);
};

#endif // TIMECLOCK_H
