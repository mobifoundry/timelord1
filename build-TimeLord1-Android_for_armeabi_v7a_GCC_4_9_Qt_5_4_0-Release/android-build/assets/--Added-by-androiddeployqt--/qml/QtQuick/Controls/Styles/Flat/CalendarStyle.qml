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
import QtQuick.Controls.Styles 1.2
import QtQuick.Controls.Styles.Flat 1.0
import QtQuick.Controls.Private 1.0
import QtQuick.Enterprise.Controls 1.3
import QtQuick.Enterprise.Controls.Private 1.0

CalendarStyle {
    // This style doesn't support a grid.
    gridVisible: false
    // gridColor == frame color
    gridColor: control.enabled ? "#b3b3b3" : "#33000000"
    // This ensures the week number separator is hidden.
    __gridLineWidth: 0

    // Used in conjunction with the control height.
    // These values are taken from the flat style specs.
    readonly property real __headerFontRatio: 18 / 264
    readonly property real __weekNumberFontRatio: 9 / 264
    readonly property real __dayFontRatio: 13 / 264

    navigationBar: Rectangle {
        implicitHeight: Math.round(control.height * 0.2121)
        color: control.enabled ? FlatStyle.styleColor : "#b3b3b3"

        MouseArea {
            id: previousMonth
            width: parent.height
            height: width
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            onClicked: control.showPreviousMonth()

            Rectangle {
                anchors.fill: parent
                color: "#000000"
                opacity: previousMonth.pressed ? 0.25 : 0

                Behavior on opacity {
                    NumberAnimation {
                        duration: 80
                    }
                }
            }

            LeftArrowIcon {
                width: Math.round(parent.width * 0.3)
                height: Math.round(parent.width * 0.3)
                anchors.centerIn: parent
            }
        }
        Label {
            id: dateText
            text: styleData.title
            color: "white"
            elide: Text.ElideRight
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: control.height * __headerFontRatio
            font.family: FlatStyle.fontFamily
            font.weight: Font.Light
            renderType: FlatStyle.__renderType
            anchors.verticalCenter: parent.verticalCenter
            anchors.left: previousMonth.right
            anchors.leftMargin: 2
            anchors.right: nextMonth.left
            anchors.rightMargin: 2
        }
        MouseArea {
            id: nextMonth
            width: parent.height
            height: width
            anchors.verticalCenter: parent.verticalCenter
            anchors.right: parent.right
            onClicked: control.showNextMonth()

            Rectangle {
                anchors.fill: parent
                color: "#000000"
                opacity: nextMonth.pressed ? 0.25 : 0

                Behavior on opacity {
                    NumberAnimation {
                        duration: 100
                    }
                }
            }

            LeftArrowIcon {
                width: Math.round(parent.width * 0.3)
                height: Math.round(parent.width * 0.3)
                anchors.centerIn: parent
                scale: -1
            }
        }
    }

    dayDelegate: Item {
        Rectangle {
            id: rect
            // There should always be at least 1 pixel margin between circles.
            width: Utils.roundEven(Math.min(parent.width, parent.height) - 1)
            height: width
            anchors.centerIn: parent
            radius: width / 2
            color: (styleData.date !== undefined && styleData.selected
                ? (control.enabled ? FlatStyle.styleColor : FlatStyle.disabledColor)
                : "transparent")
            border.width: styleData.today ? FlatStyle.onePixel : 0
            border.color: !control.enabled ? "#330000000" : FlatStyle.styleColor
            opacity: control.enabled ? 1 : 0.15
        }

        Label {
            id: dayDelegateText
            text: styleData.date.getDate()
            anchors.fill: rect
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            fontSizeMode: Text.Fit
            font.pixelSize: control.height * __dayFontRatio
            font.family: FlatStyle.fontFamily
            font.weight: Font.Light
            renderType: FlatStyle.__renderType
            opacity: !control.enabled ? (!styleData.valid || !styleData.visibleMonth ? 0.3 : 0.6) :
                (!styleData.valid || !styleData.visibleMonth ? 0.3 : 1)
            color: !control.enabled ? FlatStyle.disabledColor
                : (styleData.selected ? "white" : "#1a1a1a")
        }
    }

    weekNumberDelegate: Item {
        implicitWidth: control.width * 0.14

        Label {
            text: styleData.weekNumber
            anchors.centerIn: parent
            anchors.verticalCenterOffset: control.height * (__dayFontRatio - __weekNumberFontRatio) / 2
            fontSizeMode: Text.Fit
            font.pixelSize: control.height * __weekNumberFontRatio
            renderType: FlatStyle.__renderType
            color: !control.enabled ? FlatStyle.disabledColor : FlatStyle.styleColor
            opacity: !control.enabled ? FlatStyle.disabledOpacity : 1
        }
    }

    dayOfWeekDelegate: Item {
        implicitHeight: control.height * 0.13

        Label {
            text: localeDayName.length == 0 || localeDayName.length > 1
                ? control.__locale.dayName(styleData.dayOfWeek, Locale.ShortFormat)[0]
                : localeDayName
            color: !control.enabled ? FlatStyle.disabledColor : FlatStyle.styleColor
            opacity: !control.enabled ? FlatStyle.disabledOpacity : 1
            font.family: FlatStyle.fontFamily
            anchors.fill: parent
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            fontSizeMode: Text.Fit
            font.pixelSize: control.height * __headerFontRatio
            renderType: FlatStyle.__renderType

            property string localeDayName: control.__locale.dayName(styleData.dayOfWeek, Locale.NarrowFormat)
        }
    }
}
