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

RadioButtonStyle {
    spacing: Math.round(8 * FlatStyle.scaleFactor)

    indicator: Item {
        implicitWidth: Math.round(26 * FlatStyle.scaleFactor)
        implicitHeight: implicitWidth

        Rectangle {
            id: outer
            anchors.centerIn: parent
            width: Math.round(20 * FlatStyle.scaleFactor)
            height: width
            radius: width / 2
            color: control.enabled ? (control.pressed ? "#cccccc" : FlatStyle.backgroundColor) : "#d9d9d9"
            border.color: !control.enabled ? "#d9d9d9" :
                (control.pressed ? "#a3a3a3" :
                (control.activeFocus ? FlatStyle.focusedColor :
                (!Settings.hasTouchScreen && control.hovered ? FlatStyle.styleColor : "#cccccc")))
            border.width: control.activeFocus && !control.pressed ? FlatStyle.twoPixels : FlatStyle.onePixel
        }

        Rectangle {
            id: inner
            anchors.centerIn: parent
            implicitWidth: Math.round(FlatStyle.scaleFactor * 8)
            width: implicitWidth + (outer.width % 2 + implicitWidth % 2) % 2
            height: width
            radius: width / 2
            visible: control.checked
            color: !control.enabled ? FlatStyle.frameColor :
                (control.activeFocus ? FlatStyle.focusedColor :
                (control.pressed ? "#4a8811" : FlatStyle.styleColor))
        }
    }

    label: Text {
        text: control.text
        font.family: FlatStyle.fontFamily
        renderType: FlatStyle.__renderType
        anchors.verticalCenter: parent.verticalCenter
        opacity: enabled ? 1.0 : FlatStyle.disabledOpacity
        color: !enabled ? FlatStyle.disabledColor :
               control.activeFocus ? FlatStyle.focusedColor : FlatStyle.defaultColor
    }
}
