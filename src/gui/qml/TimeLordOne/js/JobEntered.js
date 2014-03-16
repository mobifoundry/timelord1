//--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Company: Positively Front Street, Inc
// DBA: mobiFoundry 
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options. 
// Date: Oct 2nd 2009
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
// 13JAN10 Louis Meadows, updated
// 14JAN10 Louis Meadows, created seperate javascipt file
// 29MAR10 Louis Meadows corrected miss name between button and file
//
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
// 21APR10 LPM Continue improving labor traking features, new screen for each employee with 
//         the clock in of out button.  A panel timesheet for each is shown
// 28JUL10 LPM Start of project mongolord
// 09SEP11 LPM
 // 13SEP11 LPM continue port to android 
 // 14SEP11 LPM
//--------------------------------------------------------------------------------------// 

function JobEntered(event) 

    {
    Jobnum = Jobcount;   // point to next empty job number  	
	var y = Jobnum; 
    var Job = document.getElementById('job');
  //  Job = JobField.getText();

    if (Job.value == "") 
	    {
        alert("warning"+ WARN002 + Job.value);
       	return;
        } 
    else 
        {
	   if ( Job.value == "0") 
		   {
		      Jobnum = 0;
			  Job.value = Jobs[0];
			  }
		   if ( Job.value == "1") 
		   {
		      Jobnum = 1;
			  Job.value = Jobs[1];
			  }	
		   if ( Job.value == "2") 
		   {
		      Jobnum = 2;
			  Job.value = Jobs[2];
			  }
		   if ( Job.value == "3") 
		   {
		      Jobnum = 3;
			  Job.value = Jobs[3];
			  }
		   if ( Job.value == "4") 
		   {
		      Jobnum = 4;
			  Job.value = Jobs[4];
			  }
		   if ( Job.value == "5") 
		   {
		      Jobnum = 5;
			  Job.value = Jobs[5];
			  }	
		   if ( Job.value == "6") 
		   {
		      Jobnum = 6;
			  Job.value = Jobs[6];
			  }
		   if ( Job.value == "7")
		    {
		      Jobnum = 7;
			  Job.value = Jobs[7];
			  }	
		   if ( Job.value == "8") 
		   {
		      Jobnum = 8;
			  Job.value = Jobs[8];
			  }
		   if ( Job.value == "9")
		    {
		      Jobnum = 9;
			  Job.value = Jobs[9];
			  }			  			 			  		  			  					  			  			  		  
		   
		if (totalmaterials[Jobnum] == null ) 
		{
		    totalmaterials[Jobnum] = 0;
			}	
		if (totaltime[Jobnum] == null)
		 {
		    totaltime[Jobnum] = 0;
			}	

        exsitingJob = null;
        for (x in Jobs)
           {
            if ( Jobs[x] == Job ) 
			   {
			   	y = x;
                exsitingJob = Job.value;				
			   }
		   }
        if (exsitingJob == null ) 
		    {
			Jobcount++;
			activejobs += "#" + Jobnum + " " + Job.value + "<br />";
			Jobs[Jobnum] = Job.value;
		
            JobLabel = "#" + Jobnum +" : " + Job.value;			
            alert(3000, "info",
			                           "#" + Jobnum + LBL028 + Job);
			totaltime[Jobnum] = 0;
		    }					  
        else 
		    {
			Jobnum = y;
            JobLabel = "#" + Jobnum +" : " + Job.value;
            alert(3000, "info",
			"#" + Jobnum +  LBL029 + Job );			
			}

        Job.value = "";						
	    }
		
      JobView();
		 
	}
