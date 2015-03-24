import QtQuick 2.4

Rectangle {
    id: universal_button

    property alias image: button_image.source
    property string attr_gradient_press_top: "#959595"
    property string attr_gradient_press_bottom: "#dddddd"
    property string attr_gradient_top: "#dddddd"
    property string attr_gradient_bottom: "#959595"
    property string text: ""

    height: 80
    width: {
        if (keys == " ") 80 * 8
        else if (keys.length > 2) 80*2
        else 80
    }

    border.width: 2
    border.color: "black"
    smooth: true
    radius: 5

    signal clicked()

    gradient: Gradient {
        GradientStop {
            id: gradientstop1
            position: 0
            color:
            {
                if ((keys == "Enter") || (keys == "Cancel")) "#303030";
                else attr_gradient_top
            }
        }

        GradientStop {
            id: gradientstop2
            position: 1
            color: attr_gradient_bottom

        }
    }

    Image {
        z: 0
        id: button_image
        anchors.centerIn: parent
    }

    opacity: {
        if (keys == "") 0.0
        else if (capital && (keys == "Shift")) 0.7
        else if (!capital && (keys == "Shift")) 1.0
        else 1
    }

    Text {
        id: text_button_all
        anchors.centerIn: parent
        font.pixelSize: 22
        font.family: "Times"
        text: universal_button.text
    }


    Text {
        id: text_button_keyboard
        anchors.centerIn: parent
        font.pixelSize: 35
        color:
        {
            if ((keys == "Enter") || (keys == "Cancel")) "white";
            else "black"
        }

        text: {

            if(capital) capkeys
            else    keys
        }
    }

    MouseArea {
        id: mouse_area1
        anchors.fill: parent

        cursorShape: Qt.PointingHandCursor

        onPressedChanged: {
            state: { if(state == "State1") "State2"}
        }

        onClicked: {

            universal_button.clicked()

            if(keys == "Shift") {capital = !capital}

            else if ( keys == "Bksp" ) backspaceKeyboard()

            else if(keys == "Shift") ;

            else if(keys == "Enter") applyKeyboard()

            else if(keys == "Cancel") cancelKeyboard()

            else if(keys == "  ") ;

            else letterClicked( text_button_keyboard.text )
        }
    }
    states: [
        State {
            name: "State1"

            when: mouse_area1.pressed

            PropertyChanges {
                target: gradientstop1
                position: 0
                color: attr_gradient_press_top
            }

            PropertyChanges {
                target: gradientstop2
                position: 1
                color:
                {
                    if ((keys == "Enter") || (keys == "Cancel")) "#303030";
                    else attr_gradient_press_bottom
                }
            }
        }
    ]
}
