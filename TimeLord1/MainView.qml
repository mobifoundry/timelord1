import QtQuick 2.3
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2
import QtQuick.Layouts 1.1
import QtQuick.Dialogs 1.2

Rectangle {
    id: rectangle1

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
        width: 250
        height: 100

        focus: true
        text:""
        placeholderText: "Enter Job name"
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenterOffset: 0
        anchors.horizontalCenter: parent.horizontalCenter
         visible: true
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


    Loader {
        id: jobScreenLoader
        anchors.centerIn: parent
        anchors.fill: parent
        smooth: true
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

}
