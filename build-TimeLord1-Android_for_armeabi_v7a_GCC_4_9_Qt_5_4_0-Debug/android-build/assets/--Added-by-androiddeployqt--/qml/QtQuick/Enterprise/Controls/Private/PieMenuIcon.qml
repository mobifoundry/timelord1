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
import QtQuick.Enterprise.Controls 1.3
import QtQuick.Enterprise.Controls.Private 1.0

Loader {
    id: iconLoader
    active: iconSource != ""

    property PieMenu control: null
    property QtObject styleData: null

    readonly property string iconSource: styleData && styleData.index < control.__protectedScope.visibleItems.length
        ? control.__protectedScope.visibleItems[styleData.index].iconSource
        : ""

    sourceComponent: Image {
        id: iconImage
        source: iconSource
        x: pos.x
        y: pos.y
        scale: scaleFactor

        readonly property point pos: Utils.centerAlongCircle(
            iconLoader.parent.width / 2, iconLoader.parent.height / 2, width, height,
            Utils.degToRadOffset(sectionCenterAngle(styleData.index)), control.__style.__iconOffset)

        /*
            The icons should scale with the menu at some point, so that they
            stay within the bounds of each section. We down-scale the image by
            whichever of the following amounts are larger:

            a) The amount by which the largest dimension's diagonal size exceeds
            the "selectable" radius. The selectable radius is the distance in pixels
            between lines A and B in the incredibly visually appealing image below:

                   __________
                 -      B     -
               /                \
             /        ____        \
            |        /  A \        |
            --------|      |--------

            b) The amount by which the diagonal exceeds the circumference of
            one section.
        */
        readonly property real scaleFactor: {
            var largestDimension = Math.max(iconImage.sourceSize.width, iconImage.sourceSize.height) * Math.sqrt(2);
            // TODO: add padding
            var radiusDifference = largestDimension - control.__style.__selectableRadius;
            var circumferenceDifference = largestDimension - Math.abs(control.__protectedScope.circumferenceOfSection);
            if (circumferenceDifference > 0 || radiusDifference > 0) {
                // We need to down-scale.
                if (radiusDifference > circumferenceDifference) {
                    return control.__style.__selectableRadius / largestDimension;
                } else {
                    return Math.abs(control.__protectedScope.circumferenceOfSection) / largestDimension;
                }
            }
            return 1;
        }
    }
}
