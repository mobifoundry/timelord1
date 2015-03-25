import QtQuick 2.3

Rectangle {

    width: 1920
    height: 1200
    visible: false
    gradient: Gradient {
        GradientStop {
            position: 0
            color: "#ffffff"
        }

        GradientStop {
            position: 1
            color: "#000000"
        }
    }

    TimeLordOne {
        id: timeLordOne1
        x: 0
        y: 0
    }
}
