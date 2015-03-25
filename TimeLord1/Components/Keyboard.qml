import QtQuick 2.2

Rectangle {

    id: keyboard

    property bool capital: false

    width: keyboard_grid.width +border.width *2 +keyboard_grid.spacing*2
    height: keyboard_grid.height +border.width *2 +keyboard_grid.spacing*2

    ListModel {
        id:my_model1

        ListElement {keys: "'"; capkeys: "~"}
        ListElement {keys: "1"; capkeys: "!"}
        ListElement {keys: "2"; capkeys: "@"}
        ListElement {keys: "3"; capkeys: "#"}
        ListElement {keys: "4"; capkeys: "$"}
        ListElement {keys: "5"; capkeys: "%"}
        ListElement {keys: "6"; capkeys: "^"}
        ListElement {keys: "7"; capkeys: "&"}
        ListElement {keys: "8"; capkeys: "*"}
        ListElement {keys: "9"; capkeys: "("}
        ListElement {keys: "0"; capkeys: ")"}
        ListElement {keys: "-"; capkeys: "_"}
        ListElement {keys: "="; capkeys: "+"}
        ListElement {keys: "Bksp"; capkeys: "Bksp"}
    }
    ListModel {
        id:my_model2
        ListElement {keys: ""}
        ListElement {keys: "q"; capkeys: "Q"}
        ListElement {keys: "w"; capkeys: "W"}
        ListElement {keys: "e"; capkeys: "E"}
        ListElement {keys: "r"; capkeys: "R"}
        ListElement {keys: "t"; capkeys: "T"}
        ListElement {keys: "y"; capkeys: "Y"}
        ListElement {keys: "u"; capkeys: "U"}
        ListElement {keys: "i"; capkeys: "I"}
        ListElement {keys: "o"; capkeys: "O"}
        ListElement {keys: "p"; capkeys: "P"}
        ListElement {keys: "["; capkeys: "{"}
        ListElement {keys: "]"; capkeys: "}"}
        ListElement {keys: "\\"; capkeys: "|"}
        ListElement {keys: ""}
    }
    ListModel {
        id:my_model3

        ListElement {keys: ""}
        ListElement {keys: "a"; capkeys: "A"}
        ListElement {keys: "s"; capkeys: "S"}
        ListElement {keys: "d"; capkeys: "D"}
        ListElement {keys: "f"; capkeys: "F"}
        ListElement {keys: "g"; capkeys: "G"}
        ListElement {keys: "h"; capkeys: "H"}
        ListElement {keys: "j"; capkeys: "J"}
        ListElement {keys: "k"; capkeys: "K"}
        ListElement {keys: "l"; capkeys: "L"}
        ListElement {keys: ";"; capkeys: ":"}
        ListElement {keys: "'"; capkeys: ""}
        ListElement {keys: "Enter"; capkeys: "Enter"}
        ListElement {keys: ""}
    }
    ListModel {
        id:my_model4

        ListElement {keys: "Shift"; capkeys: "Shift"}
        ListElement {keys: "z"; capkeys: "Z"}
        ListElement {keys: "x"; capkeys: "X"}
        ListElement {keys: "c"; capkeys: "C"}
        ListElement {keys: "v"; capkeys: "V"}
        ListElement {keys: "b"; capkeys: "B"}
        ListElement {keys: "n"; capkeys: "N"}
        ListElement {keys: "m"; capkeys: "M"}
        ListElement {keys: ","; capkeys: "<"}
        ListElement {keys: "."; capkeys: ">"}
        ListElement {keys: "/"; capkeys: "?"}
        ListElement {keys: "Shift"; capkeys: "Shift"}
        ListElement {keys: ""}
    }
    ListModel {
        id:my_model5

        ListElement {keys: ""}
        ListElement {keys: ""}
        ListElement {keys: " "; capkeys: " "}
        ListElement {keys: "Cancel"; capkeys: "Cancel"}
        ListElement {keys: ""}
        ListElement {keys: ""}
        ListElement {keys: ""}

    }

    signal backspaceKeyboard()
    signal applyKeyboard()
    signal cancelKeyboard()
    signal letterClicked(string letter)

    color: "black"

    border {
        width: 3
        color: "green"
    }

    Column{
        id: keyboard_grid
        anchors.centerIn: parent
        spacing: 1

        Row {
            id: row1

            //spacing: 3

            Repeater {
                model: my_model1

                KeyboardButton{}
            }
        }
        Row {
            id: row2

            spacing: 1

            Repeater {
                model: my_model2

                KeyboardButton{}
            }
        }
        Row {
            id: row3

            spacing: 1

            Repeater {
                model: my_model3

                KeyboardButton{}
            }
        }
        Row {
            id: row4

            spacing: 1

            Repeater {
                model: my_model4

                KeyboardButton{}
            }
        }
        Row {
            id: row5

            spacing: 1

            Repeater {
                model: my_model5

                KeyboardButton{}
            }
        }
    }
}
