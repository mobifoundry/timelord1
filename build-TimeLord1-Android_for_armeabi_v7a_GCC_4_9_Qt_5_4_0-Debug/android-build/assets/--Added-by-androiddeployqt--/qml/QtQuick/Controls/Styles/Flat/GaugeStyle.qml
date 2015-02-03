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
import QtQuick.Controls.Styles.Flat 1.0
import QtQuick.Enterprise.Controls.Styles 1.3
import QtQuick.Enterprise.Controls.Private 1.0

GaugeStyle {
    id: gaugeStyle

    readonly property int __totalValueBarWidth: Math.round(22 * FlatStyle.scaleFactor + __lineSpacing + __lineWidth)
    readonly property int __actualValueBarWidth: __totalValueBarWidth - __lineSpacing - __lineWidth
    readonly property int __lineWidth: FlatStyle.onePixel
    readonly property int __lineSpacing: Math.round(3 * FlatStyle.scaleFactor)

    background: Item {
        Rectangle {
            color: control.enabled ? FlatStyle.styleColor : FlatStyle.disabledColor
            opacity: control.enabled ? 1 : 0.2
            width: __lineWidth
            height: parent.height
            x: control.tickmarkAlignment === Qt.AlignLeft || control.tickmarkAlignment === Qt.AlignTop ? parent.width - width : 0
        }
    }

    valueBar: Item {
        implicitWidth: __totalValueBarWidth

        Rectangle {
            color: control.enabled ? FlatStyle.styleColor : FlatStyle.disabledColor
            opacity: control.enabled ? 1 : 0.2
            x: control.tickmarkAlignment === Qt.AlignRight || control.tickmarkAlignment === Qt.AlignBottom ? __lineWidth + __lineSpacing : 0
            implicitWidth: __actualValueBarWidth
            height: parent.height
        }
    }

    foreground: null

    tickmark: Item {
        id: tickmarkItem
        implicitWidth: Math.round(12 * FlatStyle.scaleFactor)
        implicitHeight: FlatStyle.onePixel

        Rectangle {
            x: control.tickmarkAlignment === Qt.AlignLeft || control.tickmarkAlignment === Qt.AlignTop
               ? parent.width + __actualValueBarWidth / 2 - width / 2
               : -__actualValueBarWidth / 2 - width / 2
            // Length of the tickmark is the same as the spacing between the tickmarks and labels.
            width: parent.width
            height: parent.height
            color: gaugeStyle.valuePosition > styleData.valuePosition + height ? "#ffffff" : (control.enabled ? FlatStyle.styleColor : FlatStyle.disabledColor)
            opacity: gaugeStyle.valuePosition > styleData.valuePosition + height ? 0.5 : (control.enabled ? 1 : 0.2)
            visible: (styleData.index === 0 && gaugeStyle.valuePosition === 0) ||
                (styleData.index !== 0 && (gaugeStyle.valuePosition <= styleData.valuePosition || gaugeStyle.valuePosition > styleData.valuePosition + height))
        }
    }

    minorTickmark: Item {
        implicitWidth: Math.round(6 * FlatStyle.scaleFactor)
        implicitHeight: FlatStyle.onePixel

        Rectangle {
            x: control.tickmarkAlignment === Qt.AlignLeft || control.tickmarkAlignment === Qt.AlignTop
               ? parent.width + __actualValueBarWidth / 2 - width / 2
               : -__actualValueBarWidth / 2 - width / 2
            width: parent.width
            height: parent.height
            color: control.enabled ? FlatStyle.styleColor : FlatStyle.disabledColor
            opacity: control.enabled ? 1 : 0.2
            visible: gaugeStyle.valuePosition <= styleData.valuePosition
        }
    }

    tickmarkLabel: Item {
        implicitWidth: textLabel.implicitWidth
        implicitHeight: textLabel.implicitHeight

        Label {
            id: textLabel
            text: control.formatValue(styleData.value)
            font: control.font
            color: control.enabled ? "#333333" : FlatStyle.disabledColor
            opacity: control.enabled ? 1 : FlatStyle.disabledOpacity
            renderType: FlatStyle.__renderType
            Connections {
                target: control
                // Setting an anchor to undefined leaves it in the position it was in last.
                // We don't want that, as we want the label's y pos to be at zero when it's not anchored.
                // Using a binding here whose when property is true when control.orientation === Qt.Horizontal
                // doesn't work.
                onOrientationChanged: textLabel.y = 0
            }
            anchors.baseline: control.orientation === Qt.Vertical ? parent.verticalCenter : undefined
        }
    }
}
