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

ScrollViewStyle {
    readonly property int barWidth: 2 * Math.round(FlatStyle.scaleFactor)
    readonly property int frameWidth: control.frameVisible ? Math.max(1, Math.round(FlatStyle.scaleFactor)) : 0
    padding {
        top: frameWidth
        left: frameWidth
        right: frameWidth
        bottom: frameWidth
    }
    corner: null
    transientScrollBars: true
    frame: Rectangle {
        color: control["backgroundVisible"] ? FlatStyle.backgroundColor : "transparent"
        border.color: FlatStyle.frameColor
        border.width: frameWidth
        visible: control.frameVisible
    }
    scrollBarBackground: Item {
        implicitWidth: 2 * barWidth
        implicitHeight: 2 * barWidth
    }
    handle: Item  {
        implicitWidth: barWidth
        implicitHeight: barWidth
        Rectangle {
            color: "#999"
            radius: barWidth / 2
            anchors.fill: parent
            anchors.topMargin: styleData.horizontal ? 0 : barWidth
            anchors.leftMargin: styleData.horizontal ? barWidth : 0
            anchors.rightMargin: styleData.horizontal ? barWidth : 0
            anchors.bottomMargin: styleData.horizontal ? 0 : barWidth
        }
    }
}
