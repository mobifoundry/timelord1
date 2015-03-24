import QtQuick 2.4

import "../Components"

Rectangle
{
    id: cutCourseStepsPanel
    anchors.verticalCenter: parent.verticalCenter
    width: parent.width
    height: parent.height

    signal stopTimers()
    signal removeAllCuttingLogs()
    signal reconstructStep(int step)

    Connections
    {
        target: ShwsApi
        onSendCutCourseToQML:
        {
            cutCourseSteps.clear()
            for (var i = 0; i < steps.length; ++i)
            {
                cutCourseSteps.append(steps[i])
            }
            stepsView.currentIndex = -1
        }
    }

    Connections
    {
        target: MainApi

        onNextStep:
        {

            stopTimers()
           // removeAllCuttingLogs()
            stepsView.incrementCurrentIndex()
            reconstructStep(stepsView.currentIndex)//stepsView.currentIndex)

        }
    }

    function clearListOfSteps()
    {
        cutCourseSteps.clear()
    }

    ListModel
    {
        id: cutCourseSteps
    }

    ListView
    {

        id: stepsView
        spacing: 10
        anchors.fill: parent
        clip: true
        orientation: ListView.Vertical
        currentIndex: -1
        highlightMoveDuration: 0
        //snapMode: ListView.SnapOneItem
        interactive: false

        highlightRangeMode: ListView.ApplyRange

        model: cutCourseSteps
        delegate: Rectangle {
            id: stepsViewDelegate
            width: cutCourseStepsPanel.width
            height: cutCourseStepsPanel.height/10
            color:
            {
                if (model.index === stepsView.currentIndex) "lightblue"
                else "White"
            }

            MouseArea
            {
                anchors.fill: parent
                onClicked:
                {
//                    stopTimers()
//                    removeAllCuttingLogs()
//                    stepsView.currentIndex = model.index
//                    reconstructStep(model.index)//stepsView.currentIndex)
                }
            }

            Text
            {
                id: modelIndexText
                anchors.top: parent.top
                anchors.left: parent.left
                anchors.margins: 5
                text: "%1".arg(model.index + 1)
                font.pixelSize: root.width/70
            }

            Text
            {
                anchors.top: parent.top
                anchors.left: parent.left
                anchors.leftMargin: root.width/35
                anchors.topMargin: 5
                text: "%1".arg(cutPosition)
                font.pixelSize: root.width/70
            }

            Row
            {
                anchors.top: modelIndexText.bottom
                anchors.left: parent.left
                anchors.leftMargin: 5
                anchors.topMargin: 0

                spacing:5

                Text
                {
                    text: "W"
                    visible: waste
                    font.pixelSize: root.width/100
                }

                Text
                {
                    text: "R:%1".arg(rotate)
                    visible: rotate
                    font.pixelSize: root.width/100
                }

                Text
                {
                    text: "F:%1".arg(finished)
                    visible: finished
                    font.pixelSize: root.width/100
                }
            }

        }

    }
}
