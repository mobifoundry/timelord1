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
Rectangle {
    id: background

    property bool buttonEnabled: false
    property bool buttonHasActiveFocus: false
    property bool buttonHovered: false
    property bool buttonChecked: false
    property bool buttonPressed: false

    color: {
        if (buttonChecked) {
            if (!buttonEnabled)
                return "transparent";
            if (buttonHasActiveFocus)
                return buttonPressed ? "#3e85ad" : "#4595c2";
            if (buttonPressed)
                return Qt.rgba(0, 0, 0, 0.1);
            return "transparent";
        }

        if (!buttonEnabled)
            return "transparent";
        if (buttonHasActiveFocus)
            return buttonPressed ? "#4595c2" : "transparent";
        if (buttonPressed)
            return Qt.rgba(0, 0, 0, 0.1);
        return "transparent";
    }
    border.color: {
        if (buttonChecked) {
            if (!buttonEnabled)
                return Qt.rgba(0, 0, 0, 0.1);
            if (buttonHasActiveFocus)
                return "transparent";
            if (buttonPressed)
                return Qt.rgba(0, 0, 0, 0.2);
            if (buttonHovered)
                return Qt.rgba(0, 0, 0, 0.3);
            return Qt.rgba(0, 0, 0, 0.2);
        }

        if (!buttonEnabled)
            return "transparent";
        if (buttonHasActiveFocus && !buttonPressed)
            return "#4da6d8";
        if (buttonHovered && !buttonPressed)
            return Qt.rgba(0, 0, 0, 0.2);
        return "transparent";
    }
    border.width: buttonHasActiveFocus ? FlatStyle.twoPixels : FlatStyle.onePixel
    radius: FlatStyle.radius
}
