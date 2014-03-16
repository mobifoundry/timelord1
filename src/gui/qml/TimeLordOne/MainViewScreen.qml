
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
    width: parent.width
    height: parent.height-100
    color: "skyblue"

    Button {
        id: button1
        x: parent.width/2
        y: parent.height/2
        width: parent.width/2
        height: parent.height/15
        text: qsTr("Enter")
    }
}
