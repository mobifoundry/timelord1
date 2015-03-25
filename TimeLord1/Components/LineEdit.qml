import QtQuick 2.2
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1

TextField
{
    id : lineedit

    property string  attr_type_keyboard: "Keyboard"
    property string  attr_background_text: ""
    property string attr_background_colorText: "white"
    property string attr_background_color: "black"
    property string str_save: ""

    signal findRequest(string findId)
    font.family: "Times"

    function funcCancelKeyboard()
    {
        lineedit.text = str_save
    }

    function funcDestroyKeyboard()
    {
        for (var i = 0; i < containerKeyboard.children.length; ++i)
        {
            containerKeyboard.children[i].destroy()
        }
    }

    function funcLetterClicked(letter)
    {
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

    function funcBackspaceKeyboard()
    {
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

    function funcScanner(inputString)
    {
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

    Text
    {
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        font.pointSize: parent.font.pointSize + 2
        font.family: parent.font.family
        text: lineedit.length ? "" : attr_background_text
        color:"grey"
    }

    style: TextFieldStyle {
        textColor: attr_background_colorText
        padding.left: 10
        padding.right: img1.width + img1.anchors.margins + padding.left
        background: Rectangle {
            color: attr_background_color
            radius: 5
            implicitHeight: 28
            border.color: lineedit.focus ? "green" : "dimgrey"
            border.width: 2
        }
    }

    onFocusChanged: if (!lineedit.focus) funcDestroyKeyboard();

    onAccepted: funcScanner(lineedit.text)

    Connections
    {
        target: root
        onClickedRoot: funcDestroyKeyboard()
    }

    Item
    {
        id: containerKeyboard
        z: -1
        anchors.fill: parent
    }

    Image
    {
        id: img1
        anchors.right: parent.right
        anchors.margins: 10
        anchors.verticalCenter: parent.verticalCenter

        width: height * 1.5
        height: parent.height / 1.5
        source: "qrc:/../images/keyboard.png"

        MouseArea{
            anchors.fill: parent
            onClicked:
            {

                if (containerKeyboard.children.length)
                {
                    funcDestroyKeyboard();
                }
                else
                {
                    var cl = Qt.createComponent(attr_type_keyboard + ".qml")
                    var keyboardCreate = cl.createObject(containerKeyboard,
                                                         {
                                                             "anchors.top": containerKeyboard.bottom,
                                                             "anchors.horizontalCenter": containerKeyboard.horizontalCenter,
                                                         }
                                                         )
                    keyboardCreate.applyKeyboard.connect(keyboardCreate.destroy)
                    keyboardCreate.letterClicked.connect(funcLetterClicked)
                    keyboardCreate.backspaceKeyboard.connect(funcBackspaceKeyboard)
                    keyboardCreate.cancelKeyboard.connect(funcCancelKeyboard)
                    keyboardCreate.cancelKeyboard.connect(keyboardCreate.destroy)
                    str_save = lineedit.text
                    lineedit.focus = true
                }
            }
        }
    }
}
