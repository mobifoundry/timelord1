import QtQuick 2.4
import QtQuick.Window 2.2

Window {
    color: "#Affeee"
    visible: true
    Item {
        id: globals


property string author:" Louis Meadows <br> louis.meadows@mobifoundry.com <br>";
property string company:" Positively Front Street, Inc <br> www.positivelyfrontstreet.com <br> DBA mobiFoundry <br> www.mobifoundry.com"
        // This          ^^    should not be translated in my opinion   RNM

property string TimeLord:" TimeLord1 ";
property string TimeLordES:" TimeLord1 " //"TiempoSenor1";

property string VERSION:" V118 LPM21AUG11 ";

property string WARN001:" Employee name or number ";
property string WARN001ES:" Nombre d'empleado(a) o numero ";  // The parenthetical a is to provide support for a female employee.  Another plus for us!
property string WARN001SW:"den anställdes namn eller nummer"; // " Employee name or number ";
property string WARN001FN:" Työntekijän nimi tai numero"; //Employee name or number ";

property string WARN002:" Please enter Job ";
property string WARN002ES:" Por favor introduzca un Trabajo ";
property string WARN002SW:"klicka på enter för arbetsuppgift"; //" Please enter Job ";
property string WARN002FN:" Anna työn numero"; // Please enter Job ";

property string WARN003:" Clock In";
        // !!!! Clock in doesn't translate directly into Spanish.
        //  I've basically taken the English phrase "Begin to work"
        // and translated that.  OK?
        // If your Mexican friens recognize "Reloj en" let me know,
        // that is literally "Watch in" or "Clock in".
        // I don't think they will recognize it.
property string WARN003ES:" Comenzar a trabajar";
        // i.e. Begin work.  Clock In cannot be translated directly.
property string WARN003SW:"stämpla in"; //" Clock In";
property string WARN003FN:" Työ alkaa"; //Clock In";

property string WARN004:" Enter Job task to create a punch down list";
property string WARN004ES:" Introduzca la tarea de Trabajo para crear un golpe de lista";
property string WARN004SW:"klicka på enter för arbetsuppgift för att skapa lista"; //" Enter Job task to create a punch down list";
property string WARN004FN:" Syötä työ luodaksesi listan"; //Enter Job task to create a punch down list";

property string WARN005:"New Job name or existing number ";
property string WARN005ES:"Nombre de Trabajo nuevo o numero existente ";
property string WARN005SW:"nytt arbetsnummer eller existerande nummer"; // "New Job name or existing number ";
property string WARN005FN:"Uusi työn kuvaus tai olemassa oleva numero"; //New Job name or existing number ";

property string WARN006:"Please enter your Material!";
property string WARN006ES:"Por favor introduzca tu Material!";
property string WARN006SW:"klicka på enter för ert material";
property string WARN006FN:"Syötä materiaali"; //Please enter your Material!";

property string WARN007:"Please enter the Price!";
property string WARN007ES:"Por favor introduzca el precio!";
property string WARN007SW:"klicka på enter för priset";       // "Please enter the Price!";
property string WARN007FN:"Syötä hinta"; //Please enter the Price!";

        property string WARN008:"clear menu failed";
        property string WARN008ES:"claro menu no hace";// Literally WARN008es means does not clear menu.  I think that is good. RNM
        property string WARN008SW:"menytömningen misslyckades"; // "clear menu failed";
        property string WARN008FN:"Menun tyhjentäminen epäonnistui"; //clear menu failed";

        property string WARN009:"enter Job task to complete";
        property string WARN009ES:"Introduzca la tarea de Trabajo a completar";
        property string WARN009SW:"klicka på enter för att avsluta arbetsuppgiften"; // "enter Job task to complete";
        property string WARN009FN:"Syötä työn kuvaus"; //enter Job task to complete";

        property string LBL001:" Positively Front Street, Inc &copy 2009 ";
        // This          ^^    should not be translated in my opinion   RNM
        property string LBL001SW:" Positively Front Street, Inc DBA mobiFoundry &copy 2009,2010 ";
        property string LBL001FN:" Positively Front Street, Inc © 2009,2010 ";

        property string LBL002:"<br/>first enter a Job then Task, Labor and Materials ";
        property string LBL002ES:"<br/>Primero introduzca uno numero de Trabajo," +
                         +" despues Tarea, Mano de obra y Materiales ";
        property string LBL002SW:"<br>klicka först på enter för jobb, sedan uppgift, arbetskraft och material"; //"<br/>first enter a Job then Task, Labor and Materials ";
        property string LBL002FN:" Syötä ensin työ, sitten tehtävät, työmäärä ja materiaalit"; //first enter a Job then Task, Labor and Materials ";

        property string LBL003:"Enter Material";
        property string LBL003ES:"Introduzca Material";
        property string LBL003SW:"klicka på enter för material"; // "Enter Material";
        property string LBL003FN:"Syötä materiaali"; //Enter Material";

        property string LBL004:"employee name or number";
        property string LBL004ES:"Nombre d'empleado(a) o numero";
        property string LBL004SW:"den anställdes namn eller nummer"; //"employee name or number";
        property string LBL004FN:"den anställdas namn eller nummer,  Työntekijän nimi tai numero"; //employee name or number";

        property string LBL005:"<br> Written By";
        property string LBL005ES:"Escrito Para"
        property string LBL005SW:"<br>skrivet av"; // "<br> Written By";
        property string LBL005FN:" Tekijä"; //Written By";

        property string LBL006:" TimeSheet ";
        property string LBL006ES:" Hoja de tiempo ";
        property string LBL006SW:"tidsschema"; // " TimeSheet ";
        property string LBL006FN:" Aikalista"; //TimeSheet ";

        property string LBL007:"Bill of Materials: $";
        property string LBL007ES:"Billete de Materiales: $";
        property string LBL007SW:"materialräkning"; // "Bill of Materials: $";
        // Are we going to support foreign currencies?
        // If so, maybe we need pesos or pesetas instead of dollars. RNM
        property string LBL007FN:"materiaalilasku"; // Bill of Materials: $";

        property string LBL008:"Materials name or number";
        property string LBL008ES:"Nombre de Materiales o numero";
        property string LBL008SW   = "materialets namn eller nummer"; // "Materials name or number";
        property string LBL008FN   = "Materiaalin nimi tai numero"; // Materials name or number";

        property string LBL009   = " Clocked in!";
        property string LBL009ES   = " Trabajando!"; // There's no really good translation of "Clocked in!"
        // hence I used the Spanish for "working" = Trabajando. RNM
        property string LBL009SW   = "stämplat in"; //" Clocked in!";
        property string LBL009FN   = " Aika alkoi!"; // Clocked in!";

        property string LBL010   = "Enter Quantity";
        property string LBL010ES   = "Introduzca la Cantidad";
        property string LBL010SW   = "klicka på enter för kvantitet"; // "Enter Quantity";
        property string LBL010FN   = "Syötä määrä"; //Enter Quantity";

        property string LBL011   = " Version ";
        property string LBL011ES   = " Version ";
        property string LBL011SW   = " Version ";
        property string LBL011FN   = " versio"; // Version ";

        property string LBL012   = "Job:";
        property string LBL012ES   = "Trabajo:";
        property string LBL012SW   = "jobb";  // "Job:";
        property string LBL012FN   = "Työ"; // Job:";

        property string LBL013   = "Verison ";  //What is this ??
        // If this is meant to be Version, then we have that already
        // If it is meant to be Verizon, then it would be the same in Spanish RNM
        property string LBL013SW   = "Verison ";
        property string LBL013FN   = "Versio "; // Verison ";

        property string LBL014   = " Quantity";
        property string LBL014ES   = " Cantidad";
        property string LBL014SW   = "kvantitet"; // " Quantity";
        property string LBL014FN   = " Määrä"; // Quantity";

        property string LBL015   = "Price";
        property string LBL015ES   = "Precio";
        property string LBL015SW   = "pris"; //"Price";
        property string LBL015FN   = "Hinta"; // Price";

        property string LBL016   = "Purchase Price or zero if stock";
        property string LBL016ES   = "Precio de comprar o zero si es stock ";
        property string LBL016SW   = "inköpspris eller noll om i lager"; // "Purchase Price or zero if stock";
        property string LBL016FN   = "ostohinta tai jos varastossa syötä nolla"; //Purchase Price or zero if stock";

        property string LBL017   = "Enter Price per unit";
        property string LBL017ES   = "Introduzca Precio por unidad";
        property string LBL017SW   = "klicka på enter för pris per enhet"; //"Enter Price per unit";
        property string LBL017FN   = "Yksikköhinta"; // Enter Price per unit";

        property string LBL018   = "Add task";
        property string LBL018ES   = "Agregar una tarea";
        property string LBL018SW   = "lägg till uppgift"; //"Add task";
        property string LBL018FN   = "Lisää tehtävä"; // Add task";

        property string LBL019   = "Complete task";
        property string LBL019ES   = "Complete tarea";
        property string LBL019SW   = "avsluta uppgift"; //"Complete task";
        property string LBL019FN   = "Suorita tehtävä"; // Complete task";

        property string LBL020   = "Job Task";
        property string LBL020ES   = "Tarea de Trabajo";
        property string LBL020SW   = "arbetsuppgift";  // "Job Task";
        property string LBL020FN   = "Työtehtävä"; // Job Task";

        property string LBL021   = " Task List";
        property string LBL021ES   = " Lista de Tareas";
        property string LBL021SW   = "lista på uppgifter"; //" Task List";
        property string LBL021FN   = " Tehtävälista"; // Task List";

        property string LBL022   = "clear menu failed";
        // This one I interpreted as "clear menu did not happen" Is that OK?
        // That's what the Spanish means.
        property string LBL022ES   = "menu claro no ocurrio";
        property string LBL022SW   = "menytömningen misslyckades"; // "clear menu failed";
        property string LBL022FN   = "Menun tyhjentäminen epäonnistui"; //clear menu failed";

        property string LBL023   = " complete";
        property string LBL023ES   = " compleado";  // i.e. completed
        property string LBL023SW   = "avsluta"; // " complete";
        property string LBL023FN   = " Tehty"; // complete";

        property string LBL024   = " 1st on site ";
        property string LBL024ES   = " primero person en sitio "; // i.e. first person on site
        property string LBL024SW   = "först på arbetsplatsen"; // " 1st on site ";
        property string LBL024FN   = " Saapunut työpaikalle"; // 1st on site ";

        property string LBL025   = " on crew ";
        // This is a tricky one.  Literally, it becomes "Sobre tripulacion"
        //  but that's like "on top of crew".  Could be bad!
        // "en tripulacion" means "in crew".
        // "con la tripulacion" means "with the crew".
        // Hence I've used that.
        // Please check with your Mexican friends what they recommend.
        property string LBL025ES   = " con la tripulacion ";
        property string LBL025SW   = "i arbetsstyrkan"; // " on crew ";
        property string LBL025FN   = " Työryhmän jäsenet"; //on crew ";

        property string LBL026   = " Hours ";
        property string LBL026ES   = " Horas ";
        property string LBL026SW   = "timmar"; // " Hours ";
        property string LBL026FN   = " Tunteja"; // Hours ";

        property string LBL027   = " Active Jobs";
        property string LBL027ES   = " Trabajos activos";
        property string LBL027SW   = "aktivt arbete, aktiva arbeten, aktiva jobb"; // " Active Jobs";
        property string LBL027FN   = " Avoimet työt"; // Active Jobs";

        property string LBL028   = " New Job: ";
        property string LBL028ES   = " Trabajo nuevo: ";
        property string LBL028SW   = "nytt jobb"; // " New Job: ";
        property string LBL028FN   = " Uusi työ"; // New Job: ";

        property string LBL029   = " Existing Job:  ";
        property string LBL029ES = " Trabajo existente:";
        property string LBL029SW = "existerande arbete"; // " Existing Job:  ";
        property string LBL029FN = " Olemassa oleva työ"; // Existing Job:  ";

        property string JobButtonText = "Job";
        property string JobButtonTextES = "Trabajo";
        property string JobButtonTextSW = "jobb"; //"Job";
        property string JobButtonTextFN = "Työ"; // Job";

        property string MaterialsButtonText = "Materials";
        property string MaterialsButtonTextES = "Materiales";
        property string MaterialsButtonTextSW = "Materials";
        property string MaterialsButtonTextFN = "Materiaalit"; // Materials";

        property string taskButtontext = "Task List";
        property string taskButtontextES = "Lista de Tareas";
        property string taskButtontextSW = "lista på arbetsuppgifter";  // "Task List";
        property string taskButtontextFN = "Tehtävälista"; // Task List";

        property string LaborButtonText = "Labor";
        // Because job and labor in English both translate to trabajo in Spanish
        // I am interpeting Labor here as "effort".
        // So our translation for "Labor" in English becomes "esfuerzo"
        // which literally means effort.  Is that OK?
        property string LaborButtonTextES = "Esfuerzo";
        property string LaborButtonTextSW = "arbetskraft"; // "Labor";
        property string LaborButtonTextFN = "Työmäärä"; // Labor";

        property string cinButtonText = "Clock In";
        // See !!!! above, re "Clock In"
        property string cinButtonTextES = "Comenzar a trabajar";
        property string cinButtonTextSW = "stämpla in"; // "Clock In";
        property string cinButtonTextFN = "Työt aloitettiin"; // Clock In";

        property string coButtonText = "Clock Out";
        // Similar problem translating "Clock Out" to "Clock In".
        // My Spanish equates to "Work finished" = "Trabajo terminado"
        property string coButtonTextES = "Trabajo terminado";
        property string coButtonTextSW = "stämpla ut"; //"Clock Out";
        property string coButtonTextFN = "Työt lopetettiin"; // Clock Out";

        property string EspanaButtonText = "Espanol";
        property string EnglishButtonText = "English";
        property string SwedishButtonText = "Swedish";
        property string FinnishButtonText = "Finnish";

        property string menulblEspana = "Espanol";
        property string menulblEnglish = "English";
        property string menulblSwedish = "Swedish";
        property string menulblFinnish = "Finnish";

        property string menulblabout = "About";
        property string menulblaboutES = "Sobre";
        property string menulblaboutSW = "information"; // "About";
        property string menulblaboutFN = "Tiedot"; // About";

        property string menulblmain  = "Main";
        property string menulblmainES = "Principal";
        property string menulblmainSW  = "hem"; //"Main";
        property string menulblmainFN  = "Päämenu"; // Main";

        property string menulbljob   = "Job";
        property string menulbljobES = "Trabajo";
        property string menulbljobSW   = "jobb"; // "Job";
        property string menulbljobFN   = "Työ"; // Job";

        property string menulbllabor = "Labor";
        property string menulbllaborES = "Esfuerzo";
        property string menulbllaborSW = "arbetskraft"; //"Labor";
        property string menulbllaborFN = "Työmäärä"; // Labor";

        property string menulblmaterials = "Materials";
        property string menulblmaterialsES = "Materiales";
        property string menulblmaterialsSW = "Materials";
        property string menulblmaterialsFN = "Materiaalit"; // Materials";

        property string menulblcursor = "Cursor mode";
        property string menulblcursorES = "Modo cursor";
        property string menulblcursorSW = "kursor läge"; //"Cursor mode";
        property string menulblcursorFN = "Hiirimoodi"; // Cursor mode";

        property string menulbltab = "Tab mode";
        property string menulbltabES = "Modo de ficha";
        property string menulbltabSW = "tabulator läge"; //"Tab mode";
        property string menulbltabFN = "Tabulaattorimoodi"; // Tab mode";

        property string viewlblmain = "MainView";
        property string viewlblmainES = "Principal";  // I.e. Prinicipal or Main View.
        property string viewlblmainSW = "översikt"; //"MainView";
        property string viewlblmainFN = "Päänäkymä"; //MainView";

        property string viewlbllabor = "LaborView";
        property string viewlbllaborES = "Esfuerzo";  // I.e. View of Effort (Labor)
        property string viewlbllaborSW = "arbetskraftsöversikt"; //"LaborView";
        property string viewlbllaborFN = "Työmääränäkymä"; // LaborView";

        property string viewlbljob = "JobView";
        property string viewlbljobES = "Trabajos";  // I.e. View of Jobs
        property string viewlbljobSW = "jobböversikt"; //"JobView";
        property string viewlbljobFN = "Työnäkymä"; // JobView";

        property string viewlbltask = "TaskView";
        property string viewlbltaskES = "Tareas";  // I.e. View of tasks
        property string viewlbltaskSW = "uppgiftsöversikt"; //"TaskView";
        property string viewlbltaskFN = "Tehtävänäkymä"; // TaskView";

        property string viewlblmaterials = "Materials";
        property string viewlblmaterialsES = "Materiales";
        property string viewlblmaterialsSW = "Materials";
        property string viewlblmaterialsFN = "Materiaalit"; // Materials";

property var uiManager: null;
property    var aboutView: null;
property    var languageView:null;
property    var mainView:null;
property    var jobView:null;
property    var laborView:null;
property    var materialsView:null;
property    var materialsPriceView:null;
property    var materialsQuantityView:null;
property    var taskView:null;
property    var aboutPanel:null;
property    var infoPanel;
property    var laborPanel;
property    var materialsPanel;
property    var taskPanel;
property    var registerTape:[];  // tracks materials for Job
property    var timeSheet:[];  // tracks time for each Job
property    var timeCard:[];  // tracks time for each employee
property    var tasklist:[];  // tracks task list for each Job
property    var wRTversion;
property    string currentScreenView:"splashScreenView";
property    var screenheight;
property    var h;
property    var w;
    // Reference to controls in the main view.
property    var addtaskButton;
property    var completetaskButton;
property    var clockInButton;
property    var clockOutButton;
property    var materialsButton;

property    var materialsPriceButton;
property    var materialsQuantityButton;
property    var taskButton;

property    var jobButton;
property    var laborButton;

property    var timestamp;
property    var jobField;
property    var job;
property    var jobs:[];
property    int jobnum:0;
property    int jobcount:0;
property    var existingJob;
property    string activejobs:"";
property    var material;
property    var materialsField;
property    var materialsQuantityField;
property    var materialQuantity;
property    var price;
property    var totalprice;
property    var totalmaterials:[];
property    var totaltime:[];
property    var nameField;
property    var priceField;
property    var taskField;
property    int empcount:0;
property    int empnum:0;
property    var names:[];
property    var clockInTimes:[]; // using calander api in version 2 for Nokia WRT 1.1
property    var clockOutTimes:[]; // interface not supported in Nokia WRT 1.0
property    var elapsedTime:[];
property    var clockTotals:[];
property    var clockedInEmps:[];

//property    var x;

    //about view label control
property    var aboutLabel;
property    var languageLabel;
property    var jobLabel;
property    var laborLabel;
property    var materialsLabel;
property    var taskLabel;
        // milliseconds
property    int second:1000;
property    int minute:second * 60;
property    int hour:minute * 60;
property    int day:hour * 24;

    // Constants for menu item identifiers.

property    int mENU_ITEM_ABOUT:0;
property    int mENU_ITEM_LANGUAGE:1;
property    int mENU_ITEM_JOB:2;
property    int mENU_ITEM_LABOR:3;
property    int mENU_ITEM_MATERIALS:4;
property    int mENU_ITEM_MATERIALS_PRICE:5;
property    int mENU_ITEM_MATERIALS_QUANTITY:6;
property    int mENU_ITEM_MAIN:7;
property    int mENU_ITEM_TASK:8;
property    int cMD_CURSOR_MODE:9;
property    int cMD_TAB_MODE:10;
property    int mENU_ENGLISH:11;
property    int mENU_ESPANA:12;
property    int mENU_SWEDISH:13;
property    int mENU_FINNISH:14;

//property    var aboutMenuItem:new MenuItem(menulblabout, MENU_ITEM_ABOUT);
//property    var mainMenuItem:new MenuItem(menulblmain , MENU_ITEM_MAIN);
//property    var jobMenuItem:new MenuItem(menulbljob, MENU_ITEM_JOB);
//property    var laborMenuItem:new MenuItem(menulbllabor, MENU_ITEM_LABOR);
//property    var materialsMenuItem:new MenuItem(menulblmaterials, MENU_ITEM_MATERIALS);
//property    var cursorModeMenuItem:new MenuItem(menulblcursor, CMD_CURSOR_MODE);
//property    var tabModeMenuItem:new MenuItem(menulbltab, CMD_TAB_MODE);
//property    var englishMenuItem:new MenuItem(menulblEnglish, MENU_ENGLISH);
//property   var espanaMenuItem:new MenuItem(menulblEspana, MENU_ESPANA);
//property    var swedishMenuItem:new MenuItem(menulblSwedish, MENU_SWEDISH);
//property    var finnishMenuItem:new MenuItem(menulblFinnish, MENU_FINNISH);
    }

    Item {
  //      width: 200; height: 200

        Loader { id: pageLoader
                 source:"TimeLordOne.qml"
        }


    }
}
