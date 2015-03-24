import QtQuick 2.1

Rectangle {

    id: cell

    property alias text: txt.text
    property alias source: img.source
    property color mainColor: "PeachPuff"
    property int position: -1

    color: mainColor
    antialiasing: true
    transformOrigin: Item.TopLeft
    border.width: 1
    border.color: Qt.darker(mainColor)

    Drag.active: dragArea.drag.active
    Drag.hotSpot.x: 10
    Drag.hotSpot.y: 10

    signal cellReleased

    MouseArea {
        id: dragArea
        anchors.fill: parent

        drag.target: parent

        onReleased:
        {
            cellReleased()
        }
    }

    Image
    {
        id: img
        anchors.fill: parent
    }

    Text
    {
        id: txt
        color: "tomato"
        font.pointSize: 16
    }
}
