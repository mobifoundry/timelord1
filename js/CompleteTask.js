/**
 * @author thurberdog
 */
/**
  *
  * C o m p l e t e T a s k
  * 
  * 
  * 21AUG11 LPM 
  **/
 
function CompleteTask(){

    var task  = taskField.getText();
    var clock = new Date();
    var hh    = clock.getHours();
    var mm    = clock.getMinutes();
    var ss    = clock.getSeconds();
	
   // Add a zero in front of numbers < 10 for display purposes
   
    hh =Pad(hh);
    mm =Pad(mm);
 
    timestamp = hh + ":" + mm;
    if (task.length == "") 	{
        uiManager.showNotification(3000, "warning",
		                          WARN009);
         }
    else 	{
        if (tasklist[Jobnum] == null) 
		{
            tasklist[Jobnum] = timestamp + "  " + task;
            }
        else 	{
            tasklist[Jobnum] += "<br>" + timestamp + "  " + task + LBL023;
            }

        uiManager.showNotification(3000, "info",  + tasklist[Jobnum]);
    }
    JobTaskView();	
}
