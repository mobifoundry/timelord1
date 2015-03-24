import QtQuick 2.4

Rectangle {

    Item {
        id: globals

        property string author: " Louis Meadows <br> louis.meadows@mobifoundry.com <br>"
        property string company: " Positively Front Street, Inc <br> www.positivelyfrontstreet.com <br> DBA mobiFoundry <br> www.mobifoundry.com"

        property string timeLordES: " TimeLord1 " //"TiempoSenor1";

        property string vERSION: " V118 LPM21AUG11 "

        property var aboutView: null
        property var languageView: null
        property var mainView: null
        property var jobView: null
        property var laborView: null
        property var materialsView: null
        property var materialsPriceView: null
        property var materialsQuantityView: null
        property var taskView: null
        property var aboutPanel: null
        property var infoPanel
        property var laborPanel
        property var materialsPanel
        property var taskPanel
        property var registerTape: [] // tracks materials for Job
        property var timeSheet: [] // tracks time for each Job
        property var timeCard: [] // tracks time for each employee
        property var tasklist: [] // tracks task list for each Job
        property var wRTversion
        property string currentScreenView: "splashScreenView"
        property var screenheight
        property var h
        property var w
        // Reference to controls in the main view.
        property var addtaskButton
        property var completetaskButton
        property var clockInButton
        property var clockOutButton
        property var materialsButton

        property var materialsPriceButton
        property var materialsQuantityButton
        property var taskButton

        property var jobButton
        property string jobButtonText: "Job"
        property string jobButtonTextES: "Trabajo"
        property string jobButtonTextSW: "jobb" //"Job";
        property string jobButtonTextFN: "Työ" // Job";
        property var laborButton


        property string materialsButtonText: "Materials"
        property string materialsButtonTextES: "Materiales"
        property string materialsButtonTextSW: "Materials"
        property string materialsButtonTextFN: "Materiaalit" // Materials";

        //property    var x;

        //about view label control
        property var aboutLabel
        property var languageLabel
        property var jobLabel
        property var laborLabel
        property var materialsLabel
        property var taskLabel
        // milliseconds
        property int second: 1000
        property int minute: second * 60
        property int hour: minute * 60
        property int day: hour * 24


        // Constants for menu item identifiers.
        property int mENU_ITEM_ABOUT: 0
        property int mENU_ITEM_LANGUAGE: 1
        property int mENU_ITEM_JOB: 2
        property int mENU_ITEM_LABOR: 3
        property int mENU_ITEM_MATERIALS: 4
        property int mENU_ITEM_MATERIALS_PRICE: 5
        property int mENU_ITEM_MATERIALS_QUANTITY: 6
        property int mENU_ITEM_MAIN: 7
        property int mENU_ITEM_TASK: 8
        property int cMD_CURSOR_MODE: 9
        property int cMD_TAB_MODE: 10
        property int mENU_ENGLISH: 11
        property int mENU_ESPANA: 12
        property int mENU_SWEDISH: 13
        property int mENU_FINNISH: 14


    }

}

