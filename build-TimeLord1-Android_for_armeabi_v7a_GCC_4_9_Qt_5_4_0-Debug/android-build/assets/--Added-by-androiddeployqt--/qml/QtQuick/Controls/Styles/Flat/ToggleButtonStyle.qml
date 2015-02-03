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
import QtQuick.Controls 1.1
import QtQuick.Controls.Private 1.0
import QtQuick.Enterprise.Controls 1.1
import QtQuick.Enterprise.Controls.Private 1.0
import QtQuick.Enterprise.Controls.Styles 1.3
import QtQuick.Controls.Styles.Flat 1.0

ToggleButtonStyle {
    label: Label {
        text: control.text
        color: FlatStyle.placeholderTextColor
        font.family: FlatStyle.fontFamily
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        renderType: FlatStyle.__renderType
    }

    background: Item {
        implicitWidth: Math.round(100 * FlatStyle.scaleFactor)
        implicitHeight: Math.round(52 * FlatStyle.scaleFactor)

        readonly property real outerLightLineWidth: Math.max(4, Math.round(innerRect.radius * 0.5))
        readonly property real thinDarkLineWidth: Math.max(1, FlatStyle.onePixel)
        readonly property color indicatorColor: control.enabled ? (control.checked ? "#5caa14" : "#dd0000") : "#cccccc"
        readonly property bool hovered: control.hovered && (!Settings.hasTouchScreen && !Settings.isMobile)

        Rectangle {
            id: innerRect
            color: control.enabled ? (control.pressed ? "#cccccc" : "white") : Qt.rgba(0, 0, 0, 0.07)
            border.color: control.enabled ? (hovered ? indicatorColor : FlatStyle.placeholderTextColor) : "#d8d8d8"
            border.width: !control.activeFocus ? thinDarkLineWidth : 0
            radius: Math.round(3 * FlatStyle.scaleFactor)
            anchors.fill: parent

            Item {
                id: clipItem
                x: control.checked ? width : 0
                width: indicatorRect.width / 2
                height: indicatorRect.height / 2
                clip: true

                Rectangle {
                    id: indicatorRect
                    x: control.checked ? -parent.width : 0
                    color: indicatorColor
                    radius: innerRect.radius
                    width: innerRect.width
                    height: Math.round(8 * FlatStyle.scaleFactor) * 2
                }
            }
        }

        Rectangle {
            anchors.fill: innerRect
            color: "transparent"
            radius: innerRect.radius
            border.color: "#4da6d7"
            border.width: 2 * FlatStyle.scaleFactor
            visible: control.activeFocus
        }
    }
}
