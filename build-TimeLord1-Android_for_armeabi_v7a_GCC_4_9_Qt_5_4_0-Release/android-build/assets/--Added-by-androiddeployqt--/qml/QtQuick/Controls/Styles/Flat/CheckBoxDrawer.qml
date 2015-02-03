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

import QtQuick 2.3
import QtQuick.Controls 1.2
import QtQuick.Controls.Private 1.0
import QtQuick.Controls.Styles.Flat 1.0

// Internal, for use with CheckBoxStyle and GroupBoxStyle
Item {
    implicitWidth: Math.round(26 * FlatStyle.scaleFactor)
    implicitHeight: implicitWidth

    property bool controlEnabled: false
    property bool controlActiveFocus: false
    property bool controlPressed: false
    property bool controlHovered: false
    property bool controlChecked: false
    property alias backgroundVisible: background.visible

    onControlActiveFocusChanged: checkCanvas.requestPaint()
    onControlEnabledChanged: checkCanvas.requestPaint()
    onControlPressedChanged: checkCanvas.requestPaint()

    Rectangle {
        id: background
        anchors.centerIn: parent
        width: Math.round(20 * FlatStyle.scaleFactor)
        height: width
        radius: FlatStyle.radius
        color: controlEnabled ? (controlPressed ? "#cccccc" : FlatStyle.backgroundColor) : "#d9d9d9"
        border.color: !controlEnabled ? "#d9d9d9" :
            (controlPressed ? "#a3a3a3" :
            (controlActiveFocus ? FlatStyle.focusedColor :
            (controlHovered ? FlatStyle.styleColor : "#cccccc")))
        border.width: controlActiveFocus &&
            !controlPressed ? FlatStyle.twoPixels : FlatStyle.onePixel
    }

    Canvas {
        id: checkCanvas
        anchors.centerIn: parent
        width: Math.round(20 * FlatStyle.scaleFactor)
        height: width
        visible: controlChecked

        onPaint: {
            var ctx = getContext("2d");
            ctx.reset();

            ctx.beginPath();
            ctx.moveTo(0.417 * width, 0.783 * height);
            ctx.lineTo(0.152 * width, 0.519 * height);
            ctx.lineTo(0.248 * width, 0.423 * height);
            ctx.lineTo(0.417 * width, 0.593 * height);
            ctx.lineTo(0.75 * width, 0.26 * height);
            ctx.lineTo(0.846 * width, 0.355 * height);
            ctx.lineTo();
            ctx.closePath();
            ctx.fillStyle = !controlEnabled ? "#b3b3b3" :
                (controlPressed ? "#4a8811" :
                (controlActiveFocus ? FlatStyle.focusedColor : FlatStyle.styleColor));
            ctx.fill();
        }
    }

}
