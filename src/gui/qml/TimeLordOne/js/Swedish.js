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
//
// 21JUL11 LPM removing Nokia specific menu methods to get code to run under appmobi framework
//--------------------------------------------------------------------------------------// 

function Swedish()

	{
    var mydiv = document.getElementById('language');
    mydiv.innerHTML = '';			
    uiManager.showNotification(3000, 
	                           "info", TimeLord + " <br> " + LBL013SW  +
                               VERSION.fontcolor("Green") +
                               LBL005SW +
                               author.fontcolor("Grey") +
                               "<br> &copy 2010" +
                               company.fontcolor("Blue"));	
							   	
	WARN001 = WARN001SW; //  = "den anställdes namn eller nummer"; // " Employee name or number ";
	WARN002 = WARN002SW; //  = "klicka på enter för arbetsuppgift"; //" Please enter Job ";
	WARN003 = WARN003SW; //  = "stämpla in"; //" Clock In"; 
	WARN004 = WARN004SW; //  = "klicka på enter för arbetsuppgift för att skapa lista"; //" Enter Job task to create a punch down list"; 
	WARN005 = WARN005SW; //  = "nytt arbetsnummer eller existerande nummer"; // "New Job name or existing number "; 
	WARN006 = WARN006SW; //  = "klicka på enter för ert material"; // "Please enter your Material!"; 
	WARN007 = WARN007SW; //  = "klicka på enter för priset";       // "Please enter the Price!"; 
	WARN008 = WARN008SW; //  = "menytömningen misslyckades"; // "clear menu failed";  
	WARN009 = WARN009SW; //  = "klicka på enter för att avsluta arbetsuppgiften"; // "enter Job task to complete";  

	LBL001 = LBL001SW; //   = " Positively Front Street, Inc DBA mobiFoundry &copy 2009,2010 ";
	LBL002 = LBL002SW; //   = "<br>klicka först på enter för jobb, sedan uppgift, arbetskraft och material"; //"<br/>first enter a Job then Task, Labor and Materials "; 
	LBL003 = LBL003SW; //  = "klicka på enter för material"; // "Enter Material";  
	LBL004 = LBL004SW; //    = "den anställdes namn eller nummer"; //"employee name or number"; 
	LBL005 = LBL005SW; //   = "<br>skrivet av"; // "<br> Written By"; 
	LBL006 = LBL006SW; //   = "tidsschema"; // " TimeSheet "; 
	LBL007 = LBL007SW; //   = "materialräkning"; // "Bill of Materials: $"; 
	LBL008 = LBL008SW; //   = "materialets namn eller nummer"; // "Materials name or number"; 
	LBL009 = LBL009SW; //   = "stämplat in"; //" Clocked in!"; 

	LBL010 = LBL010SW; //   = "klicka på enter för kvantitet"; // "Enter Quantity"; 
	LBL011 = LBL011SW; //   = " Version "; 
	LBL012 = LBL012SW; //   = "jobb";  // "Job:"; 
	LBL013 = LBL013SW; //   = "Verison ";  
	LBL014 = LBL014SW; //   = "kvantitet"; // " Quantity";
	LBL015 = LBL015SW; //   = "pris"; //"Price"; 
	LBL016 = LBL016SW; //   = "inköpspris eller noll om i lager"; // "Purchase Price or zero if stock"; 
	LBL017 = LBL017SW; //   = "klicka på enter för pris per enhet"; //"Enter Price per unit"; 
	LBL018 = LBL018SW; //   = "lägg till uppgift"; //"Add task"; 
	LBL019 = LBL019SW; //   = "avsluta uppgift"; //"Complete task"; 

	LBL020 = LBL020SW; //   = "arbetsuppgift";  // "Job Task"; 
	LBL021 = LBL021SW; //   = "lista på uppgifter"; //" Task List"; 
	LBL022 = LBL022SW; //   = "menytömningen misslyckades"; // "clear menu failed"; 
	LBL023 = LBL023SW; //   = "avsluta"; // " complete"; 
	LBL024 = LBL024SW; //   = "först på arbetsplatsen"; // " 1st on site "; 
	LBL025 = LBL025SW; //   = "i arbetsstyrkan"; // " on crew "; 
	LBL026 = LBL026SW; //   = "timmar"; // " Hours "; 
	LBL027 = LBL027SW; //  = "aktivt arbete, aktiva arbeten, aktiva jobb"; // " Active Jobs"; 
	LBL028 = LBL028SW; //  = "nytt jobb"; // " New Job: ";  
	LBL029 = LBL029SW; //   = "existerande arbete"; // " Existing Job:  "; 
	
	JobButtonText       = JobButtonTextSW; // = "jobb"; //"Job"; 
	MaterialsButtonText = MaterialsButtonTextSW; // = "Materials"; 
	taskButtontext      = taskButtontextSW; // = "lista på arbetsuppgifter";  // "Task List"; 
	LaborButtonText     = LaborButtonTextSW; // = "arbetskraft"; // "Labor"; 
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
	/* MenuItem is Nokia WRT specific and needs removal and replacement code
	aboutMenuItem      = new MenuItem(menulblabout, MENU_ITEM_ABOUT);
	mainMenuItem       = new MenuItem(menulblmain , MENU_ITEM_MAIN);
	JobMenuItem        = new MenuItem(menulbljob, MENU_ITEM_JOB);
	LaborMenuItem      = new MenuItem(menulbllabor, MENU_ITEM_LABOR);
	MaterialsMenuItem  = new MenuItem(menulblmaterials, MENU_ITEM_MATERIALS);
	cursorModeMenuItem = new MenuItem(menulblcursor, CMD_CURSOR_MODE);
	tabModeMenuItem    = new MenuItem(menulbltab, CMD_TAB_MODE);
     */
   MainView();
		
	}
	
