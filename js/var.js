/**
 * @author thurberdog
 * 14JAN10 Louis Meadows, created seperate javascript file 
 */
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
// 29JAN10 LPM continued with finnish
// 21AUG11 LPM bring function (){ together to find error TypeError: Result of expression near '...})()...' [undefined] is not a function.
//--------------------------------------------------------------------------------------// 
function createVars() {
var uiManager             = null;
var aboutView             = null;
var LanguageView          = null;
var mainView              = null;
var JobView               = null;
var LaborView             = null;
var MaterialsView         = null;
var MaterialsPriceView    = null; 
var MaterialsQuantityView = null;
var taskView              = null;
var aboutPanel;
var infoPanel;
var LaborPanel;      
var MaterialsPanel;
var taskPanel;
var RegisterTape   = [];  // tracks materials for Job
var TimeSheet      = [];  // tracks time for each Job
var TimeCard       = [];  // tracks time for each employee
var tasklist       = [];  // tracks task list for each Job
var WRTversion;
var currentScreenView = "splashScreenView";
var screenheight;
var h;
var w;
// Reference to controls in the main view.
var addtaskButton;
var completetaskButton;
var clockInButton;
var clockOutButton;
var MaterialsButton;

var MaterialsPriceButton;
var MaterialsQuantityButton;
var taskButton;

var JobButton;
var LaborButton;

var timestamp;
var JobField;
var Job;
var Jobs     = [];
var Jobnum   = 0;
var Jobcount = 0;
var existingJob;
var activejobs = "";
var material;
var materialsField;
var materialsQuantityField;
var materialQuantity;
var price;
var totalprice;
var totalmaterials = [];
var totaltime      = [];
var nameField;
var priceField;
var taskField;
var Empcount      = 0;
var Empnum        = 0;
var names         = [];
var clockInTimes  = []; // using calander api in version 2 for Nokia WRT 1.1
var clockOutTimes = []; // interface not supported in Nokia WRT 1.0
var elapsedTime   = [];
var clockTotals   = [];
var clockedInEmps = [];

var x;

//about view label control
var aboutLabel;
var LanguageLabel;
var JobLabel;
var LaborLabel;
var MaterialsLabel;
var taskLabel;
var second            = 1000;// milliseconds	
var minute            = second * 60;
var hour              = minute * 60;
var day               = hour * 24;

// Constants for menu item identifiers.

var MENU_ITEM_ABOUT              = 0;
var MENU_ITEM_LANGUAGE           = 1;
var MENU_ITEM_JOB                = 2;
var MENU_ITEM_LABOR              = 3;
var MENU_ITEM_MATERIALS          = 4;
var MENU_ITEM_MATERIALS_PRICE    = 5;
var MENU_ITEM_MATERIALS_QUANTITY = 6;
var MENU_ITEM_MAIN               = 7;
var MENU_ITEM_TASK               = 8;
var CMD_CURSOR_MODE              = 9;
var CMD_TAB_MODE                 = 10;
var MENU_ENGLISH                 = 11;
var MENU_ESPANA                  = 12;
var MENU_SWEDISH                 = 13;
var MENU_FINNISH                 = 14;

var aboutMenuItem
var mainMenuItem
var JobMenuItem
var LaborMenuItem
var MaterialsMenuItem
var cursorModeMenuItem
var tabModeMenuItem
var EnglishMenuItem
var EspanaMenuItem
var SwedishMenuItem
var FinnishMenuItem
}
