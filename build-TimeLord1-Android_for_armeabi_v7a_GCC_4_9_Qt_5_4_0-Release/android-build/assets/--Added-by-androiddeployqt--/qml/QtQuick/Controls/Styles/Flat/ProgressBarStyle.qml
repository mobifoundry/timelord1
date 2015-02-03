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
import QtQuick.Enterprise.Controls 1.3
import QtQuick.Enterprise.Controls.Private.CppUtils 1.1

ProgressBarStyle {
    background: Item {
        implicitWidth: Math.round(100 * FlatStyle.scaleFactor)
        implicitHeight: Math.round(16 * FlatStyle.scaleFactor)

        FlatProgressBar {
            enabled: control.enabled
            width: Math.round(parent.width)
            height: Math.round(parent.height)
            indeterminate: control.indeterminate
            progress: (control.value - control.minimumValue) / (control.maximumValue - control.minimumValue)
        }
    }

    progress: null
}
