/** * @author thurberdog*/
/** * Finish */
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

// 29JAN10 LPM Added javascript code for switch to Finish text provided by Niklas 
 // 13SEP11 LPM continue port to android 
//--------------------------------------------------------------------------------------// 

function Finnish()

	{
   var mydiv = document.getElementById('language');
    mydiv.innerHTML = '';			
    uiManager.showNotification(3000, 
	                           "info", TimeLord + " <br> " + LBL013SW  +
                               VERSION.fontcolor("Green") +
                               LBL005SW +
                               author.fontcolor("Grey") +
                               "<br> &copy 2009,2010" +
                               company.fontcolor("Blue"));		
 WARN001FN = WARN001  = " Työntekijän nimi tai numero"; //Employee name or number ";  

 WARN002FN = WARN002  = " Anna työn numero"; // Please enter Job ";  
 
 WARN003FN = WARN003  = " Työ alkaa"; //Clock In"; 

 WARN004FN = WARN004  = " Syötä työ luodaksesi listan"; //Enter Job task to create a punch down list"; 


 WARN005FN = WARN005  = "Uusi työn kuvaus tai olemassa oleva numero"; //New Job name or existing number "; 

WARN006FN = WARN006  = "Syötä materiaali"; //Please enter your Material!"; 

 
 WARN007FN = WARN007  = "Syötä hinta"; //Please enter the Price!"; 
 WARN008FN = WARN008  = "Menun tyhjentäminen epäonnistui"; //clear menu failed";  


 WARN009FN = WARN009  = "Syötä työn kuvaus"; //enter Job task to complete";  

 LBL001FN = LBL001   = " Positively Front Street, Inc © 2009,2010 ";

 LBL002FN = LBL002   = " Syötä ensin työ, sitten tehtävät, työmäärä ja materiaalit"; //first enter a Job then Task, Labor and Materials "; 

 LBL003FN = LBL003   = "Syötä materiaali"; //Enter Material";  
 LBL004FN = LBL004   = "den anställdas namn eller nummer,  Työntekijän nimi tai numero"; //employee name or number"; 

 LBL005FN = LBL005   = " Tekijä"; //Written By"; 

 LBL006FN = LBL006   = " Aikalista"; //TimeSheet "; 

 LBL007FN = LBL007   = "materiaalilasku"; // Bill of Materials: $"; 
 LBL008FN = LBL008   = "Materiaalin nimi tai numero"; // Materials name or number"; 

 LBL009FN = LBL009   = " Aika alkoi!"; // Clocked in!"; 

 LBL010FN = LBL010   = "Syötä määrä"; //Enter Quantity"; 

 LBL011FN = LBL011   = " versio"; // Version "; 

 LBL012FN = LBL012   = "Työ"; // Job:"; 

 LBL013FN = LBL013   = "Versio "; // Verison ";  

 LBL014FN = LBL014   = " Määrä"; // Quantity"; 

 LBL015FN = LBL015   = "Hinta"; // Price"; 

 LBL016FN = LBL016   = "ostohinta tai jos varastossa syötä nolla"; //Purchase Price or zero if stock"; 

 LBL017FN = LBL017   = "Yksikköhinta"; // Enter Price per unit"; 
 LBL018FN = LBL018   = "Lisää tehtävä"; // Add task"; 

 LBL019FN = LBL019   = "Suorita tehtävä"; // Complete task"; 
 LBL020FN = LBL020   = "Työtehtävä"; // Job Task"; 

 LBL021FN = LBL021   = " Tehtävälista"; // Task List"; 

 
 LBL022FN = LBL022   = "Menun tyhjentäminen epäonnistui"; //clear menu failed"; 

 LBL023FN = LBL023   = " Tehty"; // complete"; 

 LBL024FN = LBL024   = " Saapunut työpaikalle"; // 1st on site "; 

 
 LBL025FN = LBL025   = " Työryhmän jäsenet"; //on crew "; 

 LBL026FN = LBL026   = " Tunteja"; // Hours "; 

 LBL027FN = LBL027   = " Avoimet työt"; // Active Jobs"; 

  LBL028FN = LBL028   = " Uusi työ"; // New Job: ";  

 LBL029FN = LBL029   = " Olemassa oleva työ"; // Existing Job:  "; 


 JobButtonTextFN = JobButtonText = "Työ"; // Job"; 

 MaterialsButtonTextFN = MaterialsButtonText = "Materiaalit"; // Materials"; 

  taskButtontextFN = taskButtontext = "Tehtävälista"; // Task List"; 

 
 LaborButtonTextFN =  LaborButtonText = "Työmäärä"; // Labor"; 

 cinButtonTextFN =  cinButtonText = "Työt aloitettiin"; // Clock In"; 

 coButtonTextFN =  coButtonText = "Työt lopetettiin"; // Clock Out"; 

 menulblaboutFN =  menulblabout = "Tiedot"; // About"; 

 menulblmainFN  =  menulblmain  = "Päämenu"; // Main"; 

 menulbljobFN   =  menulbljob   = "Työ"; // Job"; 

 menulbllaborFN =  menulbllabor = "Työmäärä"; // Labor"; 

 menulblmaterialsFN =  menulblmaterials = "Materiaalit"; // Materials"; 

 menulblcursorFN =  menulblcursor = "Hiirimoodi"; // Cursor mode"; 

 menulbltabFN = menulbltab ="Tabulaattorimoodi"; // Tab mode"; 

 viewlblmainFN =  viewlblmain = "Päänäkymä"; //MainView"; 

 viewlbllaborFN =  viewlbllabor = "Työmääränäkymä"; // LaborView"; 

 viewlbljobFN =  viewlbljob = "Työnäkymä"; // JobView"; 

 viewlbltaskFN =  viewlbltask = "Tehtävänäkymä"; // TaskView"; 
 MainView();
} 
