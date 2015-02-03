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
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2
import QtQuick.Controls.Private 1.0
import QtQuick.Controls.Styles.Flat 1.0

ButtonStyle {
    padding { top: 0; left: 0; right: 0; bottom: 0 }

    readonly property bool __hovered: !Settings.hasTouchScreen && control.hovered

    background: Rectangle {
        property bool down: control.pressed || (control.checkable && control.checked)

        implicitWidth: Math.round(100 * FlatStyle.scaleFactor)
        implicitHeight: Math.round(26 * FlatStyle.scaleFactor)
        radius: FlatStyle.radius

        color: {
            if (control.isDefault) {
                if (control.checkable && control.checked) {
                    if (!control.enabled)
                        return Qt.rgba(0, 0, 0, 0.25);

                    if (control.pressed)
                        return control.activeFocus ? "#2e6482" : "#3c6f0e";

                    return control.activeFocus ? "#3a7ca2" : "#457f10";
                } else {
                    // Normal state.
                    if (!control.enabled)
                        return Qt.rgba(0, 0, 0, 0.15);

                    if (control.pressed)
                        return control.activeFocus ? "#3a7ca2" : "#457f10";

                    if (control.activeFocus)
                        return control.pressed ? "#3a7ca2" : "#4da6d8";

                    return FlatStyle.styleColor;
                }
            }

            // Non-default button.
            if (control.checkable && control.checked) {
                if (!control.enabled)
                    return Qt.rgba(0, 0, 0, 0.1);

                if (control.pressed)
                    return control.activeFocus ? "#3a7ca2" : "#4a8811";

                return control.activeFocus ? "#4595c2" : "#539913";
            }

            if (control.pressed)
                return control.activeFocus ? "#4595c2" : "#539913";

            if (!control.activeFocus && __hovered)
                return "#7dbb44";

            return "transparent";
        }

        border.color: {
            if (!control.isDefault) {
                if (!control.enabled)
                    return Qt.rgba(0, 0, 0, (control.checkable && control.checked ? 0.3 : 0.2));

                if (control.activeFocus && !control.pressed && !control.checked)
                    return "#4da6d8";

                if (!__hovered && !control.checked && !control.pressed)
                    return "#5caa15";
            }

            return "transparent";
        }

        border.width: control.activeFocus ? FlatStyle.twoPixels : FlatStyle.onePixel
    }

    label: Item {
        readonly property bool isDown: control.pressed || (control.checkable && control.checked)
        readonly property bool hasIcon: icon.status === Image.Ready || icon.status === Image.Loading
        readonly property bool hasMenu: !!control.menu
        readonly property bool hasText: !!control.text
        readonly property int labelSpacing: Math.round(10 * FlatStyle.scaleFactor)
        implicitWidth: icon.implicitWidth + label.implicitWidth + indicator.implicitHeight
                       + (hasIcon || hasText ? labelSpacing : 0) + (hasIcon && hasText ? labelSpacing : 0)
        implicitHeight: Math.max(Math.max(icon.implicitHeight, label.implicitHeight), indicator.height)
        baselineOffset: label.y + label.baselineOffset
        Image {
            id: icon
            visible: hasIcon
            source: control.iconSource
            // center align when only icon, otherwise left align
            anchors.left: parent.left
            anchors.leftMargin: hasMenu || hasText ? labelSpacing : parent.width / 2 - width / 2
            anchors.verticalCenter: parent.verticalCenter
        }
        Text {
            id: label
            visible: hasText
            text: control.text
            elide: Text.ElideRight
            font.family: FlatStyle.fontFamily
            renderType: FlatStyle.__renderType
            opacity: !enabled && !control.isDefault ? FlatStyle.disabledOpacity : 1.0
            color: control.isDefault ? "#ffffff" :
                   !enabled ? FlatStyle.disabledColor :
                   isDown ? "#ffffff" :
                   control.activeFocus ? FlatStyle.focusedColor :
                   __hovered ? "#ffffff" : FlatStyle.styleColor
            horizontalAlignment: hasMenu != hasIcon ? Qt.AlignLeft : Qt.AlignHCenter
            verticalAlignment: Qt.AlignVCenter
            anchors.fill: parent
            anchors.leftMargin: labelSpacing + (hasIcon ? labelSpacing + icon.width : 0)
            anchors.rightMargin: hasMenu ? indicator.width : labelSpacing
        }
        Item {
            id: indicator
            visible: hasMenu
            implicitWidth: Math.round(28 * FlatStyle.scaleFactor)
            implicitHeight: Math.round(26 * FlatStyle.scaleFactor)
            // center align when only menu, otherwise right align
            anchors.right: parent.right
            anchors.rightMargin: !hasIcon && !hasText ? parent.width / 2 - width / 2 : 0
            anchors.verticalCenter: parent.verticalCenter

            opacity: control.enabled ? 1.0 : 0.2
            property color color: !control.enabled ? "#000000" :
                                   control.activeFocus && !control.pressed ? "#4da6d8" :
                                   control.activeFocus || control.pressed || __hovered ? "#ffffff" : "#5caa15"

            Rectangle {
                x: Math.round(7 * FlatStyle.scaleFactor)
                y: Math.round(7 * FlatStyle.scaleFactor)
                width: Math.round(14 * FlatStyle.scaleFactor)
                height: FlatStyle.twoPixels
                color: indicator.color
            }
            Rectangle {
                x: Math.round(7 * FlatStyle.scaleFactor)
                y: Math.round(12 * FlatStyle.scaleFactor)
                width: Math.round(14 * FlatStyle.scaleFactor)
                height: FlatStyle.twoPixels
                color: indicator.color
            }
            Rectangle {
                x: Math.round(7 * FlatStyle.scaleFactor)
                y: Math.round(17 * FlatStyle.scaleFactor)
                width: Math.round(14 * FlatStyle.scaleFactor)
                height: FlatStyle.twoPixels
                color: indicator.color
            }
        }
    }
}
