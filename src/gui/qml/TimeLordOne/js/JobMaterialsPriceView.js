/** * @author thurberdog */
/**  *  * J o b M a t e r i a l s P r i c e V i e w  *  *  14JAN10 Louis Meadows  *  **/
 //--------------------------------------------------------------------------------------//
//
// Application: TimeLord1
// Copyright: Positively Front Street, Inc
// DBA: mobiFoundry 
// Author: Louis Meadows
// Target: Nokia WRT 1.0/1.1 E51/E71/E71x mobile phone
// Default now AT&T E71x, for E51 user will need to set cursor mode in options. 
// Date: 14 Jan 2010
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
// 14JAN10 LPM split javascript file
//
// 28JAN10 LPM General clean up after v112 failed OVI QA
// 29JAN10 LPM Continued Finnish
// 30JAN10 LPM removed button and move to softkey
//--------------------------------------------------------------------------------------// 

function JobMaterialsPriceView()
{

  

    MaterialsLabel.setText("Job:" + Job + "<br>  Materials " + totalmaterials[Jobnum]);
 
    uiManager.setView(MaterialsPriceView);
	
    
}
