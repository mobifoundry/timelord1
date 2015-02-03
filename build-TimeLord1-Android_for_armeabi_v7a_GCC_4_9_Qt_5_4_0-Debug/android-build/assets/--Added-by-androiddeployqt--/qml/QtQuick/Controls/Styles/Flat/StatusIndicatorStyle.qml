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
import QtQuick.Controls 1.2
import QtQuick.Controls.Private 1.0
import QtQuick.Controls.Styles.Flat 1.0
import QtQuick.Enterprise.Controls.Styles 1.3
import QtQuick.Enterprise.Controls.Private 1.0

StatusIndicatorStyle {
    color: FlatStyle.focusedColor

    indicator: Item {
        implicitWidth: Math.max(12, Utils.roundEven(12 * FlatStyle.scaleFactor))
        implicitHeight: Utils.roundEven(implicitWidth / 2)

        Rectangle {
            // Math.max because the control could be manually resized to be too small.
            width: Math.max(12, Utils.roundEven(parent.width))
            height: Utils.roundEven(width / 2)
            radius: Math.max(2, height * 0.2)
            anchors.centerIn: parent
            color: !control.enabled || !control.active ? FlatStyle.disabledColor : control.color
            opacity: control.enabled ? (control.active ? 1 : 0.3) : (control.active ? FlatStyle.disabledOpacity : 0.15)
        }
    }
}
