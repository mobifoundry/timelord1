import QtQuick 2.0

Rectangle {

color:"purple"
Image {
    id: banner
    x: 0
    y: 0
    fillMode: Image.PreserveAspectFit
    width: parent.width
    height: parent.height / 10
    source: "qrc:/../images/small_logo.png"
}
}

