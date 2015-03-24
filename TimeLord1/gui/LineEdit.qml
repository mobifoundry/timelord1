import QtQuick 2.0
import QtQuick.Controls 1.0
import QtQuick.Controls.Styles 1.0
import "qrc:/"

TextField {
    id : lineedit

    property string  attr_type_keyboard: "Keyboard"
    property string  attr_background_text: ""
    property string k_on: "go%1".arg(attr_type_keyboard)
    property string k_stop: "stop%1".arg(attr_type_keyboard)

    signal findRequest(string findId)

    width: 100
    height: 100
    font.pointSize: 18
    font.family: "Times"

    function funcLetterClicked(letter) {
        var i = 0
        var str = ""
        var pos = lineedit.cursorPosition + 1
        var sel = lineedit.text.indexOf(lineedit.selectedText)
        var text_len = lineedit.text.length

        if( sel != 0 || (sel == 0 && pos == 1))
        {
            for( i = 0; i < text_len; ++i)
            {
                if ( i < sel || i >= sel + lineedit.selectedText.length)
                    str += lineedit.text.charAt(i);
            }
            lineedit.text = str
            lineedit.cursorPosition = pos - 1
            str = ""
        }
        for( i = 0; i <= lineedit.text.length; ++i)
        {
            if (lineedit.cursorPosition == i)
                str += letter
            str += lineedit.text.charAt(i)
        }
        lineedit.text = str
        lineedit.cursorPosition = pos
    }

    function funcBackspaceKeyboard() {
        var i = 0
        var str = ""
        var pos = lineedit.cursorPosition
        var sel = lineedit.text.indexOf(lineedit.selectedText)
        var text_len = lineedit.text.length
        var sel_len = lineedit.selectedText.length

        if(sel == 0)
        {
            sel = --pos;
            ++sel_len;
        }
        for( i = 0; i < text_len; ++i)
        {
            if ( i < sel || i >= sel +sel_len)
                str += lineedit.text.charAt(i);
        }
        lineedit.text = str
        lineedit.cursorPosition = pos
    }

    function funcScanner(inputString) {
        var prefix = "=::="
        var suffix = ":==:"
        if (inputString.indexOf(prefix) !== -1 && inputString.indexOf(suffix) !== -1)
        {
            var start_bc = inputString.indexOf(prefix) + prefix.length
            var stop_bc = inputString.indexOf(suffix)
            inputString = inputString.substring(start_bc, stop_bc)
        }
        lineedit.text = inputString
        findRequest(inputString)
    }

    Text{
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        font.pointSize: parent.font.pointSize
        font.family: parent.font.family
        text: lineedit.length ? "" : attr_background_text
        color:"grey"
    }

    style: TextFieldStyle {
        textColor: "white"
        padding.left: 20
        padding.right: img1.width + img1.anchors.margins + padding.left
        background: Rectangle {
            color: "black"
            radius: 5
            implicitWidth: 100
            implicitHeight: 24
            border.color: lineedit.focus ? "green" : "dimgrey"
            border.width: 3
        }
    }

    onFocusChanged: {
        lineedit.state = lineedit.focus ? lineedit.state : k_stop
    }

    onAccepted: {
        funcScanner(lineedit.text)
    }

    Connections {
        target:  buttonJob
//        onClickedJob: {
//            lineedit.state = k_stop
//        }
    }

    Image {
        id: img1
        anchors.right: parent.right
        anchors.margins: 10
        anchors.verticalCenter: parent.verticalCenter

        width: parent.height
        height: parent.height
        source: "qrc:/../images/keyboard.png"

        MouseArea{
            anchors.fill: parent
            onClicked: {
                lineedit.focus = true
                lineedit.state = ((lineedit.state == k_on) ?  k_stop : k_on)
            }
        }
    }

    KeyboardDigit {
        id: keyboarddigit
        anchors.bottom: parent.top
        anchors.right: parent.right

        visible:  false

        onApplyKeyboard: {
            lineedit.state = k_stop
            funcScanner(lineedit.text);
        }

        onLetterClicked: {
            funcLetterClicked(letter)
        }

        onBackspaceKeyboard: {
            funcBackspaceKeyboard()
        }
    }

    Keyboard {
        id: keyboard
        anchors.top: parent.bottom
        anchors.horizontalCenter: parent.horizontalCenter

        property int i: 0
        property string str_save: ""

        visible: false

        onApplyKeyboard: {
            lineedit.state = k_stop
        }

        onVisibleChanged: {
            if(visible)
                str_save = lineedit.text
        }

        onCancelKeyboard: {
            lineedit.text = str_save
            lineedit.state = k_stop
        }

        onLetterClicked: {
            funcLetterClicked(letter)
        }

        onBackspaceKeyboard: {
            funcBackspaceKeyboard()
        }
    }
    states: [
        State {
            name: "goKeyboardDigit"
            PropertyChanges {
                target: keyboarddigit; visible: true;
            }
        },
        State {
            name: "stopKeyboardDigit"
            PropertyChanges {
                target: keyboarddigit; visible: false;
            }
        },
        State {
            name: "goKeyboard"
            PropertyChanges {
                target: keyboard; visible: true
            }
        },
        State {
            name: "stopKeyboard"
            PropertyChanges {
                target: keyboard; visible: false;
            }
        }
    ]
    state: "stop"
}
