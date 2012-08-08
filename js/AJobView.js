//** * @author thurberdog */
//**
//  *
//  * A J o b V i e w
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
// 15AUG11 LPM cleaning up load time to fix C5-00 no load condition
function AJobView() {

  if ( JobView == null ) {
    JobView       = new ListView(MENU_ITEM_JOB,viewlbljob);
    JobView.addControl(JobLabel);	
    LaborLabel = new Label();	
    LaborButton = new FormButton(null, LaborButtonText.fontcolor("White"));
    LaborButton.addEventListener("ActionPerformed", JobLaborView);
    MaterialsLabel = new Label();		
    MaterialsButton = new FormButton(null, MaterialsButtonText.fontcolor("White"));
    MaterialsButton.addEventListener("ActionPerformed", JobMaterialsView);
    taskLabel = new Label();	
    taskButton = new FormButton(null, taskButtontext.fontcolor("White"));
    taskButton.addEventListener("ActionPerformed", JobTaskView );
    JobView.addControl(LaborButton);	
    JobView.addControl(MaterialsButton);
    JobView.addControl(taskButton);	
	}
	
  else 
  {
 //   JobView.removeControl(LaborButton);
//	JobView.removeControl(MaterialsButton);
//	JobView.removeControl(taskButton);
	
	if (totaltime[Jobnum] > 0) 
	{
       var elapsedDays = Math.floor(totaltime[Jobnum] / day);
       var milliSecondsRemaining = totaltime[Jobnum] % day;    //Milliseconds still unaccounted for - less than aday's worth.
                                                               //Get 1 hour in milliseconds
       var elapsedHours = Math.floor(milliSecondsRemaining / hour);
       milliSecondsRemaining = milliSecondsRemaining % hour;    //Milliseconds still unaccounted for - lessthan an hour's worth.
                                                                //Get 1 minute in milliseconds
       var elapsedMinutes = Math.floor(milliSecondsRemaining / minute);
       milliSecondsRemaining = milliSecondsRemaining % minute;    //Milliseconds still unaccounted for -less than a minute's worth.
      var elapsedSeconds = Math.round(milliSecondsRemaining / second);
	  elapsedMinutes = pad(elapsedMinutes);
	  elapsedHours   = pad(elapsedHours);	
      LaborButton = new FormButton(null, 
	                               LaborButtonText.fontcolor("White")+
								   " " + elapsedHours + ":" + elapsedMinutes);
      LaborButton.addEventListener("ActionPerformed", JobLaborView);	
      }
	else 
	 {
	  LaborButton = new FormButton(null, LaborButtonText.fontcolor("White"));
      LaborButton.addEventListener("ActionPerformed", JobLaborView);
	  }
	if (totalmaterials[Jobnum] > 0) 
	 {
      MaterialsButton = new FormButton(null, 
	                                   MaterialsButtonText.fontcolor("White") + 
									   " $" + totalmaterials[Jobnum]);
      MaterialsButton.addEventListener("ActionPerformed", JobMaterialsView );
	  }
	else 
	 {
      MaterialsButton = new FormButton(null, MaterialsButtonText.fontcolor("White"));
      MaterialsButton.addEventListener("ActionPerformed", JobMaterialsView);
	  }	 
    taskButton = new FormButton(null, taskButtontext.fontcolor("White"));
    taskButton.addEventListener("ActionPerformed", JobTaskView );
    } 
    
    if (window.widget) {
        menu.setRightSoftkeyLabel(viewlblmain, MainView);
    }

    JobMenu();  
    uiManager.setView(JobView); 
	
					
}

