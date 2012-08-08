/** * @author thurberdog */
/** *  * M a t e r i a l s U s e d  **/
//--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Copyright: Positively Front Street, Inc
// DBA: mobiFoundry 
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options. 
// Date: Oct 13th 2009
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
// 11Nov09 LPM Added code to switch from English to Espana
//
// 12JAN10 LPM Added code for switch to Swedish text provided by Niklas 
// 13JAN10 LPM updated
// 14JAN10 LPM split javascript file
// 27JAN10 LPM testing on simulor and E71x Materials can not be entered
// 27JAN10 LPM no action or call to JobMaterialsQuantityView()
// 27JAN10 LPM Howver to side of if works and returns user error message...
// 28JAN10 LPM General clean up after v112 failed OVI QA and to find root of materials failure
// 29JAN10 LPM Continue with Finnish
// 21AUG11 LPM bring function (){ together to find error TypeError: Result of expression near '...})()...' [undefined] is not a function.
//--------------------------------------------------------------------------------------// 
function MaterialsUsed(event){

    material = materialsField.getText();
    
    var clock    = new Date();
    var hh       = clock.getHours();
    var mm       = clock.getMinutes();
    var ss       = clock.getSeconds();
	
    hh = Pad(hh);
    mm = Pad(mm);
    ss = Pad(ss);	
    timestamp = hh + ":" + mm;
	
    if (material.length == "")  // user entered nothing !
	 {
		uiManager.showNotification(3000, "warning", WARN006);
		JobMaterialsView();
	  }
	else JobMaterialsQuantityView();
}
