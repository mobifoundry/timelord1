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
import QtQuick.Controls.Styles.Flat 1.0
import QtQuick.Enterprise.Controls.Private 1.0
import QtQuick.Enterprise.Controls.Private.CppUtils 1.1
import QtQuick.Enterprise.Controls.Styles 1.3

CircularGaugeStyle {
    id: circularGaugeStyle

    tickmarkInset: __thickArcTickmarklessMargin + __thickArcLineWidth / 2 - __tickmarkLength / 2
    minorTickmarkInset: __thickArcTickmarklessMargin + __thickArcLineWidth / 2 - (__tickmarkLength / 2) / 2
    labelInset: Math.max(textMetrics.width, textMetrics.height) / 2

    // A stroked arc starts losing its shape when it is very thick, so prevent that from happening.
    readonly property real __thickArcLineWidth: Math.min(22 * FlatStyle.scaleFactor, Math.round(outerRadius * 0.2))
    readonly property real __thickArcTickmarklessMargin: labelInset * 2
    readonly property real __tickmarkLength: __thickArcLineWidth * 0.5
    readonly property real __tickmarkWidth: FlatStyle.onePixel
    readonly property real __fontSize: Math.max(6, __protectedScope.toPixels(0.12))
    // TODO: add this to Utils or something; it's not specific to this control
    readonly property real __antialiasingAdjustment: FlatStyle.onePixel

    Text {
        id: textMetrics
        font.pixelSize: __fontSize
        text: control.maximumValue.toFixed(0)
        visible: false
    }

    background: Item {
        implicitWidth: Math.round(160 * FlatStyle.scaleFactor)
        implicitHeight: Math.round(160 * FlatStyle.scaleFactor)

        readonly property real thinArcLineWidth: FlatStyle.onePixel
        readonly property bool tickmarklessVariant: false
        readonly property real arcDistance: thinArcLineWidth * 3

        Connections {
            target: control
            onValueChanged: thickArc.requestPaint()
            onMinimumValueChanged: thickArc.requestPaint()
            onMaximumValueChanged: thickArc.requestPaint()
            onEnabledChanged: {
                thickArc.requestPaint();
                thinArc.requestPaint();
            }
        }

        // TODO: test performance of this on the Pi
        Canvas {
            id: thickArc
            anchors.fill: parent
            anchors.margins: Math.floor(tickmarklessVariant ? arcDistance : __thickArcTickmarklessMargin)

            onPaint: {
                var ctx = getContext("2d");
                ctx.reset();

                ctx.lineWidth = __thickArcLineWidth;
                var radius = Math.floor(width / 2 - ctx.lineWidth / 2 - __antialiasingAdjustment);
                if (radius < 0)
                    return;

                ctx.beginPath();
                ctx.globalAlpha = control.enabled ? 1 : 0.2;
                ctx.strokeStyle = control.enabled ? FlatStyle.styleColor : FlatStyle.disabledColor;
                var startAngle = Utils.degToRad(minimumValueAngle - 90);
                var endAngle = Utils.degToRad(needleRotation - 90);
                ctx.arc(Math.floor(width / 2), Math.floor(height / 2), radius, startAngle, endAngle, false);
                ctx.stroke();
            }
        }

        Canvas {
            id: thinArc
            anchors.fill: parent
            anchors.margins: Math.floor(tickmarklessVariant ? 0 : thickArc.anchors.margins + __thickArcLineWidth + arcDistance)

            onPaint: {
                var ctx = getContext("2d");
                ctx.reset();

                ctx.lineWidth = thinArcLineWidth;
                var radius = width / 2 - ctx.lineWidth / 2 - __antialiasingAdjustment;
                if (radius < 0)
                    return;

                ctx.beginPath();
                ctx.globalAlpha = control.enabled ? 1 : 0.2;
                ctx.strokeStyle = control.enabled ? FlatStyle.styleColor : FlatStyle.disabledColor;
                var startAngle = Utils.degToRad(minimumValueAngle - 90);
                var endAngle = Utils.degToRad(maximumValueAngle - 90);
                ctx.arc(Math.floor(width / 2), Math.floor(height / 2), radius, startAngle, endAngle, false);
                ctx.stroke();
            }
        }
    }

    needle: null
    foreground: null

    tickmark: Rectangle {
        implicitWidth: __tickmarkWidth
        implicitHeight: __tickmarkLength
        antialiasing: true
        color: control.value < styleData.value || isEdgeTickmark ? (control.enabled ? FlatStyle.styleColor : FlatStyle.disabledColor) : "#ffffff"
        opacity: control.value < styleData.value || isEdgeTickmark ? (control.enabled ? 1 : 0.2) : 0.5
        visible: (!isEdgeTickmark) || (control.value < styleData.value)
            || (styleData.value === control.minimumValue && control.value === control.minimumValue)

        readonly property bool isEdgeTickmark: styleData.value === control.minimumValue || styleData.value === control.maximumValue
    }

    minorTickmark: Rectangle {
        implicitWidth: __tickmarkWidth
        implicitHeight: __tickmarkLength / 2
        antialiasing: true
        color: control.enabled ? FlatStyle.styleColor : FlatStyle.disabledColor
        visible: control.value < styleData.value
        opacity: control.enabled ? 1 : 0.2
    }

    tickmarkLabel: Text {
        font.pixelSize: __fontSize
        text: styleData.value
        color: control.enabled ? "#333333" : FlatStyle.disabledColor
        opacity: control.enabled ? 1 : FlatStyle.disabledOpacity
        antialiasing: true
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
    }
}
