//**
// * @author thurberdog
// */
//**
//  * J o b L a b o r V i e w
//  *
//  * Called when the Labor button is clicked in JobView screen.
//  * 14JAN10 Louis Meadows created seperate javascript file
//    21AUG11 LPM
//  **/
  
function JobLaborView() {

if ( LaborView == null )   {
    LaborView     = new ListView(MENU_ITEM_LABOR,viewlbllabor);

    clockInButton = new FormButton(null, cinButtonText);
    clockOutButton = new FormButton(null, coButtonText);
    clockInButton.addEventListener("ActionPerformed", ClockIn );
    clockOutButton.addEventListener("ActionPerformed", ClockOut);
    nameField = new TextField(null, LBL004);	
    LaborView.addControl(nameField);
    LaborView.addControl(clockInButton);
    LaborView.addControl(clockOutButton);	
	}

 if (LaborPanel != null){
			LaborView.removeControl(LaborPanel);		
            LaborPanel = new ContentPanel(null,
			LBL006,clockedInEmps[Jobnum] , true, false);
            }
		else{
            LaborPanel = new ContentPanel(null, WARN003 ," " ,true, false);				
            }
  LaborView.addControl(LaborPanel);	
  if (window.widget) {
        menu.setRightSoftkeyLabel(menulbljob, AJobView);
    }
  LaborLabel.setText("#" + Jobnum + " : " + Job.fontcolor("Green") );

  uiManager.setView(LaborView); 

}
