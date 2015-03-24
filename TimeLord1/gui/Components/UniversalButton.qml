import QtQuick 2.4

Rectangle {
    id: universal_button

    property alias image: button_image.source
    property string attr_gradient_top: "#dddddd"
    property string attr_gradient_bottom: "#959595"
    property string text: ""
    property double fontSize: 22

    height: 80
    width: 80
    radius: 5
    state : "State1"
    border.width: 2
    border.color: "black"
    smooth: true

    signal clicked()

    //aux
    gradient: Gradient {
        GradientStop {
            id: gradientstop1
            position: 0
            color: attr_gradient_top
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

    states: [
        State {
            name: "State1"

            when: mouse_area1.pressed

            PropertyChanges {
                target: rec_bgr
                opacity: 0
            }

            PropertyChanges {
                target: rec_bgr
                opacity: 0.2
            }
        }
    ]

    //elements
    Text {
        id: text_button_all
        anchors.centerIn: parent
        font.pixelSize: fontSize
        font.family: "Times"
        text: universal_button.text
    }

    Rectangle{
        id: rec_bgr

        anchors.fill: parent
        color: "#000000"
        opacity: 0

        MouseArea {
            id: mouse_area1

            anchors.fill: parent
            cursorShape: Qt.PointingHandCursor

            onPressedChanged: {
                state: { if(state == "State1") "State2"
                    else "State1"
                }
            }

            onClicked: universal_button.clicked()

        }

    }

}
