/** * @author thurberdog */
/**  *  * A J o b V i e w
  * Author: Louis Meadows   **/
 //--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Copyright: Positively Front Street, Inc
// DBA: mobiFoundry 
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options. 
// Date: 12 Oct 2009
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
//
// 14JAN10 LPM split javascript file
//
// 28JAN10 LPM General clean up after v112 failed OVI QA
// 29JAN10 LPM Continued Finnish
 // 13SEP11 LPM continue port to android 
//--------------------------------------------------------------------------------------// 
function JobView() {
 
 var mydiv = document.getElementById('language');
  var job = document.getElementById('job');
  mydiv.innerHTML = '<h1>"job"<h1>';
  mydiv.innerHTML = '<form align="center">' +
                      '<div>' +
                       '<div onclick="LaborView()"><img id="labor" src="images/button_bg.png" height="10%"  width="50%"   alt="Go"/>' +
		                  '<div style="position: relative;top: -55px;font: 22pt Haettenschweiler, Georgia, brush script mt,impact,arial,verdana;font-weight:bold;color: #0F3300;align="center"">Labor' +
		                  '</div>' +
                       '</div> ' +
                      '<div onclick="MaterialsView()"><img id="material" src="images/button_bg.png" height="10%"  width="50%"   alt="Go"/>' +
		                  '<div style="position: relative;top: -55px;font: 22pt Haettenschweiler, Georgia, brush script mt,impact,arial,verdana;font-weight:bold;color: #0F3300;align="center"">Material' +
		                  '</div>' +
                       '</div> ' +
                       '<div onclick="TaskView()"><img id="task" src="images/button_bg.png" height="10%"  width="50%"   alt="Go"/>' +
		                  '<div style="position: relative;top: -55px;font: 22pt Haettenschweiler, Georgia, brush script mt,impact,arial,verdana;font-weight:bold;color: #0F3300;align="center"">Task' +
		                  '</div>' +
                       '</div> ' + 
                          '<div onclick="MainView()"><img id="main" src="images/button_bg.png" height="10%"  width="50%"   alt="Go"/>' +
		                  '<div style="position: relative;top: -55px;font: 22pt Haettenschweiler, Georgia, brush script mt,impact,arial,verdana;font-weight:bold;color: #0F3300;align="center"">Main View' +
		                  '</div>' +
                       '</div> ' +                                       
                    '</div></form> ';
                    
   if (totaltime[Jobnum] > 0) {	   	//Milliseconds still remaining - less than aday's worth,Get 1 hour in milliseconds	   	
	                 elapsedDays = Math.floor(totaltime[Jobnum] / day);
	                 milliSecondsRemaining = totaltime[Jobnum] % day;	
                     CalulateElapsedTime();
                     LaborButtonText = LaborButtonText + " " + elapsedHours + ":" + elapsedMinutes;
                     }
	          
  if (totalmaterials[Jobnum] > 0) {
                     MaterialsButtonText = MaterialsButtonText + " $" + totalmaterials[Jobnum];
  	                 }
}

