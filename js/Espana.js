//**
// * @author thurberdog
// */
//**
// * 
// * Espana
// * 11Nov09 Written by Louis Meadows, changes language to Spanish "Espana"
// * 13JAN10 Louis Meadows, updated 
// * 21AUG11 LPM
// */
function Espana(){
    uiManager.showNotification(3000, "info", TimeLordES + " <br> " + LBL013  + VERSION.fontcolor("Green") +
    LBL005 + author.fontcolor("Grey") + "<br> &copy 2009" +  company.fontcolor("Blue"));
   
	TimeLord = TimeLordES;

	WARN001  = WARN001ES; //  = " Nombre d'empleado(a) o numero ";
// The parenthetical a is to provide support for a female employee.  Another plus for us!

	WARN002  = WARN002ES; //  = " Por favor introduzca un Trabajo ";

	WARN003  = WARN003ES; //   = " Comenzar a trabajar";

	WARN004  = WARN004ES; //  = " Introduzca la tarea de Trabajo para crear un golpe de lista";

	WARN005  = WARN005ES; //  = "Nombre de Trabajo nuevo o numero existente ";

	WARN006  = WARN006ES; //  = "Por favor introduzca tu Material!";

	WARN007  = WARN007ES; //  = "Por favor introduzca el precio!";

	WARN008  = WARN008ES; //  = "claro menu no hace";

	WARN009  = WARN009ES; //  = "Introduzca la tarea de Trabajo a completar";

	LBL002   = LBL002ES; //   = "<br/>Primero introduzca uno numero de Trabajo," +
                     // +" despues Tarea, Mano de obra y Materiales ";
				 
	LBL003   = LBL003ES; //   = "Introduzca Material";

	LBL004   = LBL004ES; //   = "Nombre d'empleado(a) o numero";

	LBL005   = LBL005ES; //   = "<br> Escrito Para";

	LBL006   = LBL006ES; //   = " Hoja de tiempo ";

	LBL007   = LBL007ES; //   = "Billete de Materiales: $";

// Are we going to support foreign currencies?  
// If so, maybe we need pesos or pesetas instead of dollars. RNM

	LBL008   = LBL008ES; //   = "Nombre de Materiales o numero";

	LBL009   = LBL009ES; //   = " Trabajando!";
// There's no really good translation of "Clocked in!" 
// hence I used the Spanish for "working" = Trabajando. RNM 
	LBL010   = LBL010ES; //   = "Introduzca la Cantidad";

	LBL012   = LBL012ES; //   = "Trabajo:";

	LBL014   = LBL014ES; //   = " Cantidad";

	LBL015   = LBL015ES; //   = "Precio";

	LBL016   = LBL016ES; //   = "Precio de comprar o zero si es stock ";

	LBL017   = LBL017ES; //   = "Introduzca Precio por unidad";

	LBL018   = LBL018ES; //   = "Agregar una tarea";

	LBL019   = LBL019ES; //   = "Complete tarea";

	LBL020   = LBL020ES; //   = "Tarea de Trabajo";

	LBL021   = LBL021ES; //   = " Lista de Tareas";

	LBL022   = LBL022ES; //   = "men� claro no ocurri�";

	LBL023   = LBL023ES; //   = " compleado";  // i.e. completed

	LBL024   = LBL024ES; //   = " primero person en sitio "; // i.e. first person on site

	LBL025   = LBL025ES; //   = " con la tripulacion ";
// This is a tricky one.  Literally, it becomes "Sobre tripulacion"
//  but that's like "on top of crew".  Could be bad!
// "en tripulacion" means "in crew".  
// "con la tripulacion" means "with the crew".  
// Hence I've used that.  
// Please check with your Mexican friends what they recommend.
	LBL026   = LBL026ES; //   = " Horas ";

	LBL027   = LBL027ES; //   = " Trabajos activos";

	LBL028   = LBL028ES;  //   = " Trabajo nuevo: ";

	LBL029   = LBL029ES; // = " Trabajo existente:";

	JobButtonText = JobButtonTextES; // = "Trabajo";

	MaterialsButtonText = MaterialsButtonTextES; // = "Materiales";

	taskButtontext = taskButtontextES;  // = "Lista de Tareas";

	LaborButtonText = LaborButtonTextES = "Esfuerzo";
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
	aboutMenuItem      = new MenuItem(menulblabout, MENU_ITEM_ABOUT);
	mainMenuItem       = new MenuItem(menulblmain , MENU_ITEM_MAIN);
	JobMenuItem        = new MenuItem(menulbljob, MENU_ITEM_JOB);
	LaborMenuItem      = new MenuItem(menulbllabor, MENU_ITEM_LABOR);
	MaterialsMenuItem  = new MenuItem(menulblmaterials, MENU_ITEM_MATERIALS);
	cursorModeMenuItem = new MenuItem(menulblcursor, CMD_CURSOR_MODE);
	tabModeMenuItem    = new MenuItem(menulbltab, CMD_TAB_MODE);

	MainView();
	
	}

