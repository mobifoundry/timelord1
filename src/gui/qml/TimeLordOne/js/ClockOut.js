/**
 * @author thurberdog
 */
/**
  *
  * C l o c k O u t
  *
  * Called when the clocked out button is clicked.  
  * 14JAN10 Louis Meadows, created javascript file
  **/
//--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Copyright: Positively Front Street, Inc
// DBA: mobiFoundry 
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options. 
// Date: Oct 2nd 2009
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
// 04Nov09 RNM added Spanish text variables - all ending in "es" the international 2 
//         character code for SPAIN (Espana)
//		   Although you sent me an example with "es" on the end of the variable name,
//		   I felt it better to capitalize this, especially thinking ahead to the 20
//		   different language versions we intend to support.  So "es" became "ES"  OK?
//
// 11Nov09 Added code to switch from English to Espana
//
// 12JAN10 Added code for switch to Swedish text provided by Niklas 
// 13JAN10 modified by Louis Meadows
// 14JAN10 LPM split javascript file
//
// 28JAN10 LPM General clean up after v112 failed OVI QA
// 29JAN10 LPM Continued Finnish
// 30JAN10 LPM removed button and move to softkey
 // 13SEP11 LPM continue port to android 
//--------------------------------------------------------------------------------------// 
function ClockOut(event)

{
 
    var name  = nameField.getText();
    var clock = new Date();
    var hh    = clock.getHours();
    var mm    = clock.getMinutes();
    var ss    = clock.getSeconds();
	
    hh = Pad(hh);
    mm = Pad(mm);
    ss = Pad(ss);
		
    timestamp = hh + ":" + mm;
	
      for (x in names) 
	  {
            if (names[x] == name) 
            {
                Empnum = x;
                clockOutTimes[Empnum] = clock;
             }
        }	
  
    //Get elapsed time.
    elapsedTime[Empnum] = clockOutTimes[Empnum].getTime() - clockInTimes[Empnum].getTime();
    //Get 1 day in milliseconds
	if ( totaltime[Jobnum] == null ) 
	{
       totaltime[Jobnum] = elapsedTime[Empnum];
	   }
	else 
	{
	   totaltime[Jobnum] += elapsedTime[Empnum];
	   }
	   
    var elapsedDays = Math.floor(elapsedTime[Empnum] / day);
    var milliSecondsRemaining = elapsedTime[Empnum] % day;
	
    //Milliseconds still unaccounted for - less than aday's worth.
    //Get 1 hour in milliseconds
    
    var elapsedHours = Math.floor(milliSecondsRemaining / hour);
    milliSecondsRemaining = milliSecondsRemaining % hour;
	
    //Milliseconds still unaccounted for - lessthan an hour's worth.
    //Get 1 minute in milliseconds
    
    var elapsedMinutes = Math.floor(milliSecondsRemaining / minute);
    milliSecondsRemaining = milliSecondsRemaining % minute;
	
    //Milliseconds still unaccounted for -less than a minute's worth.
    
    var elapsedSeconds = Math.round(milliSecondsRemaining / second);
	
    if (name.length == "") 
		{
        alert(3000, "warning", WARN001);
    	}
    else 
		{
        alert(3000, "info", 
		elapsedHours + LBL026 + elapsedMinutes + " Minutes " + "  " + name);
        LaborView();  
    	}
	
    
	}

