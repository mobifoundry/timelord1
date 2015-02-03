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

SwitchStyle {
    readonly property int __knobHeight: Math.round(26 * FlatStyle.scaleFactor)

    groove: Item {
        implicitWidth: Math.round(46 * FlatStyle.scaleFactor)
        implicitHeight: __knobHeight
        Rectangle {
            radius: height / 2
            y: 1 * FlatStyle.scaleFactor
            implicitWidth: parent.implicitWidth
            implicitHeight: Math.round(24 * FlatStyle.scaleFactor)
            border.width: (control.activeFocus ? FlatStyle.twoPixels : FlatStyle.onePixel)
            border.color: control.activeFocus ? FlatStyle.highlightColor : control.enabled && control.checked ? FlatStyle.styleColor : FlatStyle.frameColor
            color: !control.checked ? "transparent" :
                   !control.enabled ? "#d9d9d9" :
                   control.activeFocus ? FlatStyle.highlightColor : FlatStyle.styleColor
        }
    }

    handle: Item {
        implicitWidth: __knobHeight
        implicitHeight: __knobHeight
        Rectangle {
            id: knobShadow
            x: 1 * FlatStyle.scaleFactor
            y: 1 * FlatStyle.scaleFactor
            radius: height / 2
            width: parent.width
            height: parent.height
            color: "#000000"
            opacity: 0.1
        }
        Rectangle {
            id: knob
            radius: height / 2
            width: parent.width
            height: parent.height
            border.width: (control.activeFocus ? FlatStyle.twoPixels : FlatStyle.onePixel)
            border.color: !control.enabled ? FlatStyle.frameColor :
                          control.pressed && control.activeFocus ? "#266b96" :
                          control.activeFocus ? "#2f86bb" :
                          control.checked ? "#328930" : "#999999"
            color: !control.enabled ? "#dadada" : control.pressed ? "#cccccc" : FlatStyle.backgroundColor
        }
    }
}
