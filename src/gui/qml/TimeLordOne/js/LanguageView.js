/** * @author thurberdog *//** *  LanguageSelect *   */
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
// 29JAN10 LPM Continued Finnish\
// 05FEB10 LPM v121 fails to store clock in information 
// 06FEB10 LPM changed version to v122 to fix above regression 
//
// 15FEB10 LPM improving interface
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
//--------------------------------------------------------------------------------------// 

function LanguageView(){

 var mydiv = document.getElementById('language');	
  mydiv.innerHTML = '<div><form align="center">' +
      	'<div onclick="javascript:English()" align="center">' +
        '<img id="english" src="images/button_bg.png" height="14%"  width="58%"  alt="Go"/>' +
		'<div style="position: relative;top: -75px;font: 26pt Haettenschweiler, Georgia, brush script mt,impact,arial,verdana;font-weight:bold;color: #0F3300;align="center"">English</div>' +
         '</div>' +
      '<div onclick="javascript:Espana()" align="center">' +
        '<img id="espana" src="images/button_bg.png" height="14%"  width="58%"   alt="Go"/>' +
		'<div style="position: relative;top: -75px;font: 26pt Haettenschweiler, Georgia, brush script mt,impact,arial,verdana;font-weight:bold;color: #0F3300;align="center"">Espana</div>' +
       '</div>' +
     '  <div onclick="javascript:Finnish()" align="center">'+
        '<img id="finnish" src="images/button_bg.png" height="14%"  width="58%"   alt="Go"/>'+
		'<div style="position: relative;top: -75px;font: 26pt Haettenschweiler, Georgia, brush script mt,impact,arial,verdana;font-weight:bold;color: #0F3300;align="center"">Finnish</div>'+
      '</div> '+  
       '<div onclick="javascript:Swedish()" align="center">'+
        '<img id="swedish" src="images/button_bg.png" height="14%"  width="58%"   alt="Go"/>'+
		'<div style="position: relative;top: -75px;font: 26pt Haettenschweiler, Georgia, brush script mt,impact,arial,verdana;font-weight:bold;color: #0F3300;align="center"">Swedish</div>'+
      '</div>      </div> ';  
	
	}

