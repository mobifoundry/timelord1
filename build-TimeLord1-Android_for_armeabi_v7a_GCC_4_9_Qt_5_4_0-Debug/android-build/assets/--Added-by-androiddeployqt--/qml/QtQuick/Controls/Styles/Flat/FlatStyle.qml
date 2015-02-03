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
pragma Singleton

import QtQuick 2.2
import QtQuick.Controls 1.2
import QtQuick.Controls.Private 1.0

QtObject {
    readonly property string fontFamily: __openSansRegularLoader.name

    readonly property color backgroundColor: "#ffffff"
    readonly property color defaultColor: "#333333"
    readonly property color styleColor: "#5caa15"
    readonly property color focusedColor: "#1288cb"
    readonly property color disabledColor: "#000000"
    readonly property color highlightColor: "#4da6d8"
    readonly property color placeholderTextColor: "#999999"
    readonly property color selectedTextColor: "#ffffff"
    readonly property color errorTextColor: "#dd0000"
    readonly property color grooveColor: "#14000000"
    readonly property color frameColor: "#b3b3b3"
    readonly property real disabledOpacity: 0.3
    readonly property real defaultFontSize: 13

    // 16 is the implicitHeight of text on a PC monitor. This should scale well
    // to other devices. For example, if the implicitHeight is 64 on a touch
    // device, the scale factor will be x4.
    readonly property real scaleFactor: Math.max(1, TextSingleton.implicitHeight / 16)

    readonly property real onePixel: Math.max(1, Math.round(scaleFactor * 1))
    readonly property real twoPixels: Math.max(2, Math.round(scaleFactor * 2))
    readonly property int radius: Math.round(scaleFactor * 3)

    property FontLoader __openSansDemiBoldLoader: FontLoader {
        source: "fonts/OpenSans-Semibold.ttf"
    }

    property FontLoader __openSansRegularLoader: FontLoader {
        source: "fonts/OpenSans-Regular.ttf"
    }

    property FontLoader __openSansLightLoader: FontLoader {
        source: "fonts/OpenSans-Light.ttf"
    }

    readonly property int __renderType: Text.QtRendering
}
