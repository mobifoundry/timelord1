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

TextFieldStyle {
    font.family: FlatStyle.fontFamily

    textColor: !control.enabled ? FlatStyle.placeholderTextColor : FlatStyle.defaultColor
    placeholderTextColor: FlatStyle.placeholderTextColor
    selectionColor: "#ceeaff"
    selectedTextColor: FlatStyle.defaultColor
    renderType: FlatStyle.__renderType

    padding {
        top: 0
        left: Math.round(FlatStyle.scaleFactor * 10)
        right: Math.round(FlatStyle.scaleFactor * 10)
        bottom: 0
    }

    background: Rectangle {
        implicitWidth: Math.round(150 * FlatStyle.scaleFactor)
        implicitHeight: Math.round(26 * FlatStyle.scaleFactor)
        radius: FlatStyle.radius
        border.width: (control.activeFocus ? FlatStyle.twoPixels : enabled ? FlatStyle.onePixel : 0)
        border.color: control.activeFocus ? FlatStyle.highlightColor : "#999999"
        color: enabled ? FlatStyle.backgroundColor : FlatStyle.disabledColor
        opacity: enabled ? 1.0 : 0.15
    }

    __selectionHandle: SelectionHandleStyle { }
    __cursorHandle: CursorHandleStyle { }
}
