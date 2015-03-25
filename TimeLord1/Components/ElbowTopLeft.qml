import QtQuick 2.0
import lcars 1.0

Item
{
    property alias rightArmHeight: elbow.rightArmHeight
    property alias leftArmWidth: elbow.leftArmWidth
    property alias color: elbow.color

    Elbow
    {
        id: elbow
        x: height
        y: 0
        width: parent.width
        height: parent.height
        rotation: 90
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
//        x: 0
//        y: 0
//        width: 176
//        height: 100
//        color: elbowColor
//    }

//    Rectangle {
//        id: rectangle2
//        x: 100
//        y: 0
//        width: 200
//        height: 200
//        color: elbowColor
//        radius: 60
//        }
//        Rectangle {
//            id: rectangle3
//            x: 100
//            y: 152
//            width: 200
//            height: 48
//            color: elbowColor
//        }

//        Rectangle {
//            id: rectangle5
//            x: 43
//            y: 100
//            width: 57
//            height: 63
//            color: elbowColor
//        }


//    Rectangle {
//        id: rectangle4
//        x: 0
//        y: 100
//        width: 101
//        height: 100
//        color: "black"
//        radius: 60

//    }
//    Text {
//        x: 56
//        y: 33
//        anchors.centerIn: parent
//        font.pointSize: 22
//        font.bold: true
//        color: "white"
//        text:"Itotec Cutter"
//        anchors.verticalCenterOffset: -49
//        anchors.horizontalCenterOffset: 0
//    }

//}
