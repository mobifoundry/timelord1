import QtQuick 2.2
import lcars 1.0

Rectangle
{
    width: 360
    height: 360


    Elbow
    {
        anchors.fill: parent
        anchors.margins: 50
        color: "green"

        rightArmHeight: height/2
        leftArmWidth: width/2

        MouseArea
        {
            anchors.fill: parent
            onClicked:
            {
                Qt.quit();
            }
        }
    }
}
