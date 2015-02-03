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

Canvas {
    implicitWidth: Math.round(28 * FlatStyle.scaleFactor)
    // + 2 for shadows
    implicitHeight: Math.round((32 + 2) * FlatStyle.scaleFactor)

    visible: styleData.hasSelection
    x: -Math.round(FlatStyle.scaleFactor)

    function paintBulb(ctx, color, isShadow) {
        ctx.scale(FlatStyle.scaleFactor, FlatStyle.scaleFactor)
        ctx.beginPath();
        if (isShadow)
            ctx.translate(0, 2);
        ctx.moveTo(2.757,28.457);
        ctx.bezierCurveTo(5.101,30.799,8.899000000000001,30.799,11.243,28.457);
        ctx.bezierCurveTo(13.585,26.115000000000002,13.585,22.314,11.243,19.973);
        ctx.bezierCurveTo(8.251,16.98,1.13,18.344,1.13,18.344);
        ctx.bezierCurveTo(1.13,18.344,-0.245,25.455,2.757,28.457);
        ctx.closePath();
        ctx.fillStyle = color;
        ctx.fill();
    }

    onPaint: {
        var ctx = getContext("2d");
        ctx.reset();

        ctx.save();
        paintBulb(ctx, Qt.rgba(0, 0, 0, 0.15), true);
        ctx.restore();

        paintBulb(ctx, "#0668ec", false);
        ctx.fillRect(1, 0, 2, 23);
    }
}
