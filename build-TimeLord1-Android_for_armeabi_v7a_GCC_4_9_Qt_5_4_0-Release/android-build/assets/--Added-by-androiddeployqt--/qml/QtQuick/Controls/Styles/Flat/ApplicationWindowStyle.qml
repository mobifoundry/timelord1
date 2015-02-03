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
import QtQuick.Controls.Styles 1.3
import QtQuick.Controls.Styles.Flat 1.0

ApplicationWindowStyle {
    panel: Item {
        readonly property alias contentArea: contentArea
        readonly property alias menuBarArea: menuBarArea
        readonly property alias toolBarArea: toolBarArea
        readonly property alias statusBarArea: statusBarArea
        readonly property bool hasToolBar: !!control.toolBar && control.toolBar.Accessible.role === Accessible.ToolBar

        Rectangle {
            id: background
            visible: !styleData.hasColor
            color: FlatStyle.backgroundColor
        }

        Item {
            id: contentArea
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: statusBarArea.top
            anchors.topMargin: toolBarArea.implicitHeight
        }

        Item {
            id: toolBarArea
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            implicitHeight: childrenRect.height
            height: visibleChildren.length > 0 ? implicitHeight : 0

            Loader {
                visible: active
                active: !hasToolBar && !!control.menuBar
                anchors.left: parent.left
                anchors.right: parent.right
                sourceComponent: ToolBar {
                    __menu: proxyMenu.items.length > 1 ? proxyMenu :
                            proxyMenu.items.length === 1 ? proxyMenu.items[0] : null
                }
            }
        }

        Item {
            id: statusBarArea
            anchors.bottom: parent.bottom
            anchors.left: parent.left
            anchors.right: parent.right
            implicitHeight: childrenRect.height
            height: visibleChildren.length > 0 ? implicitHeight : 0
        }

        Item {
            id: menuBarArea
            visible: false

            Menu {
                id: proxyMenu
                items: control.menuBar ? control.menuBar.menus : []
            }

            Binding {
                target: control.toolBar
                property: "__menu"
                value: proxyMenu.items.length > 1 ? proxyMenu :
                       proxyMenu.items.length === 1 ? proxyMenu.items[0] : null
                when: hasToolBar
            }
        }
    }
}
