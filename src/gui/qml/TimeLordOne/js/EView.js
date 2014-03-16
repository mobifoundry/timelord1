/** * @author thurberdog */
/**  * E m p l o y e e V i e w  *
  * Called when the Labor button is clicked in JobView screen.  **/
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
// 30JAN10 LPM split out from JobLaborView
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
// 21APR10 LPM Continue improving labor traking features, new screen for each employee with 
//         the clock in of out button.  A panel timesheet for each is shown
// 09SEP11 LPM continue iphone/Android port removing Nokia specific code
 // 13SEP11 LPM continue port to android lots of work to do here yet
//--------------------------------------------------------------------------------------//  

function EView() 
{
   Empnum = ++Empcount;  // asume possible new employee unless over written below
   
   name  = nameField.getText();

    if (name.length == "") 
	   {
        alert(2000, "warning", WARN001);
		return;
        }
 	
    for (x in names) 
		    {
            if (names[x] == name) // Matches Existing Employee...
               {
                Empnum = x;
		        EmployeeView = EmployeeViews[Empnum]	
				
			    IF (EmployeePanel =! null) 
				{
					EmployeeView.removeControl(EmployeePanel);
				}
				
                EmployeePanel = new ContentPanel(null,LBL006,clockedInEmps[Jobnum] , true, false);	
                EmployeeView.addControl(EmployeePanel);									
                uiManager.setView(EmployeeView);							
	            uiManager.showNotification(4500, "info", LBL025);
				break;			
                }
             }
			 
	if (Empnum == Empcount+1)	// we have a new employee 
		{
			Empcount=Empnum;
			names[Empnum] = name;
			
			uiManager.showNotification(4000, "warning", WARN003);	
	        EmployeeView   = new ListView(MENU_ITEM_EMPLOYEE,name);
            uiManager.setView(EmployeeView);			
	        EmployeeViews[Empnum] = EmplyeeView;	
			
	        clockInButton  = new FormButton(null, cinButtonText);
            clockOutButton = new FormButton(null, coButtonText);
            clockInButton.addEventListener("ActionPerformed", ClockIn );
            clockOutButton.addEventListener("ActionPerformed", ClockOut );	
            EmployeeView.addControl(clockInButton);	
            EmployeePanel = new ContentPanel(null, WARN003 ," " ,true, false);	
            EmployeeView.addControl(EmployeePanel);								
            uiManager.setView(EmployeeView);					
		}	
  
 
}
