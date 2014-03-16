/** * @author thurberdog */
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
// 29JAN10 LPM Added javascript code for switch to Finish text provided by Niklas 
// 30JAN10 LPM continued Finnish 
// 05FEB10 LPM v121 fails to store clock in information 
// 06FEB10 LPM changed version to v122 to fix above regression 
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
// 28JUL10 LPM Start of project mongolord
// 12JUL11 LPM Started Moving code into Qt webkit or qwebkit and away from wrt 1.0 alonging more advanced features to be added
// 09SEP11 LPM added main and about buttons     
//--------------------------------------------------------------------------------------// 
// 14SEP11 LPM 
//--------------------------------------------------------------------------------------// 

var author   = " Louis Meadows <br> louis.meadows@mobifoundry.com ";
var company  = " Positively Front Street <br> www.positivelyfrontstreet.com <br> DBA mobiFoundry ";
// This          ^^    should not be translated in my opinion   RNM

var TimeLord = " TimeLord1 ";
var TimeLordES = " TimeLord1 " //"TiempoSenor1";

var VERSION  = " V131 LPM14SEP11 ";

// var signalStrength = sysinfo.signalbars;
// var language = sysinfo.language;
// get total RAM size in bytes
// var totalRamSize = sysinfo.totalram;
// get free RAM size in bytes
// var freeRamSize = sysinfo.freeram;
 
var WARN001  = " Employee name or number ";
var WARN001ES  = " Nombre d'empleado(a) o numero ";  // The parenthetical a is to provide support for a female employee.  Another plus for us!
var WARN001SW  = "den anställdes namn eller nummer"; // " Employee name or number ";
var WARN001FN  = " Työntekijän nimi tai numero"; //Employee name or number ";  

var WARN002  = " Please enter Job ";
var WARN002ES  = " Por favor introduzca un Trabajo ";
var WARN002SW  = "klicka på enter för arbetsuppgift"; //" Please enter Job ";
var WARN002FN  = " Anna työn numero"; // Please enter Job ";  
var WARN003  = " Clock In";
// !!!! Clock in doesn't translate directly into Spanish. 
//  I've basically taken the English phrase "Begin to work" 
// and translated that.  OK?
// If your Mexican friens recognize "Reloj en" let me know, 
// that is literally "Watch in" or "Clock in".
// I don't think they will recognize it.
var WARN003ES  = " Comenzar a trabajar";
// i.e. Begin work.  Clock In cannot be translated directly.
var WARN003SW  = "stämpla in"; //" Clock In"; 
var WARN003FN = " Työ alkaa"; //Clock In"; 

var WARN004  = " Enter Job task to create a punch down list";
var WARN004ES  = " Introduzca la tarea de Trabajo para crear un golpe de lista";
var WARN004SW  = "klicka på enter för arbetsuppgift för att skapa lista"; //" Enter Job task to create a punch down list"; 
var WARN004FN  = " Syötä työ luodaksesi listan"; //Enter Job task to create a punch down list"; 

var WARN005  = "New Job name or existing number ";
var WARN005ES  = "Nombre de Trabajo nuevo o numero existente ";
var WARN005SW  = "nytt arbetsnummer eller existerande nummer"; // "New Job name or existing number "; 
var WARN005FN  = "Uusi työn kuvaus tai olemassa oleva numero"; //New Job name or existing number ";
 
var WARN006  = "Please enter your Material!";
var WARN006ES  = "Por favor introduzca tu Material!";
var WARN006SW  = "klicka på enter för ert material"; // "Please enter your Material!"; 
var WARN006FN  = "Syötä materiaali"; //Please enter your Material!"; 

var WARN007  = "Please enter the Price!";
var WARN007ES  = "Por favor introduzca el precio!";
var WARN007SW  = "klicka på enter för priset";       // "Please enter the Price!"; 
var WARN007FN  = "Syötä hinta"; //Please enter the Price!"; 

var WARN008  = "clear menu failed";
var WARN008ES  = "claro menu no hace";// Literally WARN008es means does not clear menu.  I think that is good. RNM
var WARN008SW  = "menytömningen misslyckades"; // "clear menu failed"; 
var WARN008FN =  "Menun tyhjentäminen epäonnistui"; //clear menu failed";  

var WARN009  = "enter Job task to complete";
var WARN009ES  = "Introduzca la tarea de Trabajo a completar";
var WARN009SW  = "klicka på enter för att avsluta arbetsuppgiften"; // "enter Job task to complete";  
var WARN009FN  = "Syötä työn kuvaus"; //enter Job task to complete";  

var LBL001   = " Positively Front Street, Inc &copy 2009 ";
// This          ^^    should not be translated in my opinion   RNM
var LBL001SW   = " Positively Front Street, Inc DBA mobiFoundry &copy 2009,2010 ";
var LBL001FN   = " Positively Front Street, Inc © 2009,2010 ";

var LBL002   = "<br/>first enter a Job then Task, Labor and Materials ";
var LBL002ES   = "<br/>Primero introduzca uno numero de Trabajo," +
                 +" despues Tarea, Mano de obra y Materiales ";
var LBL002SW   = "<br>klicka först på enter för jobb, sedan uppgift, arbetskraft och material"; //"<br/>first enter a Job then Task, Labor and Materials "; 				 
var LBL002FN   = " Syötä ensin työ, sitten tehtävät, työmäärä ja materiaalit"; //first enter a Job then Task, Labor and Materials "; 

var LBL003   = "Enter Material";
var LBL003ES   = "Introduzca Material";
var LBL003SW   = "klicka på enter för material"; // "Enter Material";  
var LBL003FN   = "Syötä materiaali"; //Enter Material";  

var LBL004   = "employee name or number";
var LBL004ES   = "Nombre d'empleado(a) o numero";
var LBL004SW   = "den anställdes namn eller nummer"; //"employee name or number"; 
var LBL004FN   = "den anställdas namn eller nummer,  Työntekijän nimi tai numero"; //employee name or number"; 

var LBL005   = "<br> Written By";
var LBL005ES   = "Escrito Para"
var LBL005SW   = "<br>skrivet av"; // "<br> Written By"; 
var LBL005FN   = " Tekijä"; //Written By"; 

var LBL006   = " TimeSheet ";
var LBL006ES   = " Hoja de tiempo ";
var LBL006SW   = "tidsschema"; // " TimeSheet "; 
var LBL006FN   = " Aikalista"; //TimeSheet "; 

var LBL007   = "Bill of Materials: $";
var LBL007ES   = "Billete de Materiales: $";
var LBL007SW   = "materialräkning: €"; // "Bill of Materials: $"; 
// Are we going to support foreign currencies? 
// If so, maybe we need pesos or pesetas instead of dollars. RNM
var LBL007FN   = "materiaalilasku: €"; // Bill of Materials: $"; 

var LBL008   = "Materials name or number";
var LBL008ES   = "Nombre de Materiales o numero";
var LBL008SW   = "materialets namn eller nummer"; // "Materials name or number"; 
var LBL008FN   = "Materiaalin nimi tai numero"; // Materials name or number"; 

var LBL009   = " Clocked in!"; 
var LBL009ES   = " Trabajando!"; // There's no really good translation of "Clocked in!" 
// hence I used the Spanish for "working" = Trabajando. RNM 
var LBL009SW   = "stämplat in"; //" Clocked in!"; 
var LBL009FN   = " Aika alkoi!"; // Clocked in!"; 

var LBL010   = "Enter Quantity";
var LBL010ES   = "Introduzca la Cantidad";
var LBL010SW   = "klicka på enter för kvantitet"; // "Enter Quantity"; 
var LBL010FN   = "Syötä määrä"; //Enter Quantity"; 

var LBL011   = " Version ";
var LBL011ES   = " Version ";
var LBL011SW   = " Version "; 
var LBL011FN   = " versio"; // Version "; 

var LBL012   = "Job:";
var LBL012ES   = "Trabajo:";
var LBL012SW   = "jobb";  // "Job:"; 
var LBL012FN   = "Työ"; // Job:"; 

var LBL013   = "Verison ";  //What is this ??
// If this is meant to be Version, then we have that already
// If it is meant to be Verizon, then it would be the same in Spanish RNM
var LBL013SW   = "Verison ";  
var LBL013FN   = "Versio "; // Verison ";  

var LBL014   = " Quantity";
var LBL014ES   = " Cantidad";
var LBL014SW   = "kvantitet"; // " Quantity";
var LBL014FN   = " Määrä"; // Quantity"; 

var LBL015   = "Price";
var LBL015ES   = "Precio";
var LBL015SW   = "pris"; //"Price"; 
var LBL015FN   = "Hinta"; // Price"; 

var LBL016   = "Purchase Price or zero if stock";
var LBL016ES   = "Precio de comprar o zero si es stock ";
var LBL016SW   = "inköpspris eller noll om i lager"; // "Purchase Price or zero if stock"; 
var LBL016FN   = "ostohinta tai jos varastossa syötä nolla"; //Purchase Price or zero if stock"; 

var LBL017   = "Enter Price per unit";
var LBL017ES   = "Introduzca Precio por unidad";
var LBL017SW   = "klicka på enter för pris per enhet"; //"Enter Price per unit"; 
var LBL017FN   = "Yksikköhinta"; // Enter Price per unit"; 

var LBL018   = "Add task";
var LBL018ES   = "Agregar una tarea";
var LBL018SW   = "lägg till uppgift"; //"Add task"; 
var LBL018FN   = "Lisää tehtävä"; // Add task"; 

var LBL019   = "Complete task";
var LBL019ES   = "Complete tarea";
var LBL019SW   = "avsluta uppgift"; //"Complete task"; 
var LBL019FN   = "Suorita tehtävä"; // Complete task"; 

var LBL020   = "Job Task";
var LBL020ES   = "Tarea de Trabajo";
var LBL020SW   = "arbetsuppgift";  // "Job Task"; 
var LBL020FN   = "Työtehtävä"; // Job Task"; 

var LBL021   = " Task List";
var LBL021ES   = " Lista de Tareas";
var LBL021SW   = "lista på uppgifter"; //" Task List"; 
var LBL021FN   = " Tehtävälista"; // Task List"; 

var LBL022   = "clear menu failed";
// This one I interpreted as "clear menu did not happen" Is that OK? 
// That's what the Spanish means.
var LBL022ES   = "menu claro no ocurrio";
var LBL022SW   = "menytömningen misslyckades"; // "clear menu failed"; 
var LBL022FN   = "Menun tyhjentäminen epäonnistui"; //clear menu failed"; 

var LBL023   = " complete";
var LBL023ES   = " compleado";  // i.e. completed
var LBL023SW   = "avsluta"; // " complete"; 
var LBL023FN   = " Tehty"; // complete"; 

var LBL024   = " 1st on site ";
var LBL024ES   = " primero person en sitio "; // i.e. first person on site
var LBL024SW   = "först på arbetsplatsen"; // " 1st on site "; 
var LBL024FN   = " Saapunut työpaikalle"; // 1st on site "; 

var LBL025   = " on crew ";
// This is a tricky one.  Literally, it becomes "Sobre tripulacion"
//  but that's like "on top of crew".  Could be bad!
// "en tripulacion" means "in crew".  
// "con la tripulacion" means "with the crew".  
// Hence I've used that.  
// Please check with your Mexican friends what they recommend.
var LBL025ES   = " con la tripulacion ";
var LBL025SW   = "i arbetsstyrkan"; // " on crew "; 
var LBL025FN   = " Työryhmän jäsenet"; //on crew "; 

var LBL026   = " Hours ";
var LBL026ES   = " Horas ";
var LBL026SW   = "timmar"; // " Hours "; 
var LBL026FN   = " Tunteja"; // Hours "; 

var LBL027   = " Active Jobs";
var LBL027ES   = " Trabajos activos";
var LBL027SW   = "aktivt arbete, aktiva arbeten, aktiva jobb"; // " Active Jobs"; 
var LBL027FN   = " Avoimet työt"; // Active Jobs"; 

var LBL028   = " New Job: ";
var LBL028ES   = " Trabajo nuevo: ";
var LBL028SW   = "nytt jobb"; // " New Job: "; 
var LBL028FN   = " Uusi työ"; // New Job: ";  

var LBL029   = " Existing Job:  ";
var LBL029ES = " Trabajo existente:";
var LBL029SW = "existerande arbete"; // " Existing Job:  "; 
var LBL029FN = " Olemassa oleva työ"; // Existing Job:  "; 

var JobButtonText = "Job";
var JobButtonTextES = "Trabajo";
var JobButtonTextSW = "jobb"; //"Job"; 
var JobButtonTextFN = "Työ"; // Job"; 

var MaterialsButtonText = "Materials";
var MaterialsButtonTextES = "Materiales";
var MaterialsButtonTextSW = "Materials"; 
var MaterialsButtonTextFN = "Materiaalit"; // Materials"; 

var taskButtontext = "Task List";
var taskButtontextES = "Lista de Tareas";
var taskButtontextSW = "lista på arbetsuppgifter";  // "Task List"; 
var taskButtontextFN = "Tehtävälista"; // Task List"; 

var LaborButtonText = "Labor";
// Because job and labor in English both translate to trabajo in Spanish 
// I am interpeting Labor here as "effort".
// So our translation for "Labor" in English becomes "esfuerzo" 
// which literally means effort.  Is that OK?
var LaborButtonTextES = "Esfuerzo";
var LaborButtonTextSW = "arbetskraft"; // "Labor"; 
var LaborButtonTextFN = "Työmäärä"; // Labor"; 

var cinButtonText = "Clock In";
// See !!!! above, re "Clock In"
var cinButtonTextES = "Comenzar a trabajar";
var cinButtonTextSW = "stämpla in"; // "Clock In"; 
var cinButtonTextFN = "Työt aloitettiin"; // Clock In"; 

var coButtonText = "Clock Out"; 
// Similar problem translating "Clock Out" to "Clock In".  
// My Spanish equates to "Work finished" = "Trabajo terminado"
var coButtonTextES = "Trabajo terminado"; 
var coButtonTextSW = "stämpla ut"; //"Clock Out"; 
var coButtonTextFN = "Työt lopetettiin"; // Clock Out"; 

var EspanaButtonText = "Espanol";
var EnglishButtonText = "English";
var SwedishButtonText = "Swedish";
var FinnishButtonText = "Finnish";

var MainButtonText = "Main";
var MainButtonTextES = "Principal";
var MainButtonTextSW  = "hem"; //"Main"; 
var MainButtonTextFN  = "Päämenu"; // Main";

var AboutButtonText = "About";
var AboutButtonTextES = "Sobre";
var AboutButtonTextSW = "information"; // "About";
var AboutButtonTextFN = "Tiedot"; // About"; 

var menulblEspana = "Espanol";
var menulblEnglish = "English";
var menulblSwedish = "Swedish";
var menulblFinnish = "Finnish";

var menulblabout = "About";
var menulblaboutES = "Sobre";
var menulblaboutSW = "information"; // "About";
var menulblaboutFN = "Tiedot"; // About"; 

var menulblmain  = "Main";
var menulblmainES = "Principal";
var menulblmainSW  = "hem"; //"Main"; 
var menulblmainFN  = "Päämenu"; // Main";

var menulbljob   = "Job"; 
var menulbljobES = "Trabajo"; 
var menulbljobSW   = "jobb"; // "Job"; 
var menulbljobFN   = "Työ"; // Job"; 

var menulbllabor = "Labor"; 
var menulbllaborES = "Esfuerzo";
var menulbllaborSW = "arbetskraft"; //"Labor"; 
var menulbllaborFN = "Työmäärä"; // Labor"; 
 
var menulblmaterials = "Materials";
var menulblmaterialsES = "Materiales";
var menulblmaterialsSW = "Materials"; 
var menulblmaterialsFN = "Materiaalit"; // Materials"; 

var menulblcursor = "Cursor mode";
var menulblcursorES = "Modo cursor";
var menulblcursorSW = "kursor läge"; //"Cursor mode"; 
var menulblcursorFN = "Hiirimoodi"; // Cursor mode"; 

var menulbltab = "Tab mode";
var menulbltabES = "Modo de ficha";
var menulbltabSW = "tabulator läge"; //"Tab mode"; 
var menulbltabFN = "Tabulaattorimoodi"; // Tab mode"; 

var viewlblmain = "MainView";
var viewlblmainES = "Principal";  // I.e. Prinicipal or Main View. 
var viewlblmainSW = "översikt"; //"MainView"; 
var viewlblmainFN = "Päänäkymä"; //MainView"; 

var viewlbllabor = "LaborView";
var viewlbllaborES = "Esfuerzo";  // I.e. View of Effort (Labor)
var viewlbllaborSW = "arbetskraftsöversikt"; //"LaborView"; 
var viewlbllaborFN = "Työmääränäkymä"; // LaborView"; 

var viewlblemployee = "Q";

var viewlbljob = "JobView";
var viewlbljobES = "Trabajos";  // I.e. View of Jobs
var viewlbljobSW = "jobböversikt"; //"JobView"; 
var viewlbljobFN = "Työnäkymä"; // JobView"; 

var viewlbltask = "TaskView";
var viewlbltaskES = "Tareas";  // I.e. View of tasks
var viewlbltaskSW = "uppgiftsöversikt"; //"TaskView"; 
var viewlbltaskFN = "Tehtävänäkymä"; // TaskView"; 