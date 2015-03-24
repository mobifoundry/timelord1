import QtQuick 2.1
import QtQuick.Controls 1.0

Rectangle {
    id: root
    width: 800
    height: 500

    SplitView {
        anchors.fill: parent
        orientation: Qt.Horizontal

        Rectangle
        {
            width: 300

            TextArea
            {
                id: txtEditor
                text: "{}"
                width: parent.width
                anchors.top: parent.top
                anchors.bottom: btnParse.top
                textFormat : TextEdit.PlainText

            }

            Button
            {
                id: btnParse
                text: "Parse"
                anchors.bottom: parent.bottom
                onClicked:
                {
                    mainApi.parsePst(txtEditor.text)
                }
            }

        }

        Rectangle
        {
            id: viewer
            color: "grey"
            //scale multiplier
            property double scale: 20

            clip: true

            function serialize()
            {
                var pstString = "{"
                pstString += '"id":"' + pressSheet.pstId + '",\n'
                pstString += '"version":"' + pressSheet.version + '",\n'
                pstString += '"width":' + pressSheet.width/viewer.scale + ',\n'
                pstString += '"height":' + pressSheet.height/viewer.scale + ',\n'

                pstString += '"cells":' + '\n'
                pstString += "[" + '\n'

                for (var i=0; i<pressSheet.children.length; i++)
                {
                    pstString += "{" + '\n'
                    pstString += '"position":' + pressSheet.children[i].position + ',\n'
                    pstString += '"x":' + pressSheet.children[i].x/viewer.scale + ',\n'
                    pstString += '"y":' + pressSheet.children[i].y/viewer.scale + ',\n'
                    pstString += '"width":' + pressSheet.children[i].width/viewer.scale + ',\n'
                    pstString += '"height":' + pressSheet.children[i].height/viewer.scale + ',\n'
                    pstString += '"rotation":' + pressSheet.children[i].rotation + '\n'
                    pstString += "}"

                    if (i < pressSheet.children.length - 1) pstString += ","

                    pstString += '\n'

                }

                pstString += "]" + '\n'

                pstString += "}"
                txtEditor.text = pstString
            }

            Connections
            {
                target: mainApi
                onSendPst:
                {
                    pressSheet.pstId = pstList.id
                    pressSheet.version = pstList.version

                    pressSheet.width = pstList.width*viewer.scale
                    pressSheet.height = pstList.height*viewer.scale
                }
                onSendCells:
                {
                    pressSheet.clearCells()

                    var cellComponent = Qt.createComponent("PressSheetItem.qml")

                    for (var i=0; i<cells.length; i++)
                    {
                        var rotCorrX = 0
                        var rotCorrY = 0

                        switch (cells[i].rotation)
                        {
                        case -90:
                            rotCorrX = 0
                            rotCorrY = cells[i].width*viewer.scale
                            break
                        case 90:
                            rotCorrX = cells[i].height*viewer.scale
                            rotCorrY = 0
                            break
                        case 180:
                            rotCorrX = cells[i].width*viewer.scale
                            rotCorrY = cells[i].height*viewer.scale
                            break
                        case 270:
                            rotCorrX = 0
                            rotCorrY = cells[i].width*viewer.scale
                            break
                        }

                        var cell = cellComponent.createObject(pressSheet,
                                          {
                                              "position": cells[i].position,
                                              "x": cells[i].x*viewer.scale + rotCorrX,
                                              "y": cells[i].y*viewer.scale + rotCorrY,
                                              "width": cells[i].width*viewer.scale,
                                              "height": cells[i].height*viewer.scale,
                                              "rotation": cells[i].rotation
                                          }
                                          )

                        cell.cellReleased.connect(viewer.serialize)


                    }

                }
                onParseError:
                {
                    console.log(errorMessage)
                }
            }

            Rectangle
            {
                id: pressSheet
                x: 30
                y: 30

                property string pstId: ""
                property string version: ""

                clip: true

                function clearCells()
                {
                    for (var i=0; i<pressSheet.children.length; i++)
                    {
                        pressSheet.children[i].destroy()
                    }
                }
            }
        }

    }


}
