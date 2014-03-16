/** * @author thurberdog*/
/***  * M e n u I t e m S e l e c t e d  **/
//--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Copyright: Positively Front Street, Inc
// DBA: mobiFoundry 
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options. 
// Date: Nov 11th 2009
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
// 11Nov09 LPM modified by Louis Meadows, modified to add Espana and English checks
// 11NOV09 LPM and calls to handling methods.
// 13NOV10 LPM Add screen to select language. 
// 14JAN10 LPM Louis Meadows, created seperate javascript file 
// 29JAN10 LPM Added javascript code for switch to Finnish text provided by Niklas 
// 29JAN10 LPM Continued Finnish
//--------------------------------------------------------------------------------------// 
function MenuItemSelected(id){

    switch (id) {
    
        case MENU_ITEM_ABOUT:
            AboutView();
            break;
         
        case MENU_ITEM_MAIN:
            MainView();
            break;
			
        case MENU_ITEM_JOB:
		    AJobView();
			break;
			
        case MENU_ITEM_LABOR:
		    JobLaborView();
			break;
			
        case MENU_ITEM_MATERIALS:
		    JobMaterialsView();
			break;
			
        case MENU_ITEM_TASK: 
		    JobTaskView();
			break; 
			         
        case CMD_CURSOR_MODE:			// Enable cursor mode navigation
    	    window.widget.setNavigationEnabled(true);
            break;
            
        case CMD_TAB_MODE:
		    window.widget.setNavigationEnabled(false);
            break;
	
            
    }
}

