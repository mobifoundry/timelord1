/** @author thurberdog*/
/** * Swedish */
//--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Copyright: Positively Front Street, Inc
// DBA: mobiFoundry 
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options. 
// Date: Jan 12th 2010
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

// 12JAN10 LPM Added javascript code for switch to Swedish text provided by Niklas 
// 13JAN10 LPM updated code flow
// 14JAN10 LPM split javascript file

// 27JAN10 LPM testing on simulor and E71x Materials can not be entered
// 27JAN10 LPM no action or call to JobMaterialsQuantityView()
// 27JAN10 LPM Howver to side of if works and returns user error message...
// 28JAN10 LPM General clean up after v112 failed OVI QA and to find root of materials failure
// 21AUG11 LPM bring function (){ together to find error TypeError: Result of expression near '...})()...' [undefined] is not a function.
//
//--------------------------------------------------------------------------------------// 

function setSwedish()	{
//    uiManager.showNotification(3000,"info", TimeLord + " <br> " + lbl013SW  + VERSION.fontcolor("Green") + lbl005SW +
//                               author.fontcolor("Grey") + "<br> &copy 2010" + company.fontcolor("Blue"));
							   	
    warn001 = warn001SW; //  = "den anställdes namn eller nummer"; // " Employee name or number ";
    warn002 = warn002SW; //  = "klicka på enter för arbetsuppgift"; //" Please enter Job ";
    warn003 = warn003SW; //  = "stämpla in"; //" Clock In";
    warn004 = warn004SW; //  = "klicka på enter för arbetsuppgift för att skapa lista"; //" Enter Job task to create a punch down list";
    warn005 = warn005SW; //  = "nytt arbetsnummer eller existerande nummer"; // "New Job name or existing number ";
    warn006 = warn006SW; //  = "klicka på enter för ert material"; // "Please enter your Material!";
    warn007 = warn007SW; //  = "klicka på enter för priset";       // "Please enter the Price!";
    warn008 = warn008SW; //  = "menytömningen misslyckades"; // "clear menu failed";
    warn009 = warn009SW; //  = "klicka på enter för att avsluta arbetsuppgiften"; // "enter Job task to complete";

    lbl001 = lbl001SW; //   = " Positively Front Street, Inc DBA mobiFoundry &copy 2009,2010 ";
    lbl002 = lbl002SW; //   = "<br>klicka först på enter för jobb, sedan uppgift, arbetskraft och material"; //"<br/>first enter a Job then Task, Labor and Materials ";
    lbl003 = lbl003SW; //  = "klicka på enter för material"; // "Enter Material";
    lbl004 = lbl004SW; //    = "den anställdes namn eller nummer"; //"employee name or number";
    lbl005 = lbl005SW; //   = "<br>skrivet av"; // "<br> Written By";
    lbl006 = lbl006SW; //   = "tidsschema"; // " TimeSheet ";
    lbl007 = lbl007SW; //   = "materialräkning"; // "Bill of Materials: $";
    lbl008 = lbl008SW; //   = "materialets namn eller nummer"; // "Materials name or number";
    lbl009 = lbl009SW; //   = "stämplat in"; //" Clocked in!";

    lbl010 = lbl010SW; //   = "klicka på enter för kvantitet"; // "Enter Quantity";
    lbl011 = lbl011SW; //   = " Version ";
    lbl012 = lbl012SW; //   = "jobb";  // "Job:";
    lbl013 = lbl013SW; //   = "Verison ";
    lbl014 = lbl014SW; //   = "kvantitet"; // " Quantity";
    lbl015 = lbl015SW; //   = "pris"; //"Price";
    lbl016 = lbl016SW; //   = "inköpspris eller noll om i lager"; // "Purchase Price or zero if stock";
    lbl017 = lbl017SW; //   = "klicka på enter för pris per enhet"; //"Enter Price per unit";
    lbl018 = lbl018SW; //   = "lägg till uppgift"; //"Add task";
    lbl019 = lbl019SW; //   = "avsluta uppgift"; //"Complete task";

    lbl020 = lbl020SW; //   = "arbetsuppgift";  // "Job Task";
    lbl021 = lbl021SW; //   = "lista på uppgifter"; //" Task List";
    lbl022 = lbl022SW; //   = "menytömningen misslyckades"; // "clear menu failed";
    lbl023 = lbl023SW; //   = "avsluta"; // " complete";
    lbl024 = lbl024SW; //   = "först på arbetsplatsen"; // " 1st on site ";
    lbl025 = lbl025SW; //   = "i arbetsstyrkan"; // " on crew ";
    lbl026 = lbl026SW; //   = "timmar"; // " Hours ";
    lbl027 = lbl027SW; //  = "aktivt arbete, aktiva arbeten, aktiva jobb"; // " Active Jobs";
    lbl028 = lbl028SW; //  = "nytt jobb"; // " New Job: ";
    lbl029 = lbl029SW; //   = "existerande arbete"; // " Existing Job:  ";
	
    jobButtonText       = jobButtonTextSW; // = "jobb"; //"Job";
    materialsButtonText = materialsButtonTextSW; // = "Materials";
	taskButtontext      = taskButtontextSW; // = "lista på arbetsuppgifter";  // "Task List"; 
    laborButtonText     = laborButtonTextSW; // = "arbetskraft"; // "Labor";
	cinButtonText       = cinButtonTextSW;// = "stämpla in"; // "Clock In"; 
	coButtonText        = coButtonTextSW; // = "stämpla ut"; //"Clock Out"; 

    menulblabout     = menulblaboutSW; // = "information"; // "About";
    menulblmain      = menulblmainSW; //  = "hem"; //"Main";
    menulbljob       = menulbljobSW; //   = "jobb"; // "Job";
    menulbllabor     = menulbllaborSW; // = "arbetskraft"; //"Labor";
    menulblmaterials = menulblmaterialsSW; // = "Materials";
    menulblcursor    = menulblcursorSW; // = "kursor läge"; //"Cursor mode";
    menulbltab       = menulbltabSW; // ="tabulator läge"; //"Tab mode";

    viewlblmain  = viewlblmainSW; // = "översikt"; //"MainView";
    viewlbllabor = viewlbllaborSW; // = "arbetskraftsöversikt"; //"LaborView";
    viewlbljob   = viewlbljobSW; // = "jobböversikt"; //"JobView";
    viewlbltask  = viewlbltaskSW; // = "uppgiftsöversikt"; //"TaskView";
	
}
	
