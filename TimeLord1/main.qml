import QtQuick 2.4
import QtQuick.Window 2.2
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1
import QtQuick.Enterprise.Controls 1.1
import QtQuick.Controls.Styles 1.2
//import "qrc:/../js/Swedish.js" as Swedish
//import "qrc:/../js/English.js" as English
//import "qrc:/../js/Espana.js" as Espana
//import "qrc:/../js/Finnish.js" as Finnish
//import "qrc:/../js/MainView.js" as MainView
//import "qrc:/../js/MainMenu.js" as MainMenu
//import "qrc:/"

ApplicationWindow {
    id: globals

    height: Screen.height
    width: Screen.width
    color: "green"
    visible: true

    signal clickedJob()

    Image {
        id: banner
        x: 0
        y: 0
        fillMode: Image.PreserveAspectFit
        width: parent.width
        height: parent.height/10
        source: "qrc:/../images/small_logo.png"
    }
ColumnLayout{
    x: parent.width/2
    y: parent.height/10
    LineEdit {
        id:pswd
        text: //"admin"
              "1234567"//Todo Delete
        echoMode: TextInput.Password
        attr_background_text: qsTr("Password")
        KeyNavigation.tab: jobName
    }
    LineEdit {
        id: jobName
        text: //"admin"
              "Job Name"//Todo Delete
        attr_background_text:qsTr("Username")
        KeyNavigation.tab: pswd
    }
    Button {
        id: jobButton

        text: qsTr("Job")
        anchors.fill: parent
        style: ButtonStyle {
            background: Rectangle {
                implicitWidth: 100
                implicitHeight: 25
                border.width: control.activeFocus ? 2 : 1
                border.color: "blue"
                radius: 30
                gradient: Gradient {
                    GradientStop {
                        position: 0
                        color: control.pressed ? "#ccc" : "limegreen"
                    }
                    GradientStop {
                        position: 1
                        color: control.pressed ? "#aaa" : "seagreen"
                    }
                }
            }
        }

        MouseArea {
            anchors.rightMargin: 0
            anchors.bottomMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 0
            anchors.fill: parent

            onClicked: {
                clickedJob()
                MainMenu.mainMenu() // populate right and left menu keys
                MainView.mainView()
                mainScreen = Qt.createComponent("qrc:/MainView.qml")
                if (jobName.text === "" || pswd.text === "")
                {
                    showError(qsTr("Please specify Job name and password"))
                }
                else
                {
                    MainApi.logIn(usrName.text,pswd.text);
                    blocker.visible = true
                    btn.enabled = false
                    pswd.enabled = false
                    usrName.enabled = false
                    indic.visible = true
                }
            }

    }


}
}

    RowLayout {
        id: rowLayout1
        Button {
            text: qsTr("English")
        }
        Button {
            id: englishButton

            text: qsTr("English")
            anchors.fill: parent
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 100
                    implicitHeight: 25
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
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    English.setEnglish()
                    MainMenu.mainMenu() // populate right and left menu keys
                    MainView.mainView()
                    mainScreen = Qt.createComponent("qrc:/MainView.qml")
                }
        }


    }
        Button {
            id: swedishButton

            text: qsTr("Swedish")
            anchors.fill: parent
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 100
                    implicitHeight: 25
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
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    English.setEnglish()
                    MainMenu.mainMenu() // populate right and left menu keys
                    MainView.mainView()
                    mainScreen = Qt.createComponent("qrc:/MainView.qml")
                }
        }


    }
        Button {
            id: finnishButton

            text: qsTr("Finnish")
            anchors.fill: parent
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 100
                    implicitHeight: 25
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
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    English.setEnglish()
                    MainMenu.mainMenu() // populate right and left menu keys
                    MainView.mainView()
                    mainScreen = Qt.createComponent("qrc:/MainView.qml")
                }
        }


    }
        Button {
            id: espanaButton

            text: qsTr("Espana")
            anchors.fill: parent
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 100
                    implicitHeight: 25
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
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    English.setEnglish()
                    MainMenu.mainMenu() // populate right and left menu keys
                    MainView.mainView()
                    mainScreen = Qt.createComponent("qrc:/MainView.qml")
                }
        }


    }
        Button {
            id: franceButton

            text: qsTr("France")
            anchors.fill: parent
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 100
                    implicitHeight: 25
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
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    English.setEnglish()
                    MainMenu.mainMenu() // populate right and left menu keys
                    MainView.mainView()
                    mainScreen = Qt.createComponent("qrc:/MainView.qml")
                }
        }


    }
        Button {
            id: chineseButton

            text: qsTr("Chinese")
            anchors.fill: parent
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 100
                    implicitHeight: 25
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
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    English.setEnglish()
                    MainMenu.mainMenu() // populate right and left menu keys
                    MainView.mainView()
                    mainScreen = Qt.createComponent("qrc:/MainView.qml")
                }
        }


    }
        Button {
            id: navajoButton

            text: qsTr("Navajo")
            anchors.fill: parent
            style: ButtonStyle {
                background: Rectangle {
                    implicitWidth: 100
                    implicitHeight: 25
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
                anchors.rightMargin: 0
                anchors.bottomMargin: 0
                anchors.leftMargin: 0
                anchors.topMargin: 0
                anchors.fill: parent
                onClicked: {
                    English.setEnglish()
                    MainMenu.mainMenu() // populate right and left menu keys
                    MainView.mainView()
                    mainScreen = Qt.createComponent("qrc:/MainView.qml")
                }
        }


    }



}
}
