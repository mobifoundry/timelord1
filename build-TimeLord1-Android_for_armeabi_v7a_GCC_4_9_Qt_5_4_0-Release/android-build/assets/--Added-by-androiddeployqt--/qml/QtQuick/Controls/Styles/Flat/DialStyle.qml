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
import QtQuick.Controls.Styles.Flat 1.0
import QtQuick.Enterprise.Controls 1.3
import QtQuick.Enterprise.Controls.Private 1.0
import QtQuick.Enterprise.Controls.Private.CppUtils 1.1
import QtQuick.Enterprise.Controls.Styles 1.3

DialStyle {
    id: dialStyle

    handleInset: handleSize * 1.5 + Math.min(control.width, control.height) * 0.15

    readonly property int handleSize: Math.max(6, Math.round(Math.min(control.width, control.height) * 0.05))

    background: Item {
        implicitWidth: Math.round(160 * FlatStyle.scaleFactor)
        implicitHeight: Math.round(160 * FlatStyle.scaleFactor)

        CircularProgressBar {
            id: progressBar
            anchors.fill: parent
            progress: control.value
            minimumValueAngle: -150
            maximumValueAngle: 150
            barWidth: handleSize / 2
            backgroundColor: FlatStyle.grooveColor

            function updateColor() {
                clearStops();
                addStop(0, control.enabled ? (control.activeFocus ? FlatStyle.focusedColor : FlatStyle.styleColor) : FlatStyle.placeholderTextColor);
                redraw();
            }

            Component.onCompleted: updateColor()

            Connections {
                target: control
                onEnabledChanged: progressBar.updateColor()
                onActiveFocusChanged: progressBar.updateColor()
            }
        }

        Rectangle {
            anchors.fill: parent
            anchors.margins: parent.width * 0.15
            radius: width / 2
            color: "white"
            border.width: control.enabled && control.activeFocus ? FlatStyle.twoPixels : FlatStyle.onePixel
            border.color: control.enabled ? (control.activeFocus ? FlatStyle.focusedColor : FlatStyle.styleColor) : FlatStyle.placeholderTextColor
        }
    }

    handle: Rectangle {
        color: control.enabled ? (control.activeFocus ? FlatStyle.focusedColor : FlatStyle.styleColor) : FlatStyle.placeholderTextColor
        width: handleSize
        height: width
        radius: height / 2
    }

    tickmark: null
}
