import QtQuick 2.4

Rectangle {
    width: 200
    height: 464
    color: "black"
    signal pauseCuttingButtonClicked
    signal resumeCuttingButtonClicked
    signal startCuttingButtonClicked
    signal finishCuttingButtonClicked
    signal abortCuttingButtonClicked
    signal uploadMoreCuttingButtonClicked

    Rectangle {
        id: startCutting
        objectName: "startCutting"
        x: 0
        y: 8
        width: 200
        height: 100

        Text{
            id: startButtonText
            width: 200
            height: 100
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 30
            text:"Start"
        }
        MouseArea {
            id: startCuttingMouseArea
            x: 0
            y: 0
            anchors.rightMargin: 0
            anchors.bottomMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 0
            anchors.fill: parent
            onClicked:
            {
                switch (startButtonText.text){
                case "Start":
                    startCuttingButtonClicked()
                    //jobTime.startCount()
                    startButtonText.text = "Pause"
                    //buttonFinish.text = "Finish"
                    //buttonAbort.visible = true
                    break;

                case "Pause":
                    pauseCuttingButtonClicked()
                    //jobTime.stopCount()
                    startButtonText.text = "Resume"
                    break;

                case "Resume":
                    resumeCuttingButtonClicked()
                    //jobTime.startCount()
                    startButtonText.text = "Pause"
                    break;
                }


            }
        }
        color: startCuttingMouseArea.pressed ? Qt.darker("Aqua",1.5) : "Aqua"
        scale: startCuttingMouseArea.pressed ? 1.1 : 1.00
    }

    Rectangle {
        id: uploadMoreCutting
        objectName: "uploadMoreCutting"
        x: 2
        y: 121
        width: 200
        height: 100

        Text{
            width: 200
            height: 100
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 30
            text:"Next"///TEMPORARILY HARDCODED!
        }

        MouseArea {
            id: uploadMoreCuttingMouseArea
            x: 8
            y: 0
            width: 200
            height: 100
            anchors.bottomMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 0
            anchors.rightMargin: 0
            anchors.fill: parent
            onClicked: uploadMoreCuttingButtonClicked()
        }
        color: uploadMoreCuttingMouseArea.pressed ? Qt.darker("peru",1.5) :"peru"
        scale: uploadMoreCuttingMouseArea.pressed ? 1.1 : 1.00
    }




    Rectangle {
        id: finishCutting
        objectName: "finishCutting"
        x: 2
        y: 237
        width: 200
        height: 100

        Text{
            width: 200
            height: 100
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 30
            text:"Finish"
        }
        MouseArea {
            id: finishCuttingMouseArea
            x: 0
            y: 0
            anchors.rightMargin: 0
            anchors.bottomMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 0
            anchors.fill: parent
            onClicked:
            {

                finishCuttingButtonClicked()
                startButtonText.text = "Start"
            }
        }
        color: finishCuttingMouseArea.pressed ? Qt.darker("SeaGreen",1.5) : "SeaGreen"
        scale: finishCuttingMouseArea.pressed ? 1.1 : 1.00
    }



    Rectangle {
        id: abortCutting
        objectName: "abortCutting"
        x: 2
        y: 349
        width: 200
        height: 100

        Text{
            width: 200
            height: 100
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 30
            text:"Abort"
        }

        MouseArea {
            id: abortCuttingMouseArea
            x: 8
            y: 0
            width: 200
            height: 100
            anchors.bottomMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 0
            anchors.rightMargin: 0
            anchors.fill: parent
            onClicked:
            {
                startButtonText.text = "Start"
                abortCuttingButtonClicked()
            }
        }
        color: abortCuttingMouseArea.pressed ? Qt.darker("Salmon",1.5) :"Salmon"
        scale: abortCuttingMouseArea.pressed ? 1.1 : 1.00
    }

}
