/**
 * @author thurberdog
 */
/**
  *
  * M a t e r i a l s Q u a n t i t y
  * 
  * Author: Louis Meadows
  * Date: Oct 13th 2009
  * 13JAN10 Louis Meadows, updated
  * 14JAN10 Louis Meadows, created seperated javascript file 
  * 
  **/
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
// 29JAN10 LPM Continued Finnish
//--------------------------------------------------------------------------------------// 
function MaterialsQuantity(event)
	{

    materialQuantity = materialsQuantityField.getText();
    if (materialQuantity.length == "") 
		{
        uiManager.showNotification(3000, 
		                           "warning", 
								   WARN006);
        JobMaterialsQuantityView();
    	}
    else JobMaterialsPriceView();
	}
