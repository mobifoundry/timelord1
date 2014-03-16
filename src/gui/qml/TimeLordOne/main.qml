
import QtQuick 2.2
import QtQuick.Controls 1.1
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

    Image {
        id: banner
        x: 0
        y: 0
        width: parent.width
        height: parent.height/15
        source: "images/small_logo.png"

    }
    MainViewScreen{
        id: mainViewScreen
        objectName: "mainViewScreen"
        x: 0
        y: parent.height/15
        width: parent.width
        height: parent.height-100
    }
}
