import QtQuick 2.3
import QtQuick.Controls 1.2
Rectangle {
   color:"purple"
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
       id: materialName
       width: 250
       height: 100

       focus: true
       text:""
       placeholderText: "Enter Material name"
       anchors.verticalCenter: parent.verticalCenter
       anchors.horizontalCenterOffset: 0
       anchors.horizontalCenter: parent.horizontalCenter
        visible: true
        onEditingFinished: {
         console.log("Enter")
           if (materialName.text === ""){
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
   Loader {
       id: jobScreenLoader
       anchors.centerIn: parent
       anchors.fill: parent
       smooth: true
   }
}

