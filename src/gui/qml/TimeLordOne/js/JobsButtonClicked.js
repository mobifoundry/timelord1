/**
 * @author thurberdog
 */

/**
  *
  * J o b s B u t t o n C l i c k e d
  * 
  * 13JAN10 Louis Meadows, updated
  * 14JAN10 Louis Meadows, created seperate javascipt file
  **/

function JobsButtonClicked(event) 

    {
	var y = Jobnum; 

    Job = JobField.getText();

    if (Job.length == "") 
	    {
        uiManager.showNotification(3000, "warning", WARN002.fontcolor("Green"));
        uiManager.setView(mainView);
        } 
    else 
        {
        if (Job.length == 1)  
		{ 
		   if ( Job == "0") 
		   {
		      Jobnum = 0;
			  Job = Jobs[0];
			  }
		   if ( Job == "1") 
		   {
		      Jobnum = 1;
			  Job = Jobs[1];
			  }	
		   if ( Job == "2") 
		   {
		      Jobnum = 2;
			  Job = Jobs[2];
			  }
		   if ( Job == "3") 
		   {
		      Jobnum = 3;
			  Job = Jobs[3];
			  }
		   if ( Job == "4") 
		   {
		      Jobnum = 4;
			  Job = Jobs[4];
			  }
		   if ( Job == "5") 
		   {
		      Jobnum = 5;
			  Job = Jobs[5];
			  }	
		   if ( Job == "6") 
		   {
		      Jobnum = 6;
			  Job = Jobs[6];
			  }
		   if ( Job == "7")
		    {
		      Jobnum = 7;
			  Job = Jobs[7];
			  }	
		   if ( Job == "8") 
		   {
		      Jobnum = 8;
			  Job = Jobs[8];
			  }
		   if ( Job == "9")
		    {
		      Jobnum = 9;
			  Job = Jobs[9];
			  }			  			 			  		  			  					  			  			  		  
		   }
		if (totalmaterials[Jobnum] == null ) 
		{
		    totalmaterials[Jobnum] = 0;
			}	
		if (totaltime[Jobnum] == null)
		 {
		    totaltime[Jobnum] = 0;
			}	

	    AJobView();		 
        exsitingJob = null;
        for (x in Jobs)
           {
            if ( Jobs[x] == Job ) 
			   {
			   	y = x;
                exsitingJob = Job;				
			   }
		   }
        if (exsitingJob == null ) 
		    {
			Jobcount++;
			activejobs += "#" + Jobnum + " " + Job + "<br />";
			Jobs[Jobnum] = Job;
			mainView.removeControl(infoPanel);			
			infoPanel = new ContentPanel(null,
			                             Jobcount + LBL027, 
										 activejobs, true, false);
			mainView.addControl(infoPanel);
            JobLabel.setText("#" + Jobnum +" : " + Job.fontcolor("Burgundy"));			
            uiManager.showNotification(3000, "info",
			                           "#" + Jobnum + LBL028 + Job);
			totaltime[Jobnum] = 0;
		    }					  
        else 
		    {
			Jobnum = y;
            JobLabel.setText("#" + Jobnum +" : " + Job.fontcolor("Burgundy"));
            uiManager.showNotification(3000, "info",
			"#" + Jobnum +  LBL029 + Job );			
			}
 
	    menu.setRightSoftkeyLabel(viewlblmain, MainView);
        JobField.value = "";						
	    }

	}
