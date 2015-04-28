import QtQuick 2.3
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2
import QtQuick.Layouts 1.1
import QtQuick.Dialogs 1.2

Rectangle {

    color: "purple"
    signal selectJob(string job)
    Image {
        id: banner
        x: 0
        y: 0
        fillMode: Image.PreserveAspectFit
        width: parent.width
        height: parent.height / 10
        source: "qrc:/../images/small_logo.png"
    }
    TextField {
        id: jobName
        x: 0
        y: parent.height/4
        width:250
        height: 150
         focus: true
        text:""
        placeholderText: qsTr("Enter Job name")
        onEditingFinished: {
          console.log("Enter")
            if (jobName.text === ""){
                messageDialog.visible=true
                messageDialog.open()
                console.log("rejected")
            } else {
                console.log("accepted")
                selectJob(jobName.text)
                jobScreenLoader.setSource("qrc:/JobView.qml")
            }
        }
    }


    MessageDialog {
        id: messageDialog

        icon: StandardIcon.Warning
        visible: false
        title: "Warning"
        text: qsTr("Please specify Job name")
        standardButtons: StandardButton.Ok
        onAccepted: {
            console.log("warning message")
            messageDialog.close()
        }
    }
    Loader {
        id: jobScreenLoader
        anchors.centerIn: parent
        anchors.fill: parent
        smooth: true
    }
}
