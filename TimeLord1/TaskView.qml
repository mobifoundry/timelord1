import QtQuick 2.0
import Enginio 1.0
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.1
Rectangle {
   color:purple
   EnginioModel {
       id:enginioModel
       client: EnginioClient {
           backendId: backendHelper.backendId
           onError: {
               console.log("Error:",JSON.stringify(reply.data))
           }
       }
       query: {
           "objectType":"object.todos"
       }
   }
   ListView {
       id: listview
       model: enginioModel
       delegate: listItemDelegate
       anchors.top: header.bottom
       anchors.bottom: footer.top
       width: parent.width
       clip: true

       // Animations
       add: Transition { NumberAnimation { properties: "y"; from: root.height; duration: 250 } }
       removeDisplaced: Transition { NumberAnimation { properties: "y"; duration: 150 } }
       remove: Transition { NumberAnimation { property: "opacity"; to: 0; duration: 150 } }
   }
   BorderImage {

       anchors.left: parent.left
       anchors.right: addButton.left
       anchors.verticalCenter: parent.verticalCenter
       anchors.margins: 16
       source:"images/textfield.png"
       border.left: 14 ; border.right: 14 ; border.top: 8 ; border.bottom: 8

       TextInput{
           id: textInput
           anchors.fill: parent
           clip: true
           anchors.leftMargin: 14
           anchors.rightMargin: 14
           verticalAlignment: Text.AlignVCenter
           font.pixelSize: 22
           Text {
               id: placeholderText
               anchors.fill: parent
               verticalAlignment: Text.AlignVCenter
               visible: !(parent.text.length || parent.inputMethodComposing)
               font: parent.font
               text: "New todo..."
               color: "#aaa"
           }
           onAccepted: {
               enginioModel.append({"title": textInput.text, "completed": false})
               textInput.text = ""
           }
       }
   }

   Item {
       id: addButton

       width: 40 ; height: 40
       anchors.margins: 20
       anchors.right: parent.right
       anchors.verticalCenter: parent.verticalCenter
       enabled: textInput.text.length
       Image {
           source: addMouseArea.pressed ? "qrc:icons/add_icon_pressed.png" : "qrc:icons/add_icon.png"
           anchors.centerIn: parent
           opacity: enabled ? 1 : 0.5
       }
       MouseArea {
           id: addMouseArea
           anchors.fill: parent
           onClicked: textInput.accepted()
       }
   }
   Text {
       id: todoText
       text: title
       font.pixelSize: 26
       color: "#333"

       anchors.verticalCenter: parent.verticalCenter
       anchors.left: checkbox.right
       anchors.right: parent.right
       anchors.leftMargin: 12
       anchors.rightMargin: 40
       elide: Text.ElideRight
   }
   MouseArea {
       id: mouse
       anchors.fill: parent
       hoverEnabled: true
       onClicked: {
           if (index !== -1 && _synced) {
               enginioModel.setProperty(index, "completed", !completed)
           }
       }
   }
   Image {
       id: removeIcon

       source: removeMouseArea.pressed ? "qrc:icons/delete_icon_pressed.png" : "qrc:icons/delete_icon.png"
       anchors.margins: 20
       anchors.verticalCenter: parent.verticalCenter
       anchors.right: parent.right
       opacity: enabled ? 1 : 0.5
       Behavior on opacity {NumberAnimation{duration: 100}}
       MouseArea {
           id: removeMouseArea
           anchors.fill: parent
           onClicked: enginioModel.remove(index)
       }
   }

}

