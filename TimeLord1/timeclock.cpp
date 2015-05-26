#include "timeclock.h"

TimeClock::TimeClock()

{
// connect signals and slots here
}
//**
// * @author thurberdog
// */
//**
//  * C l o c k I n
//  *
//  * Called when the Clocked in button is clicked.
//  * 14JAN10 Louis Meadows, created separate javascript file
//    21AUG11
//    07MAY15 LPM, moved into QML
//  **/
void TimeClock::clockIn(QString empName)
{

        QTime clock = QDateTime.time();
        hh = clock.getHours();
        mm = clock.getMinutes();
        ss = clock.getSeconds();
        int x = 0;

        hh = pad(hh);
        mm = pad(mm);
        ss = pad(ss);
        timestamp = hh + ":" + mm + ":" + ss;

        if (name == "") {

            //  uiManager.showNotification(3000, "warning", WARN001.fontcolor("Purple"));
        } else {
            empnum = ++empcount // asume new employee unless over written below
            foreach(x) {
                if (names[x] == name) {
                    // May be Existing Employee...
                    empnum = x;
                    clockInTimes[empnum] = clock;
                }
            }
            if (empnum == Empcount) {
                names[empnum] = name;
                clockInTimes[empnum] = clock;
                totaltime[empnum] = 0;
            }

            if (clockedInEmps[jobnum] == null) {
                clockedInEmps[jobnum] = "# " + empnum + " : " + name + LBL024 + timestamp + "<br>";
            } else {
                clockedInEmps[jobnum] += "# " + empnum + " : " + name + LBL025 + timestamp + "<br>";
            }
            //        uiManager.showNotification(3000, "info","# " +
            //                                   Empnum + " : " +
            //                                   name + LBL009 + timestamp );
            //        nameField.value = "";
        }
    }
}
void pad(i) {
    if (i < 10) {
        i = "0" + i;
    }
    return i;
}
void TimeClock::clockOut(QString empName)
{

}
