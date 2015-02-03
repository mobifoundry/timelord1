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

ToolBarStyle {
    padding {
        top: 0
        left: Math.round(FlatStyle.scaleFactor * 10)
        right: Math.round(FlatStyle.scaleFactor * 10)
        bottom: 0
    }

    menuButton: Item {
        implicitWidth: Math.round(FlatStyle.scaleFactor * 26)
        implicitHeight: Math.round(FlatStyle.scaleFactor * 26)

        ToolButtonBackground {
            anchors.fill: parent
            buttonEnabled: control.enabled
            buttonHasActiveFocus: control.activeFocus
            buttonPressed: styleData.pressed
            buttonChecked: false
            buttonHovered: !Settings.hasTouchScreen && styleData.hovered
        }

        ToolButtonIndicator {
            buttonEnabled: control.enabled
            buttonHasActiveFocus: styleData.activeFocus
            buttonPressedOrChecked: styleData.pressed
            anchors.centerIn: parent
        }
    }

    background: Rectangle {
        implicitHeight: Math.max(1, Math.round(FlatStyle.scaleFactor * 40))
        color: "#eeeeee"
    }
}
