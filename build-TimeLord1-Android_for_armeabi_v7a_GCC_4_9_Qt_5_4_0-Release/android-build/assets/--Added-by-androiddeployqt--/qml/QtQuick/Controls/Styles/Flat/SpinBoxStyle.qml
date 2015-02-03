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

SpinBoxStyle {
    padding { top: 0; left: 0; right: 0; bottom: 0 }
    renderType: FlatStyle.__renderType

    panel: Item {
        property int horizontalAlignment: Qt.AlignHCenter
        property int verticalAlignment: Qt.AlignVCenter

        property color foregroundColor: !control.enabled ? FlatStyle.placeholderTextColor : FlatStyle.defaultColor
        property color selectionColor: FlatStyle.highlightColor
        property color selectedTextColor: FlatStyle.selectedTextColor
        property var margins: QtObject {
            readonly property real top: 2 * FlatStyle.scaleFactor
            readonly property real left: decrement.width
            readonly property real right: increment.width
            readonly property real bottom: 2 * FlatStyle.scaleFactor
        }

        property rect upRect: Qt.rect(increment.x, increment.y, increment.width, increment.height)
        property rect downRect: Qt.rect(decrement.x, decrement.y, decrement.width, decrement.height)

        property font font
        font.family: FlatStyle.fontFamily

        implicitWidth: Math.round(100 * FlatStyle.scaleFactor)
        implicitHeight: Math.round(26 * FlatStyle.scaleFactor)

        Item {
            id: decrement
            clip: true
            width: Math.round(28 * FlatStyle.scaleFactor)
            height: parent.height

            Rectangle {
                width: parent.width + FlatStyle.radius
                height: parent.height
                color: !control.enabled ? "#cccccc" :
                        control.activeFocus && styleData.downPressed ? "#3e85ad" :
                        control.activeFocus ? FlatStyle.highlightColor :
                        styleData.downPressed ? "#4a8811" : FlatStyle.styleColor
                radius: FlatStyle.radius
            }

            Rectangle {
                color: FlatStyle.backgroundColor
                width: Math.round(10 * FlatStyle.scaleFactor)
                height: Math.round(2 * FlatStyle.scaleFactor)
                anchors.horizontalCenter: parent.left
                anchors.horizontalCenterOffset: Math.round(14 * FlatStyle.scaleFactor)
                anchors.verticalCenter: parent.verticalCenter
            }
        }

        Item {
            id: increment
            clip: true
            width: Math.round(28 * FlatStyle.scaleFactor)
            height: parent.height
            anchors.right: parent.right

            Rectangle {
                width: parent.width + FlatStyle.radius
                height: parent.height
                anchors.right: parent.right
                color: !control.enabled ? "#cccccc" :
                        control.activeFocus && styleData.upPressed ? "#3e85ad" :
                        control.activeFocus ? FlatStyle.highlightColor :
                        styleData.upPressed ? "#4a8811" : FlatStyle.styleColor
                radius: FlatStyle.radius
            }

            Rectangle {
                color: FlatStyle.backgroundColor
                width: Math.round(10 * FlatStyle.scaleFactor)
                height: Math.round(2 * FlatStyle.scaleFactor)
                anchors.horizontalCenter: parent.right
                anchors.horizontalCenterOffset: Math.round(-14 * FlatStyle.scaleFactor)
                anchors.verticalCenter: parent.verticalCenter
            }

            Rectangle {
                color: FlatStyle.backgroundColor
                width: Math.round(2 * FlatStyle.scaleFactor)
                height: Math.round(10 * FlatStyle.scaleFactor)
                anchors.horizontalCenter: parent.right
                anchors.horizontalCenterOffset: Math.round(-14 * FlatStyle.scaleFactor)
                anchors.verticalCenter: parent.verticalCenter
            }
        }

        Rectangle {
            id: frame
            anchors.fill: parent
            anchors.leftMargin: decrement.width
            anchors.rightMargin: increment.width
            color: !control.enabled ? "transparent" :
                    control.activeFocus ? FlatStyle.highlightColor : FlatStyle.frameColor

            Rectangle {
                id: field
                anchors.fill: parent
                anchors.topMargin: Math.round((!control.enabled ? 0 : control.activeFocus ? 2 : 1) * FlatStyle.scaleFactor)
                anchors.bottomMargin: Math.round((!control.enabled ? 0 : control.activeFocus ? 2 : 1) * FlatStyle.scaleFactor)
                color: !control.enabled ? "#000000" : FlatStyle.backgroundColor
                opacity: !control.enabled ? 0.1 : 1.0
            }
        }
    }

    __selectionHandle: null
    __cursorHandle: null
}
