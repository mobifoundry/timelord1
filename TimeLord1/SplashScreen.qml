import QtQuick 2.0
import QtQuick.Window 2.2
Window {
    width:Screen.width
    height: Screen.height
    color: "purple"
    property alias clock: clock
    Image {
        id: clock
        width: 102
        height: 100
        fillMode: Image.PreserveAspectFit
        source: "qrc:/Images/Icon.png"
        horizontalAlignment: Image.AlignHCenter
        verticalAlignment: Image.AlignVCenter
    }
}



