import QtQuick 2.4

 AnimatedImage{

    anchors.centerIn: parent
    source: "../Images/ind_load.gif"
    playing: true

    MouseArea{
        anchors.fill: parent
        cursorShape: Qt.WaitCursor
    }
}

