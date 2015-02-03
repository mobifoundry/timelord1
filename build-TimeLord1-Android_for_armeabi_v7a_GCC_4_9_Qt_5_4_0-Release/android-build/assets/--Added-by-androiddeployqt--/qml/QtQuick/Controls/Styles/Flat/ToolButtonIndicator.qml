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
import QtQuick.Controls.Private 1.0
import QtQuick.Controls.Styles.Flat 1.0

// Internal, for use with ToolButtonStyle and ToolBarStyle
Item {
    id: toolButtonIndicator
    implicitWidth: Math.round(26 * FlatStyle.scaleFactor)
    implicitHeight: Math.round(26 * FlatStyle.scaleFactor)

    property bool buttonEnabled: false
    property bool buttonHasActiveFocus: false
    property bool buttonPressedOrChecked: false

    Column {
        anchors.centerIn: parent
        spacing: Math.round(2 * FlatStyle.scaleFactor)

        Repeater {
            model: toolButtonIndicator.visible ? 3 : 0

            Rectangle {
                width: Math.round(4 * FlatStyle.scaleFactor)
                height: width
                radius: width / 2
                color: !buttonEnabled ? FlatStyle.disabledColor : buttonPressedOrChecked && buttonHasActiveFocus
                    ? FlatStyle.selectedTextColor : buttonHasActiveFocus
                    ? FlatStyle.focusedColor : FlatStyle.defaultColor
                opacity: !buttonEnabled ? FlatStyle.disabledOpacity : 1
            }
        }
    }
}
