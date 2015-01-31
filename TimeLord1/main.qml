import QtQuick 2.4
import QtQuick.Window 2.2
import QtQuick.Controls 1.3

ApplicationWindow {
    id: window
    height: 1920
    width: 1080
    color: "green"
    visible: true

    Image{
        id: banner
        x: 0
        y: 0
        width: parent.width
        height: parent.height/10
        source: "qrc:/../images/small_logo.png"

    }
    Rectangle {
        height: 25
        width: parent.width
        z: 1
        color: "seagreen"
    MenuBar {
        id: menuBar

         Menu {
              title: "File"
              MenuItem { text: "Open..." }
              MenuItem { text: "Close" }
          }

          Menu {
              title: "Edit"
              MenuItem { text: "Cut" }
              MenuItem { text: "Copy" }
              MenuItem { text: "Paste" }
          }
          Menu {
              title: "Language"
              MenuItem{ text: "Espana" }
              MenuItem{ text: "English" }
              MenuItem{ text: "Swedish" }
              MenuItem{ text: "Finnish" }
          }
          Menu {
              title: "Options"
              MenuItem{ text:"about" }
              MenuItem{ text:"main" }
              MenuItem{ text:"cursor" }
              MenuItem{ text:"tabMode" }

          }
      }
}

    Item {

        //      width: 200; height: 200
        Loader {
            id: pageLoader
            source: "TimeLordOne.qml"
        }
    }

}
