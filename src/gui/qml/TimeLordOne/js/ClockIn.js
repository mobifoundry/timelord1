/**
 * @author thurberdog
 */
/**
  * C l o c k I n 
  *
  * Called when the Clocked in button is clicked.
  * 14JAN10 Louis Meadows, created separate javascript file
  **/
 // 13SEP11 LPM continue port to android 
  
function ClockIn(event){

    var name  = nameField.getText();
    var clock = new Date();
    var hh    = clock.getHours();
    var mm    = clock.getMinutes();
    var ss    = clock.getSeconds();
    hh        =Pad(hh);
    mm        =Pad(mm);
    ss        =Pad(ss);	
    timestamp = hh + ":" + mm + ":" + ss;

    if (name.length == "") 
	{
        alert(3000, "warning", WARN001.fontcolor("Purple"));
    }
    else // 
    {
	 	Empnum = ++Empcount;  // asume new employee unless over written below
	     for (x in names) 
		 {
            if (names[x] == name) // May be Existing Employee...
            {
                Empnum = x;
                clockInTimes[Empnum] = clock;
             }
        }	
        if ( Empnum == Empcount ) 
		{
           names[Empnum]        = name;
           clockInTimes[Empnum] = clock; 
    	   totaltime[Empnum]    = 0;
		   }
			
        if (clockedInEmps[Jobnum] == null)	
		{
	           clockedInEmps[Jobnum] ="# " + Empnum + " : " + 
			                          name + LBL024 + timestamp +  "<br>";
	           }
		else {
			   clockedInEmps[Jobnum] +="# " + Empnum +  
			                            " : " + name + LBL025 + timestamp + "<br>";	
			   }
	    alert(3000, "info","# " + 
		                           Empnum + " : " + 
								   name + LBL009 + timestamp );	   	
        nameField.value = ""; 	
        LaborView();   
    }
    

}
