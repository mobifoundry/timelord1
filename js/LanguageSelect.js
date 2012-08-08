/** * @author thurberdog */
/** *  LanguageSelect *   */
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
// 29JAN10 LPM Continued Finnish
// 14AUG11 LPM Added splash screen 
// 21AUG11 LPM code for html buttons to be incerted in future release to replace Nokia methods
//'<input type="button" id="bEnglish" onclick="English()" value="English" /><br>' +
//'<input type="button" onclick="Espana()" value="Espana" />';

//-----------------------------------------------HT---------------------------------------// 

function LanguageSelect(){
var MyDiv = document.getElementById("fullScreenView");
MyDiv.interHTML = "";   // clear div
MyDiv.innerHTML = '<img alt="" src="./images/small_logo.png" height="32" width="320" align="center"/>';
if ( uiManager == null ) {
      uiManager = new UIManager(); // create User Interface
      
      uiManager.showNotification(3000, "info", TimeLord + " <br> " + LBL013  + VERSION.fontcolor("Red") + LBL005 + author.fontcolor("Green") +
                                 "&copy 2009,2010,2011" + company.fontcolor("Blue"));
      }
	  
    LanguageView       = new ListView(MENU_ITEM_LANGUAGE);
	
    var EnglishButton = new FormButton(null, EnglishButtonText.fontcolor("White"));
    EnglishButton.addEventListener("ActionPerformed", English);
    LanguageView.addControl(EnglishButton);
	
    var EspanaButton = new FormButton(null, EspanaButtonText.fontcolor("White"));
    EspanaButton.addEventListener("ActionPerformed", Espana);
	LanguageView.addControl(EspanaButton);	
	
    var FinnishButton = new FormButton(null, FinnishButtonText.fontcolor("White"));
    FinnishButton.addEventListener("ActionPerformed", Finnish);
    LanguageView.addControl(FinnishButton);	

    var SwedishButton = new FormButton(null, SwedishButtonText.fontcolor("White"));
    SwedishButton.addEventListener("ActionPerformed", Swedish);
    LanguageView.addControl(SwedishButton);	
	uiManager.setView(LanguageView);	
}

