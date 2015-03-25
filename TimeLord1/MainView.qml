import QtQuick 2.3
import QtQuick.Controls 1.2

Rectangle {
    width: 100
    height: 62

    Button {
        id: jobButton
        x: -49
        y: 22
        width: 200
        height: 100
        text: qsTr( globals.jobButtonText )
    }

    TextArea {
        id: textArea1
        x: -69
        y: -154
    }
}

