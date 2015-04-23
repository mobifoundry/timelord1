import QtQuick 2.0


Rectangle {
    property color elbowColor: "steelblue"
    width: 300
    height: 200
    color: "black"
   Rectangle {
        id: rectangle1
        x: 124
       y: 100
        width: 176
        height: 100
        color: elbowColor
    }

   Rectangle {
        id: rectangle2
        x: 0
        y: 0
        width: 200
        height: 200
        color: elbowColor
        radius: 60
        }
        Rectangle {
            id: rectangle3
            x: 0
            y: 0
            width: 200
            height: 53
            color: elbowColor
        }

        Rectangle {
            id: rectangle5
            x: 197
            y: 38
            width: 57
            height: 63
            color: elbowColor
        }


    Rectangle {
        id: rectangle4
        x: 199
        y: 1
       width: 101
        height: 100
        color: "black"
        radius: 60

    }


}
