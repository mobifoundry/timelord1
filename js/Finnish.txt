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

//--------------------------------------------------------------------------------------// 

function setFinnish(){
 //   uiManager.showNotification(3000,
//	                           "info", TimeLord + " <br> " + lbl013SW  +
 //                              VERSION.fontcolor("Green") +
//                               lbl005SW +
//                               author.fontcolor("Grey") +
//                               "<br> &copy 2009,2010" +
//                               company.fontcolor("Blue"));
 warn001FN = warn001  = " Työntekijän nimi tai numero"; //Employee name or number ";

 warn002FN = warn002  = " Anna työn numero"; // Please enter Job ";
 
 warn003FN = warn003  = " Työ alkaa"; //Clock In";

 warn004FN = warn004  = " Syötä työ luodaksesi listan"; //Enter Job task to create a punch down list";


 warn005FN = warn005  = "Uusi työn kuvaus tai olemassa oleva numero"; //New Job name or existing number ";

warn006FN = warn006  = "Syötä materiaali"; //Please enter your Material!";

 
 warn007FN = warn007  = "Syötä hinta"; //Please enter the Price!";
 warn008FN = warn008  = "Menun tyhjentäminen epäonnistui"; //clear menu failed";


 warn009FN = warn009  = "Syötä työn kuvaus"; //enter Job task to complete";

 lbl001FN = lbl001   = " Positively Front Street, Inc © 2009,2010 ";

 lbl002FN = lbl002   = " Syötä ensin työ, sitten tehtävät, työmäärä ja materiaalit"; //first enter a Job then Task, Labor and Materials ";

 lbl003FN = lbl003   = "Syötä materiaali"; //Enter Material";
 lbl004FN = lbl004   = "den anställdas namn eller nummer,  Työntekijän nimi tai numero"; //employee name or number";

 lbl005FN = lbl005   = " Tekijä"; //Written By";

 lbl006FN = lbl006   = " Aikalista"; //TimeSheet ";

 lbl007FN = lbl007   = "materiaalilasku"; // Bill of Materials: $";
 lbl008FN = lbl008   = "Materiaalin nimi tai numero"; // Materials name or number";

 lbl009FN = lbl009   = " Aika alkoi!"; // Clocked in!";

 lbl010FN = lbl010   = "Syötä määrä"; //Enter Quantity";

 lbl011FN = lbl011   = " versio"; // Version ";

 lbl012FN = lbl012   = "Työ"; // Job:";

 lbl013FN = lbl013   = "Versio "; // Verison ";

 lbl014FN = lbl014   = " Määrä"; // Quantity";

 lbl015FN = lbl015   = "Hinta"; // Price";

 lbl016FN = lbl016   = "ostohinta tai jos varastossa syötä nolla"; //Purchase Price or zero if stock";

 lbl017FN = lbl017   = "Yksikköhinta"; // Enter Price per unit";
 lbl018FN = lbl018   = "Lisää tehtävä"; // Add task";

 lbl019FN = lbl019   = "Suorita tehtävä"; // Complete task";
 lbl020FN = lbl020   = "Työtehtävä"; // Job Task";

 lbl021FN = lbl021   = " Tehtävälista"; // Task List";

 
 lbl022FN = lbl022   = "Menun tyhjentäminen epäonnistui"; //clear menu failed";

 lbl023FN = lbl023   = " Tehty"; // complete";

 lbl024FN = lbl024   = " Saapunut työpaikalle"; // 1st on site ";

 
 lbl025FN = lbl025   = " Työryhmän jäsenet"; //on crew ";

 lbl026FN = lbl026   = " Tunteja"; // Hours ";

 lbl027FN = lbl027   = " Avoimet työt"; // Active Jobs";

  lbl028FN = lbl028   = " Uusi työ"; // New Job: ";

 lbl029FN = lbl029   = " Olemassa oleva työ"; // Existing Job:  ";


 jobButtonTextFN = jobButtonText = "Työ"; // Job";

 materialsButtonTextFN = materialsButtonText = "Materiaalit"; // Materials";

  taskButtontextFN = taskButtontext = "Tehtävälista"; // Task List"; 

 
 laborButtonTextFN =  laborButtonText = "Työmäärä"; // Labor";

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

} 
