import QtQuick 2.4

Rectangle {

    id: keyboard

    property bool capital: false

    width: keyboard_grid.width +border.width *2 +keyboard_grid.spacing*2
    height: keyboard_grid.height +border.width *2 +keyboard_grid.spacing*2
    color: "black"

    ListModel {
        id:my_model
        ListElement {keys: "1"}
        ListElement {keys: "2"}
        ListElement {keys: "3"}
        ListElement {keys: "4"}
        ListElement {keys: "5"}
        ListElement {keys: "6"}
        ListElement {keys: "7"}
        ListElement {keys: "8"}
        ListElement {keys: "9"}
        ListElement {keys: "0"}
        ListElement {keys: "  "}
        ListElement {keys: "  "}
    }

    signal backspaceKeyboard()
    signal applyKeyboard()
    signal letterClicked(string letter)

    border {
        width: 3
        color: "green"
    }

    Grid {
        id: keyboard_grid

        anchors.centerIn: parent

        rows: 4
        columns: 3
        spacing: 2

        Repeater {
            model: my_model
            KeyboardButton {
                width: 90; height: 90

                Text {
                    id: text_button
                    anchors.centerIn: parent
                    font.pixelSize: 40

                    text: {
                        if(index < 10) keys
                        else ""
                    }
                }

                Image {
                    anchors.fill: parent
                    anchors.margins: 25
                    source: {
                        if (index == 10) "/images/backspace.png";
                        else if (index == 11) "/images/checkmark.png";
                        else "";
                    }
                }

                onClicked: {
                    if ( index == 10 ) backspaceKeyboard()

                    else if(index == 11) applyKeyboard()
                }
            }
        }
    }
}
