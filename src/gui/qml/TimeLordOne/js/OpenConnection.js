/**
 * @author thurberdog
 */
// defined global, as required in call-back as well.
//--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Company: Positively Front Street, Inc
// DBA: mobiFoundry 
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options. 
// Date: July 28th 2010
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
// 28JUL10 LPM Start of project mongolord
//             Problem Statement : If your Widget is connecting to a remote HTML-site through XMLHttpRequest(), 
//             the function responseXML will not work, as the response is not pure XML.
//             Thus the following example is showing a smooth solution on how to deal with this problem and parse the HTML as it was an XML tree.
//             The code shows a basic Widget, that connects to a remote (or a local file for debug reasons) HTML-Site and parses the content.
//             As the returned HTML-Code is not XML-well formed the 'responseText()' method is used to retrieve the plain HTML-Code as text,
//             which then is assigned to a dynamically created div using 'document.createElement('div');'
// 02AUG10 LPM Successfully opened mobifoundry web site, httpCallBack got a 3 then a 4 for load complete !
//             Now able to open website and pull down page, next step in the path
//--------------------------------------------------------------------------------------//   

var xmlHttp = null;
 
function openConnection()
{
	try{
 
		// create a new connection object
		 xmlHttp = new XMLHttpRequest();
 
		// reference to Call-Back Function;
		xmlHttp.onreadystatechange = httpResp;
 
		// url you connect to; can also be a local file
		var url_frame = "https://mongolab.com/login/?r=%2Fdatabases%2FTimeLord1";
 
		// open the URL now
		xmlHttp.open('GET', url_frame, true);
 
		// and send GET request
		xmlHttp.send(null);
 
	   }
	catch(e)
	   {
 
	    }
}