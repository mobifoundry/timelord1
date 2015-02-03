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

CheckBoxStyle {
    spacing: Math.round(8 * FlatStyle.scaleFactor)

    indicator: CheckBoxDrawer {
        controlEnabled: control.enabled
        controlActiveFocus: control.activeFocus
        controlPressed: control.pressed
        controlHovered: !Settings.hasTouchScreen && control.hovered
        controlChecked: control.checked
    }

    label: Text {
        text: control.text
        font.family: FlatStyle.fontFamily
        renderType: FlatStyle.__renderType
        anchors.verticalCenter: parent.verticalCenter
        opacity: enabled ? 1.0 : FlatStyle.disabledOpacity
        color: !enabled ? FlatStyle.disabledColor :
               control.activeFocus ? FlatStyle.focusedColor : FlatStyle.defaultColor
    }
}
