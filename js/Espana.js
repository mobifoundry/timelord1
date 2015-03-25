//**
// * @author thurberdog
// */
//**
// * 
// * Espana
// * 11Nov09 Written by Louis Meadows, changes language to Spanish "Espana"
// * 13JAN10 Louis Meadows, updated 
// * 21AUG11 LPM
// * 02FEB15 LPM QML/js work
// */
function setEspana(){
 //   uiManager.showNotification(3000, "info", TimeLordES + " <br> " + lbl013  + VERSION.fontcolor("Green") +
//    lbl005 + author.fontcolor("Grey") + "<br> &copy 2009" +  company.fontcolor("Blue"));
   console.log("setEspana Button clicked")
    timeLord = timeLordES;

    warn001  = warn001ES; //  = " Nombre d'empleado(a) o numero ";
// The parenthetical a is to provide support for a female employee.  Another plus for us!

    warn002  = warn002ES; //  = " Por favor introduzca un Trabajo ";

    warn003  = warn003ES; //   = " Comenzar a trabajar";

    warn004  = warn004ES; //  = " Introduzca la tarea de Trabajo para crear un golpe de lista";

    warn005  = warn005ES; //  = "Nombre de Trabajo nuevo o numero existente ";

    warn006  = warn006ES; //  = "Por favor introduzca tu Material!";

    warn007  = warn007ES; //  = "Por favor introduzca el precio!";

    warn008  = warn008ES; //  = "claro menu no hace";

    warn009  = warn009ES; //  = "Introduzca la tarea de Trabajo a completar";

    lbl002   = lbl002ES; //   = "<br/>Primero introduzca uno numero de Trabajo," +
                     // +" despues Tarea, Mano de obra y Materiales ";
				 
    lbl003   = lbl003ES; //   = "Introduzca Material";

    lbl004   = lbl004ES; //   = "Nombre d'empleado(a) o numero";

    lbl005   = lbl005ES; //   = "<br> Escrito Para";

    lbl006   = lbl006ES; //   = " Hoja de tiempo ";

    lbl007   = lbl007ES; //   = "Billete de Materiales: $";

// Are we going to support foreign currencies?  
// If so, maybe we need pesos or pesetas instead of dollars. RNM

    lbl008   = lbl008ES; //   = "Nombre de Materiales o numero";

    lbl009   = lbl009ES; //   = " Trabajando!";
// There's no really good translation of "Clocked in!" 
// hence I used the Spanish for "working" = Trabajando. RNM 
    lbl010   = lbl010ES; //   = "Introduzca la Cantidad";

    lbl012   = lbl012ES; //   = "Trabajo:";

    lbl014   = lbl014ES; //   = " Cantidad";

    lbl015   = lbl015ES; //   = "Precio";

    lbl016   = lbl016ES; //   = "Precio de comprar o zero si es stock ";

    lbl017   = lbl017ES; //   = "Introduzca Precio por unidad";

    lbl018   = lbl018ES; //   = "Agregar una tarea";

    lbl019   = lbl019ES; //   = "Complete tarea";

    lbl020   = lbl020ES; //   = "Tarea de Trabajo";

    lbl021   = lbl021ES; //   = " Lista de Tareas";

    lbl022   = lbl022ES; //   = "men� claro no ocurri�";

    lbl023   = lbl023ES; //   = " compleado";  // i.e. completed

    lbl024   = lbl024ES; //   = " primero person en sitio "; // i.e. first person on site

    lbl025   = lbl025ES; //   = " con la tripulacion ";
// This is a tricky one.  Literally, it becomes "Sobre tripulacion"
//  but that's like "on top of crew".  Could be bad!
// "en tripulacion" means "in crew".  
// "con la tripulacion" means "with the crew".  
// Hence I've used that.  
// Please check with your Mexican friends what they recommend.
    lbl026   = lbl026ES; //   = " Horas ";

    lbl027   = lbl027ES; //   = " Trabajos activos";

    lbl028   = lbl028ES;  //   = " Trabajo nuevo: ";

    lbl029   = lbl029ES; // = " Trabajo existente:";

    jbButtonText = jobButtonTextES; // = "Trabajo";

    materialsButtonText = materialsButtonTextES; // = "Materiales";

	taskButtontext = taskButtontextES;  // = "Lista de Tareas";

    laborButtonText = laborButtonTextES = "Esfuerzo";
// Because job and labor in English both translate to trabajo in Spanish 
// I am interpeting Labor here as "effort".
// So our translation for "Labor" in English becomes "esfuerzo" 
// which literally means effort.  Is that OK?
	cinButtonText = cinButtonTextES;  // = "Comenzar a trabajar";

	coButtonText = coButtonTextES; // = "Trabajo terminado";
// Similar problem translating "Clock Out" to "Clock In".  
// My Spanish equates to "Work finished" = "Trabajo terminado"

    menulblabout = menulblaboutES; // = "Sobre";

    menulblmain  = menulblmainES; //  = "Principal";

    menulbljob   = menulbljobES; //  = "Trabajo";

    menulbllabor = menulbllaborES; // = "Esfuerzo";

    menulblmaterials = menulblmaterialsES; // = "Materiales";

    menulblcursor = menulblcursorES; // = "Modo cursor";

    menulbltab = menulbltabES; // ="Modo de ficha";

    viewlblmain = viewlblmainES; // = "Vista principal";  // I.e. Prinicipal or Main View.

    viewlbllabor = viewlbllaborES; // = "Vista d'Esfuerzo";  // I.e. View of Effort (Labor)

    viewlbljob = viewlbljobES; // = "Vista des Trabajos";  // I.e. View of Jobs

    viewlbltask = viewlbltaskES;  // = "Vista de Tareas";  // I.e. View of tasks
 //   aboutMenuItem      = new MenuItem(menulblabout, MENU_ITEM_ABOUT);
//    mainMenuItem       = new MenuItem(menulblmain , MENU_ITEM_MAIN);
///    JobMenuItem        = new MenuItem(menulbljob, MENU_ITEM_JOB);
//    LaborMenuItem      = new MenuItem(menulbllabor, MENU_ITEM_LABOR);
//    MaterialsMenuItem  = new MenuItem(menulblmaterials, MENU_ITEM_MATERIALS);
//    cursorModeMenuItem = new MenuItem(menulblcursor, CMD_CURSOR_MODE);
//    tabModeMenuItem    = new MenuItem(menulbltab, CMD_TAB_MODE);


	
	}

