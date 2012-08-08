/** * @author thurberdog */
//--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Copyright: Positively Front Street, Inc
// DBA: mobiFoundry 
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options. 
// Date: Nov 13th 2009
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
// 13NOV10 LPM Add screen to select language. 
// 14JAN10 Louis Meadows, created seperate javascript file
// 29JAN10 LPM Added javascript code for switch to Finnish text provided by Niklas 
// 29JAN10 LPM Continued Finnish
// 21AUG11 LPM bring function (){ together to find error TypeError: Result of expression near '...})()...' [undefined] is not a function.
//--------------------------------------------------------------------------------------// 
function JobMenu(){

    // Create the menu items
    
    // Assign callback functions to menu items
    // The onSelect property of the MenuItem object is an event handler
    // for the event of when the menu item is selected. In other words, 
    // when the end user opens the options menu and selects a menu item 
    // either from the top-level menu list or from a submenu list, 
    // the system will fire an event and a widget can catch the event by 
    // providing a callback function.
    
    // The callback function is passed with an argument, 
    // which is an integer identifier identifying the menu item that was just selected. 
    
    // It is possible to assign an individual callback function for each menu item 
    // so that the id argument can be ignored.
	
	try {
      menu.clear();
      }
    catch(err)     {
      uiManager.showNotification(3000, "warning", WARN008 + err);
     }

    aboutMenuItem.onSelect      = MenuItemSelected;
    mainMenuItem.onSelect       = MenuItemSelected;
    JobMenuItem.onSelect        = MenuItemSelected;
	LaborMenuItem.onSelect      = MenuItemSelected; 
	MaterialsMenuItem.onSelect  = MenuItemSelected;
    cursorModeMenuItem.onSelect = MenuItemSelected;
    tabModeMenuItem.onSelect    = MenuItemSelected;
    
    // Tab mode is the default so let's add cursor mode item to the main menu
	
    menu.append(aboutMenuItem);
    menu.append(mainMenuItem);
	menu.append(JobMenuItem);
	menu.append(LaborMenuItem);
	menu.append(MaterialsMenuItem);
	menu.append(cursorModeMenuItem);	
    menu.append(tabModeMenuItem);


}

