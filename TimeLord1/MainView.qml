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

    ColumnLayout {
        x: parent.width / 2
        y: parent.height / 3

        LineEdit {
            id: jobName
            text: ""
            implicitWidth: 250
            implicitHeight: 50
            attr_background_text: qsTr("Job name")
            onKeyboardInput: {
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
