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

import QtQuick 2.3

Canvas {
    implicitWidth: 32
    implicitHeight: 32

    property color color: "white"

    onColorChanged: requestPaint()

    onPaint: {
        var ctx = getContext("2d");
        ctx.reset();

        ctx.beginPath();
        ctx.moveTo(0.66321495 * width, 0.06548707 * height);
        ctx.lineTo(0.2191097 * width, 0.50959232 * height);
        ctx.lineTo(0.66628301 * width, 0.95676556 * height);
        ctx.lineTo(0.77673409 * width, 0.84631453 * height);
        ctx.lineTo(0.44001181 * width, 0.50959232 * height);
        ctx.lineTo(0.77366599 * width, 0.1759381 * height);
        ctx.fillStyle = color;
        ctx.fill();
    }
}
