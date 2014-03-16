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
//
//--------------------------------------------------------------------------------------// 
function CalulateElapsedTime(){

	elapsedHours = Math.floor(milliSecondsRemaining / hour);
	//Milliseconds still remaining for - lessthan an hour's worth,Get 1 minute in milliseconds
	milliSecondsRemaining = milliSecondsRemaining % hour; 
	elapsedMinutes = Math.floor(milliSecondsRemaining / minute);
	//Milliseconds still remaining for -less than a minute's worth.
	milliSecondsRemaining = milliSecondsRemaining % minute; 
	elapsedSeconds = Math.round(milliSecondsRemaining / second);
	elapsedMinutes = pad(elapsedMinutes);
	elapsedHours = pad(elapsedHours);
	
	}	