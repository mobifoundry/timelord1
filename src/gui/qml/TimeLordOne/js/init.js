//**
// * @author thurberdog
// */
// 13AUG11 LPM create init to better initilize timelord 1 
// 21AUG11 LPM added writting html splashscreen into SrceenView
// 14SEP11 LPM

function init(){

var MyDiv = document.getElementById('language');  // Put up splash screen
MyDiv.innerHTML = '<img alt="" src="images/small_logo.png" height="10%" width="100%"align="center"/><br><br>' +
    			  '<img id="mobifoundrylogo" alt="" src="images/logo.png" height="25%" width="25%" align="center" />';	
				  
h = document.getElementById('TimeLord1').clientHeight;
w = document.getElementById('TimeLord1').clientWidth;
 
     
 // Assign event handler to the onresize event
  window.onresize = windowResized;
 
  // Called when the window is resized
 
 setTimeout("LanguageView();", 500);
}
 function windowResized() {
    // Add code to do following:
    //  1) detect screen size 
    //  2) switch to correct view and 
    //  3) set active style sheet
}   