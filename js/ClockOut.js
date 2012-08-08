/**
 * @author thurberdog
 *
**
  *
  * C l o c k O u t
  *
  * Called when the clocked out button is clicked.  
  * 14JAN10 Louis Meadows, created javascript file
  * 21AUG11 LPM
  **/

function ClockOut(event){
 
    var name  = nameField.getText();
    var clock = new Date();
    var hh    = clock.getHours();
    var mm    = clock.getMinutes();
    var ss    = clock.getSeconds();
	
    hh = Pad(hh);
    mm = Pad(mm);
    ss = Pad(ss);
		
    timestamp = hh + ":" + mm;
	
      for (x in names)	  {
            if (names[x] == name){
                Empnum = x;
                clockOutTimes[Empnum] = clock;
             }
        }	
  
    //Get elapsed time.
    elapsedTime[Empnum] = clockOutTimes[Empnum].getTime() - clockInTimes[Empnum].getTime();
    //Get 1 day in milliseconds
	if ( totaltime[Jobnum] == null ){
       totaltime[Jobnum] = elapsedTime[Empnum];
	   }
	else {
	   totaltime[Jobnum] += elapsedTime[Empnum];
	   }
	   
    var elapsedDays = Math.floor(elapsedTime[Empnum] / day);
    var milliSecondsRemaining = elapsedTime[Empnum] % day;
	
    //Milliseconds still unaccounted for - less than aday's worth.
    //Get 1 hour in milliseconds
    
    var elapsedHours = Math.floor(milliSecondsRemaining / hour);
    milliSecondsRemaining = milliSecondsRemaining % hour;
	
    //Milliseconds still unaccounted for - lessthan an hour's worth.
    //Get 1 minute in milliseconds
    
    var elapsedMinutes = Math.floor(milliSecondsRemaining / minute);
    milliSecondsRemaining = milliSecondsRemaining % minute;
	
    //Milliseconds still unaccounted for -less than a minute's worth.
    
    var elapsedSeconds = Math.round(milliSecondsRemaining / second);
	
    if (name.length == "") 		{
        uiManager.showNotification(3000, "warning", WARN001);
    	}
    else {
        uiManager.showNotification(3000, "info", 
		elapsedHours + LBL026 + elapsedMinutes + " Minutes " + "  " + name);
        JobLaborView();  
    	}
    menu.setRightSoftkeyLabel(viewlbljob,AJobView );
	}

