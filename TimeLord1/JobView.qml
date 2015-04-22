import QtQuick 2.2
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1
import QtQuick.Dialogs 1.1
import QtQuick.Layouts 1.1
import QtQuick.LocalStorage 2.0
import QtQuick.Particles 2.0
import QtQuick.Window 2.0
import QtQuick.XmlListModel 2.0

Rectangle {
    color: "purple"
    Image {
        id: banner
        x: 0
        y: 0
        fillMode: Image.PreserveAspectFit
        width: parent.width
        height: parent.height / 10
        source: "qrc:/../images/small_logo.png"
    }
    Grid {
        Button {
            id: timeClockButton
            text: qsTr("TimeClock")
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 250
                    implicitHeight: 50
                    border.width: control.activeFocus ? 2 : 1
                    border.color: "blue"
                    radius: 30
                    gradient: Gradient {
                        GradientStop {
                            position: 0
                            color: control.pressed ? "#ccc" : "blue"
                        }
                        GradientStop {
                            position: 1
                            color: control.pressed ? "#aaa" : "steelblue"
                        }
                    }
                }
            }

            MouseArea {
                id: timeClockButtonMouseArea
                cursorShape: Qt.PointingHandCursor
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {

                    console.log("Time Clock")
                    screenLoader.setSource("qrc:/TimeClockView.qml")
                }
            }

            scale: timeClockButtonMouseArea.pressed ? 1.1 : 1.00
        }
        Button {
            id: materialsButton
            text: qsTr("Materials")
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 250
                    implicitHeight: 50
                    border.width: control.activeFocus ? 2 : 1
                    border.color: "green"
                    radius: 30
                    gradient: Gradient {
                        GradientStop {
                            position: 0
                            color: control.pressed ? "#ccc" : "green"
                        }
                        GradientStop {
                            position: 1
                            color: control.pressed ? "#aaa" : "steelblue"
                        }
                    }
                }
            }

            MouseArea {
                id: materialsButtonMouseArea
                cursorShape: Qt.PointingHandCursor
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    console.log("materials")
                    screenLoader.setSource("qrc:/MaterialsView.qml")
                }
            }

            scale: materialsButtonMouseArea.pressed ? 1.1 : 1.00
        }

        Button {
            id: taskButton
            text: qsTr("Tasks")
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 250
                    implicitHeight: 50
                    border.width: control.activeFocus ? 2 : 1
                    border.color: "green"
                    radius: 30
                    gradient: Gradient {
                        GradientStop {
                            position: 0
                            color: control.pressed ? "#ccc" : "green"
                        }
                        GradientStop {
                            position: 1
                            color: control.pressed ? "#aaa" : "steelblue"
                        }
                    }
                }
            }

            MouseArea {
                id: taskButtonMouseArea
                cursorShape: Qt.PointingHandCursor
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    console.log("Tasks")
                    screenLoader.setSource("qrc:/TaskView.qml")
                }
            }

            scale: taskButtonMouseArea.pressed ? 1.1 : 1.00
        }
    }
}
