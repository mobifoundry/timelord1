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

ScrollViewStyle {
    readonly property TextArea control: __control

    property font font
    readonly property color textColor: !control.enabled ? FlatStyle.placeholderTextColor : FlatStyle.defaultColor
    readonly property color selectionColor: "#ceeaff"
    readonly property color selectedTextColor: FlatStyle.defaultColor
    readonly property color backgroundColor: "transparent"
    readonly property int renderType: FlatStyle.__renderType
    readonly property real textMargin: Math.round(10 * FlatStyle.scaleFactor)

    font.family: FlatStyle.fontFamily

    frame: Rectangle {
        anchors.fill: parent
        implicitWidth: Math.round(150 * FlatStyle.scaleFactor)
        implicitHeight: Math.round(170 * FlatStyle.scaleFactor)
        radius: control.frameVisible ? FlatStyle.radius : 0
        border.width: (control.activeFocus ? FlatStyle.twoPixels : enabled ? FlatStyle.onePixel : 0)
        border.color: !control.frameVisible ? "transparent" : control.activeFocus ? FlatStyle.highlightColor : "#999999"
        color: !control.backgroundVisible ? "transparent" : enabled ? FlatStyle.backgroundColor : FlatStyle.disabledColor
        opacity: enabled ? 1.0 : 0.15
    }

    property Component __selectionHandle: SelectionHandleStyle { }
    property Component __cursorHandle: CursorHandleStyle { }
}
