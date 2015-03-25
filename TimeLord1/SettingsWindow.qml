import QtQuick 2.2
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1
import QtQuick.Layouts 1.1

import "Components"

Rectangle
{
    id: root
    property int pageMargin: height / 60

    property int columnMargin: textStationType.width * 1.5
    property color colorText: "DarkGray"
    property int fontText: height / 50

    signal clickedRoot()

    //aux
    MouseArea
    {
        anchors.fill: parent
        onClicked: clickedRoot()
    }

    Image
    {
        fillMode: Image.Tile
        anchors.fill: parent
        source: "Images/bg.jpg"
    }

    Rectangle
    {
        anchors.fill: parent
        anchors.topMargin: 20
        anchors.bottomMargin: 20
        anchors.leftMargin:
        {
            if (parent.height > parent.width) 20
            else parent.width / 4
        }
        anchors.rightMargin: anchors.leftMargin

        Image
        {
            fillMode: Image.Tile
            anchors.fill: parent
            source: "Images/bg_noise_light.jpg"
            opacity: 0.9
        }

        Text
        {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.top: parent.top
            text: "Settings"
            font.pixelSize: fontText * 1.4
            color: "Gainsboro"
        }

        UniversalButton
        {
            id: buttonOk
            width: parent.width / 7
            height: pageMargin * 2.5
            text: "Ok"
            //fontSize: fontText
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 20
            anchors.left: recSerialport.left
            anchors.leftMargin: recSerialport.width / 5

            onClicked: {
                configHolder.setHostProfit(lineeditHostProfit.text)
                configHolder.setSchemeProfit(comboboxSchemeProfit.currentText)
                configHolder.setHostShws(lineeditHostShws.text)
                configHolder.setSchemeShws(comboboxSchemeShws.currentText)
                configHolder.setPathFileJdf(lineditPathJdf.text)
                configHolder.setPathFileJson(lineditPathJson.text)
                configHolder.setStationType(comboboxStationType.currentText)
                configHolder.setPort(comboboxPort.currentText)
                configHolder.setPort2(comboboxPort2.currentText)
                configHolder.setBaudrate("115200")
                configHolder.setDatabits("8")
                configHolder.setParity("0")
                configHolder.setStopbits("1");
                configHolder.setFlowcontrol("0")
//                configHolder.setBaudrate(comboboxBaudrate.currentText)
//                configHolder.setDatabits(comboboxDatabits.currentText)
//                configHolder.setParity(comboboxParity.currentText)
//                if (comboboxStopbits.currentText === "1.5")
//                {
//                    configHolder.setStopbits(3);
//                }
//                else
//                {
//                    configHolder.setStopbits(comboboxStopbits.currentText)
//                }
//                configHolder.setFlowcontrol(comboboxFlowcontrol.currentText)
                configHolder.saveConfig();
                pageLoader2.setSource("main.qml")
            }
        }

        UniversalButton
        {
            id: buttonCancel
            width: buttonOk.width
            height: buttonOk.height
            text: "Cancel"
            //fontSize: buttonOk.fontSize
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 20
            anchors.right: recSerialport.right
            anchors.rightMargin: recSerialport.width / 5

            onClicked: pageLoader2.setSource("main.qml")
        }

        Item
        {
           id: itemStretch
           anchors.top: recSerialport.bottom
           anchors.bottom: buttonOk.top
        }

        GroupBox
        {
            id: recSerialport
            anchors.top: recStationType.bottom
            anchors.margins: pageMargin
            anchors.left: parent.left
            anchors.right: parent.right
            title: "<font color=\"Gainsboro\" size=\"6\">Serial port</font>"

            GridLayout
            {
                anchors.fill: parent
                anchors.margins: 20
                columns: 2

                Text
                {
                    text: "port"
                    color: colorText
                    font.pixelSize: fontText
                }

                ComboBox
                {
                    id: comboboxPort
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.leftMargin: columnMargin
                    model: configHolder.realPorts()
                    currentIndex:
                    {
                        for (var i = 0; i < configHolder.realPorts().length; ++i)
                        {
                            if (currentText === configHolder.realPorts()[i]) i
                        }
                    }
                }

                Text
                {
                    text: "port2"
                    color: colorText
                    font.pixelSize: fontText
                }

                ComboBox
                {
                    id: comboboxPort2
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.leftMargin: columnMargin
                    model: configHolder.realPorts()
                    currentIndex:
                    {
                        for (var i in configHolder.realPorts())
                        {
                            if (currentText === configHolder.realPorts()[i]) i
                        }
                    }
                }

//                Text
//                {
//                    text: "baudrate"
//                    color: colorText
//                    font.pixelSize: fontText
//                }

//                ComboBox
//                {
//                    id: comboboxBaudrate
//                    anchors.left: parent.left
//                    anchors.right: parent.right
//                    anchors.leftMargin: columnMargin

//                    model: ListModel {
//                        id: modelBaudrate
//                        ListElement { text: "9600"; }
//                        ListElement { text: "19200"; }
//                        ListElement { text: "38400"; }
//                        ListElement { text: "115200"; }
//                    }
//                    currentIndex:
//                    {
//                        3
//                        for (var i = 0; i < modelBaudrate.count; ++i)
//                        {
//                            if (configHolder.baudrate().toString() === modelBaudrate.get(i).text) i
//                        }
//                    }
//                }

//                Text
//                {
//                    text: "databits"
//                    color: colorText
//                    font.pixelSize: fontText
//                }

//                ComboBox
//                {
//                    id: comboboxDatabits
//                    anchors.left: parent.left
//                    anchors.right: parent.right
//                    anchors.leftMargin: columnMargin
//                    model: ListModel {
//                        id: modelDatabits
//                        ListElement { text: "5"; }
//                        ListElement { text: "6"; }
//                        ListElement { text: "7"; }
//                        ListElement { text: "8"; }
//                    }
//                    currentIndex:
//                    {
//                        3
//                        for (var i = 0; i < modelDatabits.count; ++i)
//                        {
//                            if (configHolder.databits().toString() === modelDatabits.get(i).text) i
//                        }
//                    }
//                }

//                Text
//                {
//                    text: "parity"
//                    color: colorText
//                    font.pixelSize: fontText
//                }

//                ComboBox
//                {
//                    id: comboboxParity
//                    anchors.left: parent.left
//                    anchors.right: parent.right
//                    anchors.leftMargin: columnMargin
//                    model: ListModel {
//                        ListElement { text: "None"; }
//                        ListElement { text: "Even"; }
//                        ListElement { text: "Odd"; }
//                        ListElement { text: "Mark"; }
//                        ListElement { text: "Space"; }
//                    }
//                    currentIndex: configHolder.parity()
//                }

//                Text
//                {
//                    text: "stopbits"
//                    color: colorText
//                    font.pixelSize: fontText
//                }

//                ComboBox
//                {
//                    id: comboboxStopbits
//                    anchors.left: parent.left
//                    anchors.right: parent.right
//                    anchors.leftMargin: columnMargin
//                    model: ListModel {
//                        ListElement { text: "1"; }
//                        ListElement { text: "1.5"; }
//                        ListElement { text: "2"; }
//                    }
//                    currentIndex:
//                    {
//                        if (configHolder.stopbits() === 1) 0
//                        else if (configHolder.stopbits() === 3) 1
//                        else if (configHolder.stopbits() === 3) 2
//                        else 0
//                    }
//                }

//                Text
//                {
//                    id: textFlowcontrol
//                    text: "flowcontrol"
//                    color: colorText
//                    font.pixelSize: fontText
//                }

//                ComboBox
//                {
//                    id: comboboxFlowcontrol
//                    anchors.left: parent.left
//                    anchors.right: parent.right
//                    anchors.leftMargin: columnMargin
//                    model: ListModel {
//                        id: modelFlowcontrol
//                        ListElement { text: "None"; }
//                        ListElement { text: "RTS/CTS"; }
//                        ListElement { text: "XON/XOFF"; }
//                    }
//                    currentIndex: configHolder.flowcontrol()
//                }
            }
        }

        GroupBox
        {
            id: recStationType
            anchors.top: recDemo.bottom
            anchors.margins: pageMargin
            anchors.left: parent.left
            anchors.right: parent.right
            title:  "<font color=\"Gainsboro\" size=\"6\">Station</font>"

            GridLayout
            {
                anchors.fill: parent
                anchors.margins: 20
                columns: 2

                Text
                {
                    id: textStationType
                    text: "stationType"
                    color: colorText
                    font.pixelSize: fontText
                }
                ComboBox
                {
                    id: comboboxStationType
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.leftMargin: columnMargin
                    model: ListModel {
                        id: modelStationType
                        ListElement { text: "CUTTING-VT2"; }
                        ListElement { text: "CUTTING-VT3"; }
                    }
                    currentIndex:
                    {
                        for (var i = 0; i < modelStationType.count; ++i)
                        {
                            if (configHolder.stationType() === modelStationType.get(i).text) i
                        }
                    }
                }
            }
        }

        GroupBox
        {
            id: recDemo
            anchors.top: recShws.bottom
            anchors.margins: pageMargin
            anchors.left: parent.left
            anchors.right: parent.right
            title: "<font color=\"Gainsboro\" size=\"6\">Demo</font>"

            GridLayout
            {
                anchors.fill: parent
                anchors.margins: 20

                columns: 2

                Text
                {
                    text: "pathfilejdf"
                    color: colorText
                    font.pixelSize: fontText
                }

                LineEdit
                {
                    id: lineditPathJdf
                    z: 1
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.leftMargin: columnMargin
                    height: comboboxSchemeShws.height
                    text: configHolder.pathFileJdf()
                    attr_background_colorText: "black"
                    attr_background_color: "white"
                }

                Text
                {
                    text: "pathfilejson"
                    color: colorText
                    font.pixelSize: fontText
                }
                LineEdit
                {
                    id: lineditPathJson
                    z: 0
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.leftMargin: columnMargin
                    height: comboboxSchemeShws.height
                    text: configHolder.pathFileJson()
                    attr_background_colorText: "black"
                    attr_background_color: "white"
                }
            }
        }

        GroupBox
        {
            id: recShws
            anchors.top: recProfit.bottom
            anchors.margins: pageMargin
            anchors.left: parent.left
            anchors.right: parent.right
            title: "<font color=\"Gainsboro\" size=\"6\">Shws</font>"

            GridLayout
            {
                anchors.fill: parent
                anchors.margins: 20
                columns: 2

                Text
                {
                    text: "host"
                    color: colorText
                    font.pixelSize: fontText
                }

                LineEdit
                {
                    id: lineeditHostShws
                    z : 1
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.leftMargin: columnMargin
                    height: comboboxSchemeShws.height
                    text:
                    {
                        if (configHolder.hostShws() === "") "scissorhands.cloudapp.net"
                            else configHolder.hostShws()
                    }

                    attr_background_colorText: "black"
                    attr_background_color: "white"
                }

                Text
                {
                    text: "scheme"
                    color: colorText
                    font.pixelSize: fontText
                }
                ComboBox
                {
                    id: comboboxSchemeShws
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.leftMargin: columnMargin
                    model: ListModel {
                        id:  modelSchemeShws
                        ListElement { text: "http"; }
                        ListElement { text: "https"; }
                    }
                    currentIndex:
                    {
                        for (var i = 0; i < modelSchemeShws.count; ++i)
                        {
                            if (configHolder.schemeShws() === modelSchemeShws.get(i).text) i
                        }
                    }
                }
            }
        }

        GroupBox
        {
            id: recProfit
            anchors.top: parent.top
            anchors.topMargin: 20
            anchors.left: parent.left
            anchors.leftMargin: pageMargin
            anchors.right: parent.right
            anchors.rightMargin: pageMargin
            title: "<font color=\"Gainsboro\" size=\"6\">Profit</font>"

            GridLayout
            {
                anchors.fill: parent
                anchors.margins: 20
                columns: 2

                Text
                {
                    text: "host"
                    color: colorText
                    font.pixelSize: fontText
                }

                LineEdit
                {
                    id: lineeditHostProfit
                    z : 1
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.leftMargin: columnMargin
                    height: comboboxSchemeProfit.height
                    text:
                    {
                        if (configHolder.hostProfit() === "") "profit-qa3.printfulfillmentservices.com"
                            else configHolder.hostProfit()
                    }
                    attr_background_colorText: "black"
                    attr_background_color: "white"
                }

                Text
                {
                    text: "scheme"
                    color: colorText
                    font.pixelSize: fontText
                }
                ComboBox
                {
                    id: comboboxSchemeProfit
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.leftMargin: columnMargin

                    model: ListModel {
                        id: modelSchemeProfit
                        ListElement { text: "https"; }
                        ListElement { text: "http"; }
                    }
                    currentIndex:
                    {
                        for (var i = 0; i < modelSchemeProfit.count; ++i)
                        {
                            if (configHolder.schemeProfit() === modelSchemeProfit.get(i).text) i
                        }
                    }
                }
            }
        }
    }

    Loader
    {
        id: pageLoader2
        anchors.centerIn: parent
        anchors.fill: parent
        smooth: true
    }
}
