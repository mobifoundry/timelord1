/****************************************************************************
**
** Copyright (C) 2014 Digia Plc
** All rights reserved.
** For any questions to Digia, please use contact form at http://qt.digia.com
**
** This file is part of the QtQuick Enterprise Controls Add-on.
**
** $QT_BEGIN_LICENSE$
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.
**
** If you have questions regarding the use of this file, please use
** contact form at http://qt.digia.com
** $QT_END_LICENSE$
**
****************************************************************************/
import QtQuick 2.2
import QtQuick.Controls.Styles 1.2 as Base
import QtQuick.Controls.Styles.Flat 1.0
import QtQuick.Enterprise.Controls.Private 1.0

Base.ComboBoxStyle {
    id: style

    padding {
        top: 0
        left: Math.round(FlatStyle.scaleFactor * (control.editable ? 10 : 6))
        right: 0
        bottom: 0
    }

    font.family: FlatStyle.fontFamily
    textColor: !control.enabled ? FlatStyle.placeholderTextColor :
                control.editable ? FlatStyle.defaultColor :
                control.pressed ? "#ffffff" :
                control.activeFocus ? FlatStyle.focusedColor : FlatStyle.styleColor
    selectionColor: "#ceeaff"
    selectedTextColor: FlatStyle.defaultColor

    dropDownButtonWidth: Math.round(28 * FlatStyle.scaleFactor)

    background: Item {
        id: background
        anchors.fill: parent
        implicitWidth: Math.round(100 * FlatStyle.scaleFactor)
        implicitHeight: Math.round(26 * FlatStyle.scaleFactor)

        Rectangle {
            anchors.fill: parent
            radius: FlatStyle.radius

            visible: !control.editable
            opacity: control.enabled ? 1.0 : control.editable ? 0.1 : 0.2

            color: control.editable && !control.enabled ? "#000000" :
                   control.editable ? "white" :
                   control.activeFocus && control.pressed ? "#4595c2" :
                   control.pressed ? "#539913" : "transparent"

            border.width: control.activeFocus ? FlatStyle.twoPixels : FlatStyle.onePixel
            border.color: !control.enabled ? "#000000" :
                           control.activeFocus && control.pressed ? "#4595c2" :
                           control.activeFocus ? FlatStyle.highlightColor :
                           control.pressed ? "#539913" : FlatStyle.styleColor
        }

        Item {
            clip: true
            visible: control.editable
            width: style.dropDownButtonWidth
            anchors.top: parent.top
            anchors.right: parent.right
            anchors.bottom: parent.bottom

            Rectangle {
                width: background.width
                anchors.top: parent.top
                anchors.right: parent.right
                anchors.bottom: parent.bottom
                radius: FlatStyle.radius
                color: !control.enabled ? "#cccccc" :
                        control.activeFocus && control.pressed ? "#4595c2" :
                        control.activeFocus ? "#4da6d8" :
                        control.pressed ? "#457f10" : "#5caa15"
            }
        }

        LeftArrowIcon {
            width: Math.round(14 * FlatStyle.scaleFactor)
            height: Math.round(14 * FlatStyle.scaleFactor)
            anchors.right: parent.right
            anchors.rightMargin: width / 2
            anchors.verticalCenter: parent.verticalCenter
            rotation: control.pressed ? 90 : -90
            color: control.editable || control.pressed ? "white" : control.activeFocus ? "#4da6d8" : control.enabled ? "#5caa15" : "#000000"
            opacity: control.enabled || control.editable ? 1.0 : 0.2
        }
    }

    __editor: Item {
        clip: true
        anchors.fill: parent
        anchors.bottomMargin: anchors.margins + 1 // ### FIXME: compensate the -1 margin in ComboBoxStyle:
        Rectangle {
            anchors.fill: parent
            anchors.rightMargin: -Math.round(3 * FlatStyle.scaleFactor)

            radius: FlatStyle.radius
            color: !control.enabled ? "#000000" : "#ffffff"
            opacity: control.enabled ? 1.0 : 0.1

            border.width: control.activeFocus ? FlatStyle.twoPixels : FlatStyle.onePixel
            border.color: !control.enabled ? "#000000" :
                           control.activeFocus ? FlatStyle.highlightColor :
                           control.pressed ? "#539913" : FlatStyle.styleColor
        }
    }

    __dropDownStyle: MenuStyle {
        font: style.font
        __maxPopupHeight: 600
        __menuItemType: "comboboxitem"
        __scrollerStyle: ScrollViewStyle { }

        itemDelegate.background: Item {
            Rectangle {
                anchors.fill: parent
                color: !!styleData.pressed || styleData.selected ? FlatStyle.disabledColor : "transparent"
                opacity: !!styleData.pressed || styleData.selected ? 0.15 : 1.0
            }
            Rectangle {
                color: "#999999"
                width: parent.width
                height: FlatStyle.onePixel
                anchors.bottom: parent.bottom
                visible: styleData.index < control.__menu.items.length - 1 // TODO
            }
        }
    }

    __selectionHandle: SelectionHandleStyle { }
    __cursorHandle: CursorHandleStyle { }
}
