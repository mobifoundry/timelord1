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

    x: -width

    function paintBulb(ctx, color, isShadow) {
        ctx.scale(FlatStyle.scaleFactor, FlatStyle.scaleFactor)
        ctx.translate(16, isShadow ? 2 : 0);
        ctx.beginPath();
        ctx.moveTo(10.242,28.457);
        ctx.bezierCurveTo(7.8980000000000015,30.799,4.099000000000001,30.799,1.7560000000000002,28.457);
        ctx.bezierCurveTo(-0.5859999999999999,26.115000000000002,-0.5859999999999999,22.314,1.7560000000000002,19.973);
        ctx.bezierCurveTo(4.748,16.980999999999998,11.869,18.343999999999998,11.869,18.343999999999998);
        ctx.bezierCurveTo(11.869,18.343999999999998,13.244,25.455,10.242,28.457);
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
        ctx.fillRect(10, 0, 2, 23);
    }
}
