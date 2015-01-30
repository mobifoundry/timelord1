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
// 21AUG11 LPM bring function (){ together to find error TypeError: Result of expression near '...})()...' [undefined] is not a function.
// 30JAN15 LPM conversion to QML/js
function mainView() {

  tone();
  if (mainView == null)  {
    window.menu.setRightSoftkeyLabel("Enter", JobsButtonClicked ); 	
  	mainView = new ListView(MENU_ITEM_MAIN, viewlblmain);
  	aboutPanel = new ContentPanel(null, TimeLord, LBL011 + VERSION.fontcolor("White") + author.fontcolor("Purple") +
  	                              "&copy 2009,2010,2011" + company.fontcolor("Red") + LBL001, true, false);
  	JobLabel = new Label();
  	JobButton = new FormButton(null, JobButtonText);
 	JobButton.addEventListener("ActionPerformed", JobsButtonClicked);
    JobField        = new TextField(null, WARN005);
    mainView.addControl(JobField);
    mainView.addControl(JobButton);	
    mainView.addControl(aboutPanel);		
    widget.setNavigationEnabled(false);
  }
   Jobnum = Jobcount;   // point to next empty job number
    // show the main view

}

