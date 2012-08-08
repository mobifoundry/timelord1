/**
 * @author thurberdog
 */
/**
  *
  * M a t e r i a l P r i c e  **/
//--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Copyright: Positively Front Street, Inc
// DBA: mobiFoundry 
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options. 
// Date: Oct 13th 2009
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
// 29JAN10 LPM Continued Finnish
// 21AUG11 LPM bring function (){ together to find error TypeError: Result of expression near '...})()...' [undefined] is not a function.
//--------------------------------------------------------------------------------------// 
function MaterialPrice(event){
	
    price      = priceField.getText();
    totalprice = (parseFloat(price) * parseFloat(materialQuantity));


    if (price.length == "")	{
        uiManager.showNotification(3000,"warning",WARN007);
        JobMaterialsPriceView();								   
        }
    else {
        if (totalmaterials[Jobnum] == null)	{
            totalmaterials[Jobnum] = totalprice;
        }
        else {
            totalmaterials[Jobnum] += totalprice;
        }
        
        if (RegisterTape[Jobnum] == null) 		{
            RegisterTape[Jobnum] = materialQuantity + " " + material + " @ $" + price + 
			" each=" +totalprice +" "+timestamp+"<br>";
        }
        else {
            RegisterTape[Jobnum] += materialQuantity + " " + material + " @ $" + price + 
			" each=$" + totalprice +" TS: "+timestamp+"<br>";
        }

 		JobMaterialsView();
    }
}	
