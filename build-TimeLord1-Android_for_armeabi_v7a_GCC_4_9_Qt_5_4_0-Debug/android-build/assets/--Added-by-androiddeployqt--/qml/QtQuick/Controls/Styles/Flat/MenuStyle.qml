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
import QtQuick.Controls.Styles 1.2
import QtQuick.Controls.Styles.Flat 1.0

MenuStyle {
    id: style
    font.family: FlatStyle.fontFamily
    __leftLabelMargin: Math.round(30 * FlatStyle.scaleFactor)

    frame: Rectangle {
        border.color: "#999999"
        border.width: FlatStyle.onePixel
    }

    itemDelegate.background: Rectangle {
        color: !!styleData.pressed || styleData.selected ? FlatStyle.disabledColor : "transparent"
        opacity: !!styleData.pressed || styleData.selected ? 0.15 : 1.0
    }

    itemDelegate.label: Text {
        text: formatMnemonic(styleData.text, styleData.underlineMnemonic)
        renderType: FlatStyle.__renderType
        color: FlatStyle.defaultColor
        font.family: FlatStyle.fontFamily
        font.pixelSize: FlatStyle.defaultFontSize
        verticalAlignment: Text.AlignVCenter
        height: Math.round(26 * FlatStyle.scaleFactor)
    }

    itemDelegate.shortcut: Text {
        text: styleData.shortcut
        renderType: FlatStyle.__renderType
        color: FlatStyle.defaultColor
        font.family: FlatStyle.fontFamily
        font.pixelSize: FlatStyle.defaultFontSize
    }

    itemDelegate.checkmarkIndicator: CheckBoxDrawer {
        visible: styleData.checked
        controlEnabled: styleData.enabled
        controlChecked: styleData.checked
        backgroundVisible: false
        x: -4 // ### FIXME: compensate hardcoded "x: 4" in MenuStyle
        y: FlatStyle.onePixel
    }

    itemDelegate.submenuIndicator: LeftArrowIcon {
        scale: -1
        color: "#000000"
        width: Math.round(10 * FlatStyle.scaleFactor)
        height: Math.round(10 * FlatStyle.scaleFactor)
        baselineOffset: Math.round(7 * FlatStyle.scaleFactor)
    }

    separator: Rectangle {
        color: "#cccccc"
        width: parent.width
        implicitHeight: FlatStyle.onePixel
    }
}
