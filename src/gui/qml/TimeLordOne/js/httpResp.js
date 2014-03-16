/**
 * @author thurberdog
 */
// Call-Back Function for the XMLHttpRequest() Request
// 
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
// 02AUG10 LPM Successfully opened mobifoundry web site, httpCallBack got a 3 then a 4 for load complete !
//             Now able to open website and pull down page, next step in the path
//
//--------------------------------------------------------------------------------------//   
function httpResp()
{
		var m0 = "The XMLHttpRequest object has not yet been used to send any request.";
		var m1 = "The open() function has been called, but no data has yet been sent.";	
		var m2 = "The send() function has been called and a request has been sent, but no response has been received yet. ";		
		var m3 = "Data is now being received by the XMLHttpRequest object. ";	
		var m0_readyState = 0;
		var m1_readyState = 1;
		var m2_readyState = 2;
		var m3_readyState = 3;
		var m4_readyState = 4;
				
	switch( xmlHttp.readyState )
	 {
	
		case m0_readyState : alert(3000, "info", m0);
	               return;
 	
		case m1_readyState : alert(3000, "info", m1);
		           return;

		case m2_readyState : alert(3000, "info", m2);
                   return;
				   
		case m3_readyState : alert(3000, "info", m3);
		           return;
				   
	    case m4_readyState :	try // readyStatus=4 Means completed
		             {	// first check, if there is a response at all
			         var resultXml = xmlHttp.responseText; 		// get HTTP Data
			         if (!resultXml) 
					   {				     ;// put some error message here. "repsonseText Failed or alike"; 
				        alert(3000, "info", "repsonseText Failed or alike");
			           }
			         else 
					   {	// now create a new div (actually a node!) dynamically
				            // and do some assignments of parameters
				        var newdiv = document.createElement('div');
				        newdiv.setAttribute('id', 'temp');
				
				// put the response of the Site into this div
				// this allows us to treat the result as a node and therefore
				// use eg 'getElementsByTagName' on the HTML, that is not XML
				// conform! That's a very nice thing to do for that purpose.
				        newdiv.innerHTML = xmlHttp.responseText;
			        alert(3000, "info", "repsonseText worked");			
			// now you can parse your content as you like using the HTML Code
			// as XML structure
			// eg: newdiv.getElementsByTagName("td"); 
			
			           }// end-else
 
		             } // end-try
  	              catch (e) 
				     {
	    // do some exception handling here. 
                     }
	     }
 
	
	 
}