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
import QtQuick.Controls.Private 1.0
import QtQuick.Controls.Styles.Flat 1.0

GroupBoxStyle {
    id: root

    readonly property int spacing: Math.round(8 * FlatStyle.scaleFactor)

    padding {
        left: spacing
        right: spacing
        bottom: spacing
    }

    textColor: !control.enabled ? FlatStyle.disabledColor : check.activeFocus ? FlatStyle.focusedColor : FlatStyle.defaultColor

    panel: Item {
        anchors.fill: parent

        Rectangle {
            id: background
            radius: FlatStyle.radius
            border.width: control.flat ? 0 : FlatStyle.onePixel
            border.color: "#cccccc"
            color: control.flat ? "#f2f2f2" : "transparent"
            anchors.fill: parent
            anchors.topMargin: Math.max(indicator.height, label.height) + root.spacing / 2
        }

        // TODO:
        Binding {
            target: root
            property: "padding.top"
            value: background.anchors.topMargin + root.spacing
        }

        CheckBoxDrawer {
            id: indicator
            visible: control.checkable
            controlEnabled: control.enabled
            controlActiveFocus: check.activeFocus
            controlPressed: check.pressed
            controlChecked: control.checked
            anchors.left: parent.left
            // compensate padding around check indicator
            anchors.leftMargin: Math.round(-3 * FlatStyle.scaleFactor)
        }

        Text {
            id: label
            anchors.left: control.checkable ? indicator.right : parent.left
            anchors.right: parent.right
            anchors.verticalCenter: indicator.verticalCenter
            anchors.leftMargin: control.checkable ? root.spacing / 2 : 0
            text: control.title
            color: root.textColor
            renderType: FlatStyle.__renderType
            elide: Text.ElideRight
            font.family: FlatStyle.fontFamily
            font.pixelSize: 16 * FlatStyle.scaleFactor
        }
    }
}
