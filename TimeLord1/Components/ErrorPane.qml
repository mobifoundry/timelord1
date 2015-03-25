import QtQuick 2.0

Rectangle {

    property alias caption: txt.text

    color: "#d2c1c1"
    radius: 5

    Text{
        id:txt
        anchors.centerIn: parent
        color: "#a14342"
        font.pixelSize: 24
    }
}
