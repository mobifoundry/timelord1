//**
// * @author thurberdog
// */
///**
//  *
//  * A b o u t V i e w
//  * Written By: Louis Meadows
//  * Date: Sept 22 2009
//  * 14JAN10 Louis Meadows created seperated javascript file
//  **/
//--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Company: Positively Front Street, Inc
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
// 14JAN10 split javascript file
//
// 29JAN10 LPM added finish language file Finnish.js
// 21AUG11 LPM
//--------------------------------------------------------------------------------------//  

function AboutView(){

  if ( aboutView == null )   {
    aboutView     = new ListView(MENU_ITEM_ABOUT, menulblabout);
    aboutLabel = new Label();
    aboutLabel.setText(LBL005 +
                       author.fontcolor("White") +
                       "&copy 2009,2010" +
                       company.fontcolor("Blue"));
    aboutView.addControl(aboutLabel);		
	}
    
	uiManager.setView(aboutView);
// Sets the softkeys for about view.
    if (window.widget) {
        // set right softkey to (returns to main view)
        menu.setRightSoftkeyLabel(viewlblmain, MainView);
    }	
}