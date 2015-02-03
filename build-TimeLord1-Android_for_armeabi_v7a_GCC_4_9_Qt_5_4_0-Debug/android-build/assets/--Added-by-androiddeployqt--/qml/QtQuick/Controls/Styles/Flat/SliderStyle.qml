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
import QtQuick.Controls.Styles.Flat 1.0
import QtQuick.Controls.Private 1.0
import QtQuick.Enterprise.Controls 1.3
import QtQuick.Enterprise.Controls.Private 1.0

SliderStyle {
    handle: Item {
        width: Math.round(26 * FlatStyle.scaleFactor)
        height: width

        readonly property bool focusedOnly: control.activeFocus && !control.pressed

        Rectangle {
            id: handleBorder
            width: parent.width
            height: width
            radius: width / 2
            color: focusedOnly ? FlatStyle.focusedColor :
                   control.hovered && !control.pressed ? FlatStyle.styleColor : "#000000"
            opacity: (control.activeFocus || control.hovered) && !control.pressed ? 1.0 : 0.2
        }

        Rectangle {
            id: handleBody
            readonly property real borderThickness: focusedOnly ? FlatStyle.twoPixels : FlatStyle.onePixel
            x: borderThickness
            y: borderThickness
            width: parent.width - 2 * borderThickness
            height: width
            border.color: "white"
            border.width: (width - parent.width * 10 / 26) / 2
            radius: width / 2
            color: !control.enabled ? "#d9d9d9" :
                   focusedOnly ? FlatStyle.focusedColor : FlatStyle.styleColor
        }

        Rectangle {
            id: pressedDarkness
            anchors.fill: parent
            radius: width / 2
            color: "#000000"
            opacity: 0.2
            visible: control.pressed
        }
    }

    groove: Item {
        implicitWidth: Math.round(100 * FlatStyle.scaleFactor)
        height: Math.round(4 * FlatStyle.scaleFactor)
        anchors.verticalCenter: parent.verticalCenter

        Rectangle {
            id: emptyGroove
            width: parent.width
            height: parent.height
            radius: Math.round(2 * FlatStyle.scaleFactor)
            color: "#000000"
            opacity: control.enabled ? 0.2 : 0.12
        }

        Rectangle {
            id: filledGroove
            color: control.enabled ? FlatStyle.styleColor : FlatStyle.frameColor
            width: styleData.handlePosition
            height: parent.height
            radius: emptyGroove.radius
        }
    }

    // TODO: tickmarks
}
