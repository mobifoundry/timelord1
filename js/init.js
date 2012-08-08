//**
// * @author thurberdog
// */
// 13AUG11 LPM create init to better initilize timelord 1 
// 21AUG11 LPM added writting html splashscreen into SrceenView

var so = null;
function init(){
setTimeout("LanguageSelect();", 3000);
var MyDiv = document.getElementById("fullScreenView");  // Put up splash screen
MyDiv.innerHTML = '<img alt="" src="images/small_logo.png" height="32" width="120"align="center"/><br><br>' +
                  '<img id="louis" alt="" src="images/louis.png" height="31" width="29" align="center"/><br>'  +
				  '<img id="mobifoundrylogo" alt="" src="images/logo.png" height="169" width="169" align="center" />';	
				  
h = document.getElementById('TimeLord1').clientHeight;
w = document.getElementById('TimeLord1').clientWidth;
 
   
  	if ( uiManager == null ) {
      uiManager = new UIManager(); // create User Interface
      
      uiManager.showNotification(1500, "info", TimeLord + " <br> " + LBL013  +
                                 VERSION.fontcolor("Red") + LBL005 + author.fontcolor("Green") +
                                 "&copy 2009,2010,2011" + company.fontcolor("Blue"));
      } 

   
 // Assign event handler to the onresize event
  window.onresize = windowResized;
 
  // Called when the window is resized
 
 
}
 function windowResized() {
    // Add code to do following:
    //  1) detect screen size 
    //  2) switch to correct view and 
    //  3) set active style sheet
}   