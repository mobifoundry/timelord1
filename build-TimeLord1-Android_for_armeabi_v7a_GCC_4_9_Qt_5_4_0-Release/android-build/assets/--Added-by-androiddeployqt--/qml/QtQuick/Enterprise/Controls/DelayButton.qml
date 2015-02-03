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
import QtQuick.Controls 1.1
import QtQuick.Enterprise.Controls 1.3
import QtQuick.Enterprise.Controls.Styles 1.3
import QtQuick.Enterprise.Controls.Private 1.0

/*!
    \qmltype DelayButton
    \inherits QtQuickControls::Button
    \inqmlmodule QtQuick.Enterprise.Controls
    \since QtQuick.Enterprise.Controls 1.0
    \ingroup enterprisecontrols
    \ingroup enterprisecontrols-interactive
    \brief A checkable button that triggers an action when held in long enough.

    \image delaybutton.png A DelayButton

    The DelayButton is a checkable button that incorporates a delay before
    the button becomes checked and the \l activated signal is emitted. This
    delay prevents accidental presses.

    The current progress is expressed as a decimal value between \c 0.0 and
    \c 1.0. The time it takes for \l activated to be emitted is measured in
    milliseconds, and can be set with the \l delay property.

    The progress is indicated by a progress indicator around the button. When
    the indicator reaches completion, it flashes.

    \image delaybutton-progress.png A DelayButton being held down
    A DelayButton being held down
    \image delaybutton-activated.png A DelayButton after being activated
    A DelayButton after being activated

    You can create a custom appearance for a DelayButton by assigning a
    \l {QtQuick.Enterprise.Controls.Styles::}{DelayButtonStyle}.
*/

Button {
    id: root

    style: Qt.createComponent(StyleSettings.style + "/DelayButtonStyle.qml", root)

    /*!
        \qmlproperty real DelayButton::progress

        This property holds the current progress as displayed by the progress
        indicator, in the range \c 0.0 - \c 1.0.
    */
    readonly property alias progress: root.__progress

    /*!
        This property holds the time it takes (in milliseconds) for \l progress
        to reach \c 1.0 and emit \l activated.

        The default value is \c 3000 ms.
    */
    property int delay: 3000

    /*!
        This signal is emitted when \l progress reaches \c 1.0 and the button
        becomes checked.
    */
    signal activated


    /*! \internal */
    property real __progress: 0.0

    Behavior on __progress {
        id: progressBehavior

        NumberAnimation {
            id: numberAnimation
        }
    }

    Binding {
        // Force checkable to false to get full control over the checked -property
        target: root
        property: "checkable"
        value: false
    }

    onProgressChanged: {
        if (__progress === 1.0) {
            checked = true;
            activated();
        }
    }

    onCheckedChanged: {
        if (checked) {
            if (__progress < 1) {
                // Programmatically activated the button; don't animate.
                progressBehavior.enabled = false;
                __progress = 1;
                progressBehavior.enabled = true;
            }
        } else {
            // Unchecked the button after it was flashing; it should instantly stop
            // flashing (with no reversed progress bar).
            progressBehavior.enabled = false;
            __progress = 0;
            progressBehavior.enabled = true;
        }
    }

    onPressedChanged: {
        if (checked) {
            if (pressed) {
                // Pressed the button to stop the activation.
                checked = false;
            }
        } else {
            var effectiveDelay = pressed ? delay : delay * 0.3;
            // Not active. Either the button is being held down or let go.
            numberAnimation.duration = Math.max(0, (pressed ? 1 - __progress : __progress) * effectiveDelay);
            __progress = pressed ? 1 : 0;
        }
    }
}