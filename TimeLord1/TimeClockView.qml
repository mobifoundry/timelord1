import QtQuick 2.0
import QtQuick.Controls 1.2
import QtPositioning 5.4
import QtQuick.Enterprise.Controls 1.3
import QtQuick.Dialogs 1.2

Rectangle {
signal empClockIn(string empName);
signal empClockOut(string empName);
signal empManage(string empName);
property var jobnum
property var empnum
property string name
property string names
property var totaltime;
property var timestamp;
property var lbl009
property var lbl024;
property var lbl025;
property string elapsedTime
property string clockOutTimes
property var elapsedDays
property var elapsedHours
property var milliSecondsRemaining
property var elapsedMinutes
property var elapsedSeconds
property var hh
property var mm
property var ss
property string clockInTimes;
property var clockedInEmps;
property int empcount: 0;
color:"purple"
Image {
    id: banner
    x: 0
    y: 0
    fillMode: Image.PreserveAspectFit
    width: parent.width
    height: parent.height / 10
    source: "qrc:/../images/small_logo.png"
}

Button {
    id: clockInButton
    x: 112
    y: 221
    text: qsTr("Clock In")
    onClicked: {
        clockIn();
        console.log("clock In")
        empClockIn(name);
    }
}

Button {
    id: clockOutButton
    x: 211
    y: 221
    text: qsTr("Clock Out")
    onClicked: {
        clockOut();
        console.log("Clock Out");
        empClockOut(name)
    }
}

Button {
    id: manageEmployeeButton
    x: 310
    y: 221
    text: qsTr("Manage Employee")
    onClicked: {
        console.log("Manage Employee");
        empManage(name);
    }
}

Image {
    id: image1
    x: 146
    y: 86
    source: "Images/Picture 409.png"
}


MessageDialog {
    id: messageDialogClockIn
    icon: StandardIcon.Information
    visible: false
    title: "Info"
    text: "info #" +
               empnum + " : " +
               name + lbl009 + timestamp

    standardButtons: StandardButton.Ok
    onAccepted: {
        console.log("Clock In")
        messageDialogClockIn.close()
    }
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
function clockIn(event){



    var clock = new Date();
    hh    = clock.getHours();
    mm    = clock.getMinutes();
    ss    = clock.getSeconds();
    var x     = 0;

    hh        =pad(hh);
    mm        =pad(mm);
    ss        =pad(ss);
    timestamp = hh + ":" + mm + ":" + ss;

    if (name === "")	{
      //  uiManager.showNotification(3000, "warning", WARN001.fontcolor("Purple"));
    }
    else {
        empnum = ++empcount;  // asume new employee unless over written below
         for (x in names)
         {
            if (names[x] === name) { // May be Existing Employee...
                empnum = x;
                clockInTimes[empnum] = clock;
             }
        }
        if ( empnum === Empcount ){
           names[empnum]        = name;
           clockInTimes[empnum] = clock;
           totaltime[empnum]    = 0;
           }

        if (clockedInEmps[jobnum] == null)
        {
               clockedInEmps[jobnum] ="# " + empnum + " : " +
                                      name + LBL024 + timestamp +  "<br>";
               }
        else {
               clockedInEmps[jobnum] +="# " + empnum +
                                        " : " + name + LBL025 + timestamp + "<br>";
               }
//        uiManager.showNotification(3000, "info","# " +
//                                   Empnum + " : " +
//                                   name + LBL009 + timestamp );
//        nameField.value = "";
    }


}
function pad(i)	{
    if (i < 10) {
        i = "0" + i;
    }
    return i;
}
/**
 * @author thurberdog
 *
**
  *
  * C l o c k O u t
  *
  * Called when the clocked out button is clicked.
  * 14JAN10 Louis Meadows, created javascript file
  * 21AUG11 LPM
  * 07MAY15 LPM, moved to QML
  **/

function clockOut(event){


    var clock = new Date();
    hh    = clock.getHours();
    mm    = clock.getMinutes();
    ss    = clock.getSeconds();

    hh = pad(hh);
    mm = pad(mm);
    ss = pad(ss);

    timestamp = hh + ":" + mm;
    console.log("Current Timestamp:",timestamp)

      for (x in names)	  {
            if (names[x] === name){
                empnum = x;
                clockOutTimes[empnum] = clock;
             }
        }

    //Get elapsed time.
    elapsedTime[empnum] = clockOutTimes[empnum] - clockInTimes[empnum];
    //Get 1 day in milliseconds
    if ( totaltime[jobnum] === null ){
       totaltime[jobnum] = elapsedTime[empnum];
       }
    else {
       totaltime[jobnum] += elapsedTime[empnum];
       }

    elapsedDays = Math.floor(elapsedTime[empnum] / day);
    var milliSecondsRemaining = elapsedTime[empnum] % day;

    //Milliseconds still unaccounted for - less than aday's worth.
    //Get 1 hour in milliseconds

    elapsedHours = Math.floor(milliSecondsRemaining / hour);
    milliSecondsRemaining = milliSecondsRemaining % hour;

    //Milliseconds still unaccounted for - lessthan an hour's worth.
    //Get 1 minute in milliseconds

    elapsedMinutes = Math.floor(milliSecondsRemaining / minute);
    milliSecondsRemaining = milliSecondsRemaining % minute;

    //Milliseconds still unaccounted for -less than a minute's worth.

    elapsedSeconds = Math.round(milliSecondsRemaining / second);

    if (name === "") 		{
     //   uiManager.showNotification(3000, "warning", WARN001);
        }
    else {
     //   uiManager.showNotification(3000, "info",
     //   elapsedHours + LBL026 + elapsedMinutes + " Minutes " + "  " + name);
        }
 //   menu.setRightSoftkeyLabel(viewlbljob,AJobView );
    }

/** * @author thurberdog */
/**  *  * C l o c k O u t  *  * Called when the clocked out button is clicked.  *  */
//--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Copyright: Positively Front Street, Inc
// DBA: mobiFoundry
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options.
// Date: FEB 10 2010
// Description: Job Management - Time and materials application
//
// TimeLord1 is a Job based tracking of Labor, Materials and Tasks (to-do list).
// It allows a Contractor to clock in/out personnel, track materials use and
// task completion.  Supports up to 10 job locations with employees/subcontractors,
// materials and tasks at each. Advanced version supports bluetooth/location based
// clock in/out of employees/subcontractors when all jobs must run concurrently
// and on schedule.  Labor and Materials tracking in real time provides for maximizing
// profit by reducing these key costs. Tracking and assigning of Job tasks allows for
// better completion estimates for builders and project planners alike. Timelord1 was
// designed to run on the Nokia E51/71 business phone.
//
// 14JAN10 LPM split javascript file
//
// 28JAN10 LPM General clean up after v112 failed OVI QA
// 29JAN10 LPM Continued Finnish
// 30JAN10 LPM removed button and move to softkey
// 10FEB10 LPM improved clockin/clockout
// 20APR10 LPM OVI QA has asked for End Date
//         "Dear Publisher,
//         We have added a compatible device to increase its global distribution for this content.
//         We now have a requirement that all signed content must have an End Publish Date that is on or before the certificate’s expiry date.
//         Since your content was published before this requirement was in effect,
//         we are providing a 30 day window for you to add in the End Publish Date for this content.
//         If the changes are not made after 30 days, we will be unpublishing your content.
//         Should you have any questions, please contact the Ovi Publish Support team at PublishToOvi.Support@nokia.com.
//
//         You can view the whole comment thread at
//         https://publish.ovi.com/download_items/show/38566
//
//         If you have any questions, please contact us through the Support page at https://publish.ovi.com/help/feedback
//         or email us at PublishToOvi.Support@nokia.com."
//
//         Set end date in store to April 20th 2012, two years out
//         Could not do without content getting taken down from store and new QA
//         So reviewing all modules and improving where possible
//
// 04OCT11 LPM iphone / android port continues
// 06OCT11 LPM
// 18OCT11 LPM bb port / bug fix
// 18OCT11 LPM getting ready for blackberry port and a show pass!
//--------------------------------------------------------------------------------------//
function clockOut2(event)

{


    if (name=== "")
       {
     //   uiManager.showNotification(2000, "warning", WARN001);
        return;
        }
   var clock = new Date();

    hh    = pad(clock.getHours());
    mm    = pad(clock.getMinutes());
    ss    = pad(clock.getSeconds());


    timestamp = hh + ":" + mm + ":" + ss;  // construct timestamp
      for (x in names)
        {
        x = names.indexOf(name, 0);
        if (names[x] === name)
             {
                empnum = x;
                clockOutTimes[empnum] = clock;
             }
        }

    //Get elapsed time,1 day in milliseconds
    elapsedTime[empnum] = clockOutTimes[empnum] - clockInTimes[empnum];

    if ( totaltime[jobnum] === null )
       {
       totaltime[jobnum] = elapsedTime[empnum];
       }
    else
       {
       totaltime[jobnum] += elapsedTime[empnum];
       }

    elapsedDays = Math.floor(elapsedTime[empnum] / day);
    milliSecondsRemaining = elapsedTime[empnum] % day;
    calulateElapsedTime();

    if (name === "")
        {
  //      uiManager.showNotification(3000, "warning", WARN001);
        }
    else
        {
  //      uiManager.showNotification(3000, "info",elapsedHours + LBL026 + elapsedMinutes + " Minutes " + "  " + name);
        }

  if (EmployeePanel != null)
            {
//           EmployeePanel = new ContentPanel(null,LBL006,clockedInEmps[Jobnum] , true, false);
//           EmployeeView.addControl(EmployeePanel);
            }
        else
            {
//            EmployeePanel = new ContentPanel(null, WARN003 ," " ,true, false);
            }
 if (LaborPanel != null)
            {
        //    LaborPanel = new ContentPanel(null,LBL006,clockedInEmps[Jobnum] , true, false);
        //    LaborView.addControl(EmployeePanel);
            }
        else
            {
        //    LaborPanel = new ContentPanel(null, WARN003 ," " ,true, false);
            }
//  LaborLabel.setText("#" + jobnum + " : " + Job );
//  EmployeeLabel.setText("#" + jobnum + " : " + Job );
//  uiManager.setView(JobView);
    }
/** * @author thurberdog */
//--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Company: Positively Front Street, Inc
// DBA: mobiFoundry
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options.
// Date: FEB 10th 2010
// Description: Job Management - Time and materials application
//
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
//--------------------------------------------------------------------------------------//
function calulateElapsedTime(){

    elapsedHours = Math.floor(milliSecondsRemaining / hour);	//Milliseconds still remaining for - lessthan an hour's worth,Get 1 minute in milliseconds
    milliSecondsRemaining = milliSecondsRemaining % hour;
    elapsedMinutes = Math.floor(milliSecondsRemaining / minute);	//Milliseconds still remaining for -less than a minute's worth.
    milliSecondsRemaining = milliSecondsRemaining % minute;
    elapsedSeconds = Math.round(milliSecondsRemaining / second);
    elapsedMinutes = pad(elapsedMinutes);
    elapsedHours = pad(elapsedHours);

    }

}

