import QtQuick 2.0
import Enginio 1.0
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.1
Rectangle {
   color:purple
   Image {
       id: banner
       x: 0
       y: 0
       fillMode: Image.PreserveAspectFit
       width: parent.width
       height: parent.height / 10
       source: "qrc:/../images/small_logo.png"
   }

   Rectangle {
       border.color: "lightgreen"
       border.width: 12
       anchors.centerIn: parent

   TextField {
       id: taskName
       width: 250
       height: 100

       focus: true
       text:""
       placeholderText: "Enter Task name"
       anchors.verticalCenter: parent.verticalCenter
       anchors.horizontalCenterOffset: 0
       anchors.horizontalCenter: parent.horizontalCenter
        visible: true
        onEditingFinished: {
         console.log("Enter")
           if (taskName.text === ""){
               messageDialog.visible=true
               messageDialog.open()
               console.log("rejected")

           } else {
               console.log("accepted")
               selectTask(taskName.text)
               jobScreenLoader.setSource("qrc:/JobView.qml")
           }
       }
   }
}
   Loader {
       id: jobScreenLoader
       anchors.centerIn: parent
       anchors.fill: parent
       smooth: true
   }
}

