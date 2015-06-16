import QtQuick 2.0
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.3
import QtPositioning 5.4
import QtQuick.Enterprise.Controls 1.3
import QtQuick.Dialogs 1.2

Rectangle {

    signal clockStart(string empName)
    signal clockStop(string empName)
    signal empManage(string empName)
    property var jobnum
    property var empnum
    property string name
    property string names
    property var totaltime
    property var timestamp
    property var lbl009
    property var lbl024
    property var lbl025
    property string elapsedTime
    property string clockOutTimes
    property var elapsedDays
    property var elapsedHours
    property var milliSecondsRemaining
    property var elapsedMinutes
    property var elapsedSeconds
    property var hh
    property var mm
    property var ss
    property string clockInTimes
    property var clockedInEmps
    property int empcount: 0
    id: tcView
    color: "purple"
    parent: fill
    Image {
        id: banner
        x: 0
        y: 0
        fillMode: Image.PreserveAspectFit
        width: parent.width
        height: parent.height / 10
        source: "qrc:/../images/small_logo.png"
    }
    Grid {

        Button {
            id: clockInButton
            anchors.bottom:tcView.left
            text: qsTr("Clock In")
            onClicked: {
                clockIn()
                console.log("clock In")
                empClockIn(name)
            }
            style:ButtonStyle{
                background: Rectangle {
                    implicitWidth: 100
                    implicitHeight: 25
                    border.width: control.activeFocus ? 2 : 1
                    border.color: "#888"
                    radius: 4
                    gradient: Gradient {
                        GradientStop { position: 0 ; color: control.pressed ? "#ccc" : "#eee" }
                        GradientStop { position: 1 ; color: control.pressed ? "#aaa" : "#ccc" }
                    }
                }
            }
        }

        Button {
            id: clockOutButton

            text: qsTr("Clock Out")
            onClicked: {
                clockOut()
                console.log("Clock Out")
                empClockOut(name)
            }
        }

        Button {
            id: manageEmployeeButton

            text: qsTr("Manage Employee")
            onClicked: {
                console.log("Manage Employee")
                empManage(name)
            }
        }
    }
    Image {
        id: image1
        x: 146
        y: 86
        source: "Images/Picture 409.png"
    }

    MessageDialog {
        id: messageDialogClockIn
        icon: StandardIcon.Information
        visible: false
        title: "Info"
        text: "info #" + empnum + " : " + name + lbl009 + timestamp

        standardButtons: StandardButton.Ok
        onAccepted: {
            console.log("Clock In")
            messageDialogClockIn.close()
        }
    }
}
