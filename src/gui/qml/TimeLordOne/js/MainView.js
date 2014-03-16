//** * @author thurberdog */
//**
//  * M a i n V i e w
//  *
//  * Called from the onload event handler in TimeLord.html to initialize the widget.   **/

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
//
// 14JAN10 LPM split javascript file
//
// 28JAN10 LPM General clean up after v112 failed OVI QA
// 29JAN10 LPM Continued Finnish
// 30JAN10 LPM replaced Job button with Enter softkey
// 13AUG11 LPM C5-00 does not load adding back Job button
// 14AUG11 LPM added splash screen and view-hidden css to speed up load time and switch time
// 07SEP11 LPM porting to iphone
// 09SEP11 LPM getting addControl 'null' error in testing on JobField
 // 13SEP11 LPM continue port to android 
 // 14SEP11 LPM 
function MainView()
 {
  var mydiv = document.getElementById('language');	
    // show the main view
  mydiv.innerHTML = '<div><br><br><br><form id="jobsite" action="javascript:JobView()" method="post"  >' +
                       '<div style="position: relative;top: -49px;font: 24pt Haettenschweiler, Georgia, brush script mt,impact,arial,verdana;font-weight:bold;color: #0F3300;align="center"">' +
                       '<LABEL for="job">Job name/number: </LABEL>'+
                       ' <input type="text" id="job" name="job" />' +
                       '</div>' + 
                       '<input type="submit" id="emp" value="Enter" style="background-image: url(./images/button_bg.png); font: 24pt Haettenschweiler, Georgia, brush script mt,impact,arial,verdana;font-weight:bold;color: #0F3300;align="center"">' +                        
                       '</div></form> '+	
                       '<div><br><br><br> ' +     
                       '<form> ' + 
                          '<div onclick="AboutView()"><img id="main" src="images/button_bg.png" height="10%"  width="50%"   alt="Go"/>' +
		                  '<div style="position: relative;top: -55px;font: 22pt Haettenschweiler, Georgia, brush script mt,impact,arial,verdana;font-weight:bold;color: #0F3300;align="center"">About' +
		                  '</div>' +
                       '</div> ' + '</form>' ;      
}

function EnterEmp(name,number){
	 var mydiv = document.getElementById('language');	
     mydiv.innerHTML = '';
     
}


