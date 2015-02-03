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

TabViewStyle {
    readonly property int frameWidth: Math.round(FlatStyle.scaleFactor)

    tabOverlap: -frameWidth
    frameOverlap: frameWidth

    frame: Rectangle {
        visible: control.frameVisible
        color: FlatStyle.backgroundColor
        border.color: "#ccc"
    }

    tab: Item {
        readonly property int totalWidth: styleData.availableWidth + tabOverlap * (control.count - 1)
        readonly property int tabWidth: Math.max(1, totalWidth / Math.max(1, control.count))
        readonly property int remainder: (styleData.index == control.count - 1 && tabWidth > 0) ? totalWidth % tabWidth : 0

        implicitWidth: tabWidth + remainder
        implicitHeight: Math.round(40 * FlatStyle.scaleFactor)

        Rectangle {
            anchors.fill: parent
            visible: styleData.pressed || !styleData.selected || styleData.activeFocus
            opacity: styleData.enabled ? 1.0 : FlatStyle.disabledOpacity
            color: styleData.activeFocus ? (styleData.pressed ? "#3a7ca2" : FlatStyle.focusedColor) :
                    styleData.pressed ? "#457f10" :
                    styleData.selected ? FlatStyle.backgroundColor :
                   !styleData.enabled ? FlatStyle.disabledColor : FlatStyle.styleColor
        }

        Text {
            text: styleData.title
            anchors.fill: parent
            anchors.leftMargin: Math.round(5 * FlatStyle.scaleFactor)
            anchors.rightMargin: anchors.leftMargin
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.family: FlatStyle.fontFamily
            renderType: FlatStyle.__renderType
            elide: Text.ElideRight
            opacity: !styleData.enabled && styleData.selected ? FlatStyle.disabledOpacity : 1.0
            color: !styleData.enabled && styleData.selected ? FlatStyle.disabledColor :
                    styleData.selected && styleData.enabled && !styleData.activeFocus && !styleData.pressed ? FlatStyle.styleColor : FlatStyle.selectedTextColor
        }
    }

    tabBar: Rectangle {
        color: FlatStyle.backgroundColor
        border.color: control.frameVisible ? "#ccc" : "transparent"
        anchors.fill: parent
        Rectangle {
            height: frameWidth
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.margins: frameWidth
            y: control.tabPosition == Qt.TopEdge ? parent.height - height : 0
            color: FlatStyle.backgroundColor
            visible: control.frameVisible
        }
    }
}
