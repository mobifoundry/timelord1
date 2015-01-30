import QtQuick 2.4
import QtQuick.Window 2.2
import QtQuick.Controls 1.3
ApplicationWindow {
    id: window
    color: "#Affeee"
    visible: true
    MenuBar {
         menuBar: Menu {
              title: "File"
              MenuItem { text: "Open..." }
              MenuItem { text: "Close" }
          }

          Menu {
              title: "Edit"
              MenuItem { text: "Cut" }
              MenuItem { text: "Copy" }
              MenuItem { text: "Paste" }
          }
      }

    Item {
        id: globals

        property string author: " Louis Meadows <br> louis.meadows@mobifoundry.com <br>"
        property string company: " Positively Front Street, Inc <br> www.positivelyfrontstreet.com <br> DBA mobiFoundry <br> www.mobifoundry.com"

        // This          ^^    should not be translated in my opinion   RNM
        property string timeLord: " TimeLord1 "
        property string timeLordES: " TimeLord1 " //"TiempoSenor1";

        property string vERSION: " V118 LPM21AUG11 "

        property string warn001: " Employee name or number "
        property string warn001ES: " Nombre d'empleado(a) o numero " // The parenthetical a is to provide support for a female employee.  Another plus for us!
        property string warn001SW: "den anställdes namn eller nummer" // " Employee name or number ";
        property string warn001FN: " Työntekijän nimi tai numero" //Employee name or number ";

        property string warn002: " Please enter Job "
        property string warn002ES: " Por favor introduzca un Trabajo "
        property string warn002SW: "klicka på enter för arbetsuppgift" //" Please enter Job ";
        property string warn002FN: " Anna työn numero" // Please enter Job ";

        property string warn003: " Clock In"
        // !!!! Clock in doesn't translate directly into Spanish.
        //  I've basically taken the English phrase "Begin to work"
        // and translated that.  OK?
        // If your Mexican friens recognize "Reloj en" let me know,
        // that is literally "Watch in" or "Clock in".
        // I don't think they will recognize it.
        property string warn003ES: " Comenzar a trabajar"
        // i.e. Begin work.  Clock In cannot be translated directly.
        property string warn003SW: "stämpla in" //" Clock In";
        property string warn003FN: " Työ alkaa" //Clock In";

        property string warn004: " Enter Job task to create a punch down list"
        property string warn004ES: " Introduzca la tarea de Trabajo para crear un golpe de lista"
        property string warn004SW: "klicka på enter för arbetsuppgift för att skapa lista" //" Enter Job task to create a punch down list";
        property string warn004FN: " Syötä työ luodaksesi listan" //Enter Job task to create a punch down list";

        property string warn005: "New Job name or existing number "
        property string warn005ES: "Nombre de Trabajo nuevo o numero existente "
        property string warn005SW: "nytt arbetsnummer eller existerande nummer" // "New Job name or existing number ";
        property string warn005FN: "Uusi työn kuvaus tai olemassa oleva numero" //New Job name or existing number ";

        property string warn006: "Please enter your Material!"
        property string warn006ES: "Por favor introduzca tu Material!"
        property string warn006SW: "klicka på enter för ert material"
        property string warn006FN: "Syötä materiaali" //Please enter your Material!";

        property string warn007: "Please enter the Price!"
        property string warn007ES: "Por favor introduzca el precio!"
        property string warn007SW: "klicka på enter för priset" // "Please enter the Price!";
        property string warn007FN: "Syötä hinta" //Please enter the Price!";

        property string warn008: "clear menu failed"
        property string warn008ES: "claro menu no hace" // Literally warn008es means does not clear menu.  I think that is good. RNM
        property string warn008SW: "menytömningen misslyckades" // "clear menu failed";
        property string warn008FN: "Menun tyhjentäminen epäonnistui" //clear menu failed";

        property string warn009: "enter Job task to complete"
        property string warn009ES: "Introduzca la tarea de Trabajo a completar"
        property string warn009SW: "klicka på enter för att avsluta arbetsuppgiften" // "enter Job task to complete";
        property string warn009FN: "Syötä työn kuvaus" //enter Job task to complete";

        property string lbl001: " Positively Front Street, Inc &copy 2009 "
        // This          ^^    should not be translated in my opinion   RNM
        property string lbl001SW: " Positively Front Street, Inc DBA mobiFoundry &copy 2009,2010 "
        property string lbl001FN: " Positively Front Street, Inc © 2009,2010 "

        property string lbl002: "<br/>first enter a Job then Task, Labor and Materials "
        property string lbl002ES: "<br/>Primero introduzca uno numero de Trabajo,"
                                  + +" despues Tarea, Mano de obra y Materiales "
        property string lbl002SW: "<br>klicka först på enter för jobb, sedan uppgift, arbetskraft och material" //"<br/>first enter a Job then Task, Labor and Materials ";
        property string lbl002FN: " Syötä ensin työ, sitten tehtävät, työmäärä ja materiaalit" //first enter a Job then Task, Labor and Materials ";

        property string lbl003: "Enter Material"
        property string lbl003ES: "Introduzca Material"
        property string lbl003SW: "klicka på enter för material" // "Enter Material";
        property string lbl003FN: "Syötä materiaali" //Enter Material";

        property string lbl004: "employee name or number"
        property string lbl004ES: "Nombre d'empleado(a) o numero"
        property string lbl004SW: "den anställdes namn eller nummer" //"employee name or number";
        property string lbl004FN: "den anställdas namn eller nummer,  Työntekijän nimi tai numero" //employee name or number";

        property string lbl005: "<br> Written By"
        property string lbl005ES: "Escrito Para"
        property string lbl005SW: "<br>skrivet av" // "<br> Written By";
        property string lbl005FN: " Tekijä" //Written By";

        property string lbl006: " TimeSheet "
        property string lbl006ES: " Hoja de tiempo "
        property string lbl006SW: "tidsschema" // " TimeSheet ";
        property string lbl006FN: " Aikalista" //TimeSheet ";

        property string lbl007: "Bill of Materials: $"
        property string lbl007ES: "Billete de Materiales: $"
        property string lbl007SW: "materialräkning" // "Bill of Materials: $";
        // Are we going to support foreign currencies?
        // If so, maybe we need pesos or pesetas instead of dollars. RNM
        property string lbl007FN: "materiaalilasku" // Bill of Materials: $";

        property string lbl008: "Materials name or number"
        property string lbl008ES: "Nombre de Materiales o numero"
        property string lbl008SW: "materialets namn eller nummer" // "Materials name or number";
        property string lbl008FN: "Materiaalin nimi tai numero" // Materials name or number";

        property string lbl009: " Clocked in!"
        property string lbl009ES: " Trabajando!" // There's no really good translation of "Clocked in!"
        // hence I used the Spanish for "working" = Trabajando. RNM
        property string lbl009SW: "stämplat in" //" Clocked in!";
        property string lbl009FN: " Aika alkoi!" // Clocked in!";

        property string lbl010: "Enter Quantity"
        property string lbl010ES: "Introduzca la Cantidad"
        property string lbl010SW: "klicka på enter för kvantitet" // "Enter Quantity";
        property string lbl010FN: "Syötä määrä" //Enter Quantity";

        property string lbl011: " Version "
        property string lbl011ES: " Version "
        property string lbl011SW: " Version "
        property string lbl011FN: " versio" // Version ";

        property string lbl012: "Job:"
        property string lbl012ES: "Trabajo:"
        property string lbl012SW: "jobb" // "Job:";
        property string lbl012FN: "Työ" // Job:";

        property string lbl013: "Verison " //What is this ??
        // If this is meant to be Version, then we have that already
        // If it is meant to be Verizon, then it would be the same in Spanish RNM
        property string lbl013SW: "Verison "
        property string lbl013FN: "Versio " // Verison ";

        property string lbl014: " Quantity"
        property string lbl014ES: " Cantidad"
        property string lbl014SW: "kvantitet" // " Quantity";
        property string lbl014FN: " Määrä" // Quantity";

        property string lbl015: "Price"
        property string lbl015ES: "Precio"
        property string lbl015SW: "pris" //"Price";
        property string lbl015FN: "Hinta" // Price";

        property string lbl016: "Purchase Price or zero if stock"
        property string lbl016ES: "Precio de comprar o zero si es stock "
        property string lbl016SW: "inköpspris eller noll om i lager" // "Purchase Price or zero if stock";
        property string lbl016FN: "ostohinta tai jos varastossa syötä nolla" //Purchase Price or zero if stock";

        property string lbl017: "Enter Price per unit"
        property string lbl017ES: "Introduzca Precio por unidad"
        property string lbl017SW: "klicka på enter för pris per enhet" //"Enter Price per unit";
        property string lbl017FN: "Yksikköhinta" // Enter Price per unit";

        property string lbl018: "Add task"
        property string lbl018ES: "Agregar una tarea"
        property string lbl018SW: "lägg till uppgift" //"Add task";
        property string lbl018FN: "Lisää tehtävä" // Add task";

        property string lbl019: "Complete task"
        property string lbl019ES: "Complete tarea"
        property string lbl019SW: "avsluta uppgift" //"Complete task";
        property string lbl019FN: "Suorita tehtävä" // Complete task";

        property string lbl020: "Job Task"
        property string lbl020ES: "Tarea de Trabajo"
        property string lbl020SW: "arbetsuppgift" // "Job Task";
        property string lbl020FN: "Työtehtävä" // Job Task";

        property string lbl021: " Task List"
        property string lbl021ES: " Lista de Tareas"
        property string lbl021SW: "lista på uppgifter" //" Task List";
        property string lbl021FN: " Tehtävälista" // Task List";

        property string lbl022: "clear menu failed"
        // This one I interpreted as "clear menu did not happen" Is that OK?
        // That's what the Spanish means.
        property string lbl022ES: "menu claro no ocurrio"
        property string lbl022SW: "menytömningen misslyckades" // "clear menu failed";
        property string lbl022FN: "Menun tyhjentäminen epäonnistui" //clear menu failed";

        property string lbl023: " complete"
        property string lbl023ES: " compleado" // i.e. completed
        property string lbl023SW: "avsluta" // " complete";
        property string lbl023FN: " Tehty" // complete";

        property string lbl024: " 1st on site "
        property string lbl024ES: " primero person en sitio " // i.e. first person on site
        property string lbl024SW: "först på arbetsplatsen" // " 1st on site ";
        property string lbl024FN: " Saapunut työpaikalle" // 1st on site ";

        property string lbl025: " on crew "
        // This is a tricky one.  Literally, it becomes "Sobre tripulacion"
        //  but that's like "on top of crew".  Could be bad!
        // "en tripulacion" means "in crew".
        // "con la tripulacion" means "with the crew".
        // Hence I've used that.
        // Please check with your Mexican friends what they recommend.
        property string lbl025ES: " con la tripulacion "
        property string lbl025SW: "i arbetsstyrkan" // " on crew ";
        property string lbl025FN: " Työryhmän jäsenet" //on crew ";

        property string lbl026: " Hours "
        property string lbl026ES: " Horas "
        property string lbl026SW: "timmar" // " Hours ";
        property string lbl026FN: " Tunteja" // Hours ";

        property string lbl027: " Active Jobs"
        property string lbl027ES: " Trabajos activos"
        property string lbl027SW: "aktivt arbete, aktiva arbeten, aktiva jobb" // " Active Jobs";
        property string lbl027FN: " Avoimet työt" // Active Jobs";

        property string lbl028: " New Job: "
        property string lbl028ES: " Trabajo nuevo: "
        property string lbl028SW: "nytt jobb" // " New Job: ";
        property string lbl028FN: " Uusi työ" // New Job: ";

        property string lbl029: " Existing Job:  "
        property string lbl029ES: " Trabajo existente:"
        property string lbl029SW: "existerande arbete" // " Existing Job:  ";
        property string lbl029FN: " Olemassa oleva työ" // Existing Job:  ";

        property string jobButtonText: "Job"
        property string jobButtonTextES: "Trabajo"
        property string jobButtonTextSW: "jobb" //"Job";
        property string jobButtonTextFN: "Työ" // Job";

        property string materialsButtonText: "Materials"
        property string materialsButtonTextES: "Materiales"
        property string materialsButtonTextSW: "Materials"
        property string materialsButtonTextFN: "Materiaalit" // Materials";

        property string taskButtontext: "Task List"
        property string taskButtontextES: "Lista de Tareas"
        property string taskButtontextSW: "lista på arbetsuppgifter" // "Task List";
        property string taskButtontextFN: "Tehtävälista" // Task List";

        property string laborButtonText: "Labor"
        // Because job and labor in English both translate to trabajo in Spanish
        // I am interpeting Labor here as "effort".
        // So our translation for "Labor" in English becomes "esfuerzo"
        // which literally means effort.  Is that OK?
        property string laborButtonTextES: "Esfuerzo"
        property string laborButtonTextSW: "arbetskraft" // "Labor";
        property string laborButtonTextFN: "Työmäärä" // Labor";

        property string cinButtonText: "Clock In"
        // See !!!! above, re "Clock In"
        property string cinButtonTextES: "Comenzar a trabajar"
        property string cinButtonTextSW: "stämpla in" // "Clock In";
        property string cinButtonTextFN: "Työt aloitettiin" // Clock In";

        property string coButtonText: "Clock Out"
        // Similar problem translating "Clock Out" to "Clock In".
        // My Spanish equates to "Work finished" = "Trabajo terminado"
        property string coButtonTextES: "Trabajo terminado"
        property string coButtonTextSW: "stämpla ut" //"Clock Out";
        property string coButtonTextFN: "Työt lopetettiin" // Clock Out";

        property string espanaButtonText: "Espanol"
        property string englishButtonText: "English"
        property string swedishButtonText: "Swedish"
        property string finnishButtonText: "Finnish"

        property string menulblEspana: "Espanol"
        property string menulblEnglish: "English"
        property string menulblSwedish: "Swedish"
        property string menulblFinnish: "Finnish"

        property string menulblabout: "About"
        property string menulblaboutES: "Sobre"
        property string menulblaboutSW: "information" // "About";
        property string menulblaboutFN: "Tiedot" // About";

        property string menulblmain: "Main"
        property string menulblmainES: "Principal"
        property string menulblmainSW: "hem" //"Main";
        property string menulblmainFN: "Päämenu" // Main";

        property string menulbljob: "Job"
        property string menulbljobES: "Trabajo"
        property string menulbljobSW: "jobb" // "Job";
        property string menulbljobFN: "Työ" // Job";

        property string menulbllabor: "Labor"
        property string menulbllaborES: "Esfuerzo"
        property string menulbllaborSW: "arbetskraft" //"Labor";
        property string menulbllaborFN: "Työmäärä" // Labor";

        property string menulblmaterials: "Materials"
        property string menulblmaterialsES: "Materiales"
        property string menulblmaterialsSW: "Materials"
        property string menulblmaterialsFN: "Materiaalit" // Materials";

        property string menulblcursor: "Cursor mode"
        property string menulblcursorES: "Modo cursor"
        property string menulblcursorSW: "kursor läge" //"Cursor mode";
        property string menulblcursorFN: "Hiirimoodi" // Cursor mode";

        property string menulbltab: "Tab mode"
        property string menulbltabES: "Modo de ficha"
        property string menulbltabSW: "tabulator läge" //"Tab mode";
        property string menulbltabFN: "Tabulaattorimoodi" // Tab mode";

        property string viewlblmain: "MainView"
        property string viewlblmainES: "Principal" // I.e. Prinicipal or Main View.
        property string viewlblmainSW: "översikt" //"MainView";
        property string viewlblmainFN: "Päänäkymä" //MainView";

        property string viewlbllabor: "LaborView"
        property string viewlbllaborES: "Esfuerzo" // I.e. View of Effort (Labor)
        property string viewlbllaborSW: "arbetskraftsöversikt" //"LaborView";
        property string viewlbllaborFN: "Työmääränäkymä" // LaborView";

        property string viewlbljob: "JobView"
        property string viewlbljobES: "Trabajos" // I.e. View of Jobs
        property string viewlbljobSW: "jobböversikt" //"JobView";
        property string viewlbljobFN: "Työnäkymä" // JobView";

        property string viewlbltask: "TaskView"
        property string viewlbltaskES: "Tareas" // I.e. View of tasks
        property string viewlbltaskSW: "uppgiftsöversikt" //"TaskView";
        property string viewlbltaskFN: "Tehtävänäkymä" // TaskView";

        property string viewlblmaterials: "Materials"
        property string viewlblmaterialsES: "Materiales"
        property string viewlblmaterialsSW: "Materials"
        property string viewlblmaterialsFN: "Materiaalit" // Materials";

        property var aboutView: null
        property var languageView: null
        property var mainView: null
        property var jobView: null
        property var laborView: null
        property var materialsView: null
        property var materialsPriceView: null
        property var materialsQuantityView: null
        property var taskView: null
        property var aboutPanel: null
        property var infoPanel
        property var laborPanel
        property var materialsPanel
        property var taskPanel
        property var registerTape: [] // tracks materials for Job
        property var timeSheet: [] // tracks time for each Job
        property var timeCard: [] // tracks time for each employee
        property var tasklist: [] // tracks task list for each Job
        property var wRTversion
        property string currentScreenView: "splashScreenView"
        property var screenheight
        property var h
        property var w
        // Reference to controls in the main view.
        property var addtaskButton
        property var completetaskButton
        property var clockInButton
        property var clockOutButton
        property var materialsButton

        property var materialsPriceButton
        property var materialsQuantityButton
        property var taskButton

        property var jobButton
        property var laborButton

        property var timestamp
        property var jobField
        property var job
        property var jobs: []
        property int jobnum: 0
        property int jobcount: 0
        property var existingJob
        property string activejobs: ""
        property var material
        property var materialsField
        property var materialsQuantityField
        property var materialQuantity
        property var price
        property var totalprice
        property var totalmaterials: []
        property var totaltime: []
        property var nameField
        property var priceField
        property var taskField
        property int empcount: 0
        property int empnum: 0
        property var names: []
        property var clockInTimes: [] // using calander api in version 2 for Nokia WRT 1.1
        property var clockOutTimes: [] // interface not supported in Nokia WRT 1.0
        property var elapsedTime: []
        property var clockTotals: []
        property var clockedInEmps: []

        //property    var x;

        //about view label control
        property var aboutLabel
        property var languageLabel
        property var jobLabel
        property var laborLabel
        property var materialsLabel
        property var taskLabel
        // milliseconds
        property int second: 1000
        property int minute: second * 60
        property int hour: minute * 60
        property int day: hour * 24


        // Constants for menu item identifiers.
        property int mENU_ITEM_ABOUT: 0
        property int mENU_ITEM_LANGUAGE: 1
        property int mENU_ITEM_JOB: 2
        property int mENU_ITEM_LABOR: 3
        property int mENU_ITEM_MATERIALS: 4
        property int mENU_ITEM_MATERIALS_PRICE: 5
        property int mENU_ITEM_MATERIALS_QUANTITY: 6
        property int mENU_ITEM_MAIN: 7
        property int mENU_ITEM_TASK: 8
        property int cMD_CURSOR_MODE: 9
        property int cMD_TAB_MODE: 10
        property int mENU_ENGLISH: 11
        property int mENU_ESPANA: 12
        property int mENU_SWEDISH: 13
        property int mENU_FINNISH: 14

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
        Loader {
            id: pageLoader
            source: "TimeLordOne.qml"
        }
    }

}
