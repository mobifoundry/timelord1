/**
 * @author thurberdog
 */
	
/**
 * English
 * 11Nov09 Louis Meadows, orignal - changes language back to English
 * 13JAN10 Louis Meadows, updated.
 */
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
// 29JAN10 LPM Added javascript code for switch to Finnish text provided by Niklas 
// 29JAN10 LPM Continued Finnish\
// 05FEB10 LPM v121 fails to store clock in information 
// 06FEB10 LPM changed version to v122 to fix above regression 
//
// 15FEB10 LPM improving interface
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
// 09SEP11 LPM iphone/Android port
 // 13SEP11 LPM continue port to android 
//--------------------------------------------------------------------------------------// 
function English()
	{
 
	TimeLord = " TimeLord1 ";

	WARN001  = " Employee name or number ";
	WARN002  = " Please enter Job ";
	WARN003  = " Clock In";
	WARN004  = " Enter Job task to create a punch down list";
	WARN005  = "New Job name or existing number ";
	WARN006  = "Please enter your Material!";
	WARN007  = "Please enter the Price!";
	WARN008  = "clear menu failed";
	WARN009  = "enter Job task to complete";
	
	LBL001   = " Positively Front Street, Inc &copy 2009 ";
	LBL002   = "<br/>first enter a Job then Task, Labor and Materials ";
	LBL003   = "Enter Material";
	LBL004   = "employee name or number";
	LBL005   = "<br> Written By";
	LBL006   = " TimeSheet ";
	LBL007   = "Bill of Materials: $";
	LBL008   = "Materials name or number";
	LBL009   = " Clocked in!"; 
	LBL010   = "Enter Quantity";

	LBL011   = " Version ";
	LBL012   = "Job:";
	LBL013   = "Verison ";  
	LBL014   = " Quantity";
	LBL015   = "Price";
	LBL016   = "Purchase Price or zero if stock";
	LBL017   = "Enter Price per unit";
	LBL018   = "Add task";
	LBL019   = "Complete task";
	
	LBL020   = "Job Task";
	LBL021   = " Task List";
	LBL022   = "clear menu failed";
	LBL023   = " complete";
	LBL024   = " 1st on site ";
	LBL025   = " on crew ";
	LBL026   = " Hours ";
	LBL027   = " Active Jobs";
	LBL028   = " New Job: ";
	LBL029   = " Existing Job:  ";
	
	JobButtonText = "Job";
	MaterialsButtonText = "Materials";
	taskButtontext = "Task List";
	LaborButtonText = "Labor";
	cinButtonText = "Clock In";
	coButtonText = "Clock Out"; 
	menulblabout = "About";
	menulblmain  = "Main";
	menulbljob   = "Job"; 
	menulbllabor = "Labor"; 
	menulblmaterials = "Materials";
	menulblcursor = "Cursor mode";
	menulbltab ="Tab mode";
	viewlblmain = "MainView";
	viewlbllabor = "LaborView";
	viewlbljob = "JobView";
	viewlbltask = "TaskView";
    MainView(); 

	}
