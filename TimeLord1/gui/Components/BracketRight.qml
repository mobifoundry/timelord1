import QtQuick 2.4

Rectangle {
    property color bracketColor: "steelblue"
    width: 100
    height: 700
    color: "black"

    Rectangle {
        id: rectangle1
        x: 0
        y: 24
        width: 50
        height: 576
        color: bracketColor
    }

    Rectangle {
        id: rectangle2
        x: 0
        y: 0
        width: 50
        height: 50
        color: bracketColor
        radius: 60
    }

    Rectangle {
        id: rectangle3
        x: 0
        y: 0
        width: 27
        height: 27
        color: bracketColor
    }

    Rectangle {
        id: rectangle4
        x: 0
        y: 600
        width: 100
        height: 100
        color: bracketColor
    }

    Rectangle {
        id: rectangle5
        x: 46
        y: 577
        width: 26
        height: 23
        color: bracketColor
    }

    Rectangle {
        id: rectangle6
        x: 50
        y: 550
        width: 50
        height: 50
        color: "black"
        radius: 60
    }
}
