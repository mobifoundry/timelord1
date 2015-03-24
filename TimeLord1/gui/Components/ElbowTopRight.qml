import QtQuick 2.4
import lcars 1.0

Item
{
    property alias rightArmHeight: elbow.rightArmHeight
    property alias leftArmWidth: elbow.leftArmWidth
    property alias color: elbow.color

    Elbow
    {
        id: elbow
        x: width
        y: height
        width: parent.width
        height: parent.height
        rotation: 180
        transformOrigin: Item.TopLeft
    }
}

//Rectangle {
//    property color elbowColor: "steelblue"
//    width: 300
//    height: 200
//    color: "black"
//    Rectangle {
//        id: rectangle1
//        x: 125
//        y: 0
//        width: 176
//        height: 100
//        color: elbowColor
//    }

//    Rectangle {
//        id: rectangle2
//        x: 0
//        y: 0
//        width: 200
//        height: 200
//        color: elbowColor
//        radius: 60

//        Text {
//            id: text1
//            x: 14
//            y: 0
//            width: 283
//            height: 100
//            text: qsTr("ProFIT")
//            verticalAlignment: Text.AlignVCenter
//            font.bold: true
//            font.italic: true
//            font.pixelSize: 75
//        }
//        }
//        Rectangle {
//            id: rectangle3
//            x: 0
//            y: 152
//            width: 200
//            height: 48
//            color: elbowColor
//        }

//        Rectangle {
//            id: rectangle5
//            x: 199
//            y: 98
//            width: 57
//            height: 63
//            color: elbowColor
//        }


//    Rectangle {
//        id: rectangle4
//        x: 199
//        y: 100
//        width: 101
//        height: 100
//        color: "black"
//        radius: 60

//    }


//}
