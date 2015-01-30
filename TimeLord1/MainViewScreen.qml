
import QtQuick 2.2
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1
import QtQuick.Dialogs 1.1
import QtQuick.Layouts 1.1
import QtQuick.LocalStorage 2.0
import QtQuick.Particles 2.0
import QtQuick.Window 2.0
import QtQuick.XmlListModel 2.0
import "qrc:/../js/English.js" as Vars
import "qrc:/../js/English.js" as English

Rectangle {
    width: 1920
    height: 1200

    Button {
        id: button1

        x: 860
        y: 376
        width: 200
        height: 100
        text: qsTr("English")
        MouseArea{
            anchors.fill: parent
            onClicked:{
               English.setEnglish();
            }
        }

    }

    Button {
        id: button2
        x: 860
        y: 507
        width: 200
        height: 100
        text: qsTr("Espanol")
    }

    Button {
        id: button3
        x: 860
        y: 640
        width: 200
        height: 100
        text: qsTr("Finnish")
    }

    Button {
        id: button4
        x: 860
        y: 777
        width: 200
        height: 100
        text: qsTr("Swedish")
    }
}
