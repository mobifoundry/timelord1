import QtQuick 2.4
import QtQuick.Window 2.2
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1
import QtQuick.Enterprise.Controls 1.1
import QtQuick.Controls.Styles 1.2
import "Components"

ApplicationWindow {
    id: globals

    height: Screen.height
    width: Screen.width
    color: "purple"
    visible: true
    property var mainScreen
    signal clickedJob
    signal english
    signal finnish
    signal swedish
    signal french
    signal chinese
    signal navajo
    signal espana


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
        rows: 4
        id: rowLayout1
        y: Screen.height / 3
        x: Screen.width / 4
        Button {
            id: englishButton
            text: qsTr("English")
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 250
                    implicitHeight: 150
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
                id: englishButtonMouseArea
                cursorShape: Qt.PointingHandCursor
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    english()
                    console.log("english")
                    screenLoader.setSource("qrc:/MainView.qml")

                }
            }

            scale: englishButtonMouseArea.pressed ? 1.1 : 1.00
        }
        Button {
            id: swedishButton

            text: qsTr("Swedish")
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 250
                    implicitHeight: 150
                    border.width: control.activeFocus ? 2 : 1
                    border.color: "blue"
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
                id: swedishButtonMouseArea
                cursorShape: Qt.PointingHandCursor
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    swedish()
                    console.log("swedish")
                    screenLoader.setSource("qrc:/MainView.qml")

                }
            }
            scale: swedishButtonMouseArea.pressed ? 1.1 : 1.00
        }
        Button {
            id: finnishButton

            text: qsTr("Finnish")
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 250
                    implicitHeight: 150
                    border.width: control.activeFocus ? 2 : 1
                    border.color: "blue"
                    radius: 30
                    gradient: Gradient {
                        GradientStop {
                            position: 0
                            color: control.pressed ? "#ccc" : "yellow"
                        }
                        GradientStop {
                            position: 1
                            color: control.pressed ? "#aaa" : "steelblue"
                        }
                    }
                }
            }

            MouseArea {
                id: finnishButtonMouseArea
                cursorShape: Qt.PointingHandCursor
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    finnish()
                    console.log("finnish")
                    screenLoader.setSource("qrc:/MainView.qml")

                }
            }
            scale: finnishButtonMouseArea.pressed ? 1.1 : 1.00
        }
        Button {
            id: espanaButton
            text: qsTr("Espana")
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 250
                    implicitHeight: 150
                    border.width: control.activeFocus ? 2 : 1
                    border.color: "blue"
                    radius: 30
                    gradient: Gradient {
                        GradientStop {
                            position: 0
                            color: control.pressed ? "#ccc" : "red"
                        }
                        GradientStop {
                            position: 1
                            color: control.pressed ? "#aaa" : "steelblue"
                        }
                    }
                }
            }

            MouseArea {
                id: espanaButtonMouseArea
                cursorShape: Qt.PointingHandCursor
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    espana()
                    console.log("espana")
                    screenLoader.setSource("qrc:/MainView.qml")

                }
            }
            scale: espanaButtonMouseArea.pressed ? 1.1 : 1.00
        }
        Button {
            id: franceButton

            text: qsTr("France")
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 250
                    implicitHeight: 150
                    border.width: control.activeFocus ? 2 : 1
                    border.color: "blue"
                    radius: 30
                    gradient: Gradient {
                        GradientStop {
                            position: 0
                            color: control.pressed ? "#ccc" : "orange"
                        }
                        GradientStop {
                            position: 1
                            color: control.pressed ? "#aaa" : "steelblue"
                        }
                    }
                }
            }

            MouseArea {
                id: frenchButtonMouseArea
                cursorShape: Qt.PointingHandCursor
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    french()
                    console.log("french")
                    screenLoader.setSource("qrc:/MainView.qml")

                }
            }
            scale: frenchButtonMouseArea.pressed ? 1.1 : 1.00
        }
        Button {
            id: chineseButton

            text: qsTr("Chinese")

            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 250
                    implicitHeight: 150
                    border.width: control.activeFocus ? 2 : 1
                    border.color: "blue"
                    radius: 30
                    gradient: Gradient {
                        GradientStop {
                            position: 0
                            color: control.pressed ? "#ccc" : "red"
                        }
                        GradientStop {
                            position: 1
                            color: control.pressed ? "#aaa" : "steelblue"
                        }
                    }
                }
            }

            MouseArea {
                id: chineseButtonMouseArea
                cursorShape: Qt.PointingHandCursor
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    chinese()
                    console.log("chinese")
                    screenLoader.setSource("qrc:/MainView.qml")

                }
            }
            scale: chineseButtonMouseArea.pressed ? 1.1 : 1.00
        }
        Button {
            id: navajoButton

            text: qsTr("Navajo")

            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 250
                    implicitHeight: 150
                    border.width: control.activeFocus ? 2 : 1
                    border.color: "blue"
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
                id: navajoButtonMouseArea
                cursorShape: Qt.PointingHandCursor
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    navajo()
                    console.log("navajo")
                    screenLoader.setSource("qrc:/MainView.qml")

                }
            }
            scale: navajoButtonMouseArea.pressed ? 1.1 : 1.00
        }
    }
    Loader {
        id: screenLoader
        anchors.centerIn: parent
        anchors.fill: parent
        smooth: true
    }
}
