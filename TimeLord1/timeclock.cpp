#include "timeclock.h"
//The QList::iterator class provides an STL-style non-const iterator for QList and QQueue.
#include <iterator>
//The QStringList class provides a list of strings.
#include <QStringList>
#include <QDateTime>
#include <QDebug>

TimeClock::TimeClock()

{
// connect signals and slots here
}
//
// @author thurberdog
//
//
// s t a r t C l o c k
//
// Called when the Clocked in button is clicked.
// 14JAN10 Louis Meadows, created separate javascript file
// 21AUG11
// 07MAY15 LPM, moved into QML
// 05MAY15 LPM, recode iterator loop started
//              changed from javascript to c++
void TimeClock::startClock(QString empName)
{
        QDateTime * dateTime = new QDateTime();
        clock = dateTime->time();
        hh = clock.hour();
        mm = clock.minute();
        ss = clock.second();
        qDebug() << hh << ":" << mm << ":" << ss;
        hh = pad(hh);
        mm = pad(mm);
        ss = pad(ss);
 //       timeStamp = hh + ":" + mm + ":" + ss;

        if (empName == "") {

            //  uiManager.showNotification(3000, "warning", WARN001.fontcolor("Purple"));
        } else {
            empNum = ++empCount; // asume new employee unless over written below

            for (int x=0;x<empCount;x++)
            {
                if (names[x] == m_name) {
                    // May be Existing Employee...
                    empNum = x;
                    clockInTimes[empNum] = timeStamp;
                }
            }
            if (empNum == empCount) {
                names[empNum] = m_name;
                clockInTimes[empNum] = timeStamp;
                totalTime[empNum] = 0;
            }

            if (clockedInEmps[jobNum].isNull()) {
//                clockedInEmps[jobNum] = "# " + empNum + " : " + m_name + LBL024 + timeStamp + "<br>";
            } else {
//                clockedInEmps[jobNum] += "# " + empNum + " : " + m_name + LBL025 + timeStamp + "<br>";
            }
            //        uiManager.showNotification(3000, "info","# " +
            //                                   Empnum + " : " +
            //                                   name + LBL009 + timestamp );
            //        nameField.value = "";
        }
    }

/** * @author thurberdog */
//--------------------------------------------------------------------------------------//
// Application: TimeLord1
// Company: Positively Front Street, Inc
// DBA: mobiFoundry
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options.
// Date: FEB 10th 2010
// Description: Job Management - Time and materials application
// TimeLord1 is a Job based tracking of Labor, Materials and Tasks (to-do list).
// It allows a Contractor to clock in/out personnel, track materials use and
// task completion.  Supports up to 10 job locations with employees/subcontractors,
// materials and tasks at each. Advanced version supports bluetooth/location based
// clock in/out of employees/subcontractors when all jobs must run concurrently
// and on schedule.  Labor and Materials tracking in real time provides for maximizing
// profit by reducing these key costs. Tracking and assigning of Job tasks allows for
// better completion estimates for builders and project planners alike. Timelord1 was
// designed to run on the Nokia E51/71 business phone.
// 10FEB10 LPM improved clockin/clockout
// 10FEB10 LPM split out from ClockOut.js
// 06OCT11 LPM continued iphone / android port
// 08OCT11 LPM changed pad to Pad
// 07MAY15 LPM changed Pad to pad and moved into QML
// 16JUN15 LPM moved from QML to c++
//--------------------------------------------------------------------------------------//

int TimeClock::pad(int i) {
    if (i < 10) {
//        i = "0" + i;
    }
    return i;
}
void TimeClock::stopClock(QString empName)
{
m_name = empName;
}
void TimeClock::setName(QString name)
{
    if (m_name == name)
        return;
    m_name = name;
    emit nameChanged(name);
}
QString TimeClock::getName() const
{
    return m_name;
}
void TimeClock::calulateElapsedTime() {

    elapsedHours = milliSecondsRemaining / hour; //Milliseconds still remaining for - lessthan an hour's worth,Get 1 minute in milliseconds
    milliSecondsRemaining = milliSecondsRemaining % hour;
    elapsedMinutes = milliSecondsRemaining/ minute; //Milliseconds still remaining for -less than a minute's worth.
    milliSecondsRemaining = milliSecondsRemaining % minute;
    elapsedSeconds = milliSecondsRemaining / second;
    elapsedMinutes = pad(elapsedMinutes);
    elapsedHours = pad(elapsedHours);
}

