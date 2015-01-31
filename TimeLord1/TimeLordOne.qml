
import QtQuick 2.3
import QtQuick.Controls 1.3
import QtQuick.Controls.Styles 1.1
import QtQuick.Dialogs 1.1
import QtQuick.Layouts 1.1
import QtQuick.LocalStorage 2.0
import QtQuick.Particles 2.0
import QtQuick.Window 2.0
import QtQuick.XmlListModel 2.0

Rectangle {
    width: Screen.width
    height: Screen.height
    color: "darkblue"


      MainViewScreen{
        id: mainViewScreen
        objectName: "mainViewScreen"
        x: 0
        y: parent.height/15
        width: parent.width
        height: parent.height-100
    }
}
