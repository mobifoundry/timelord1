.pragma library

function setPressSheet(msg,psd,shdref,emptytext,psdOpacityShowAnim,psdMinShowAnim)
{
    psd.name = msg.ps_name
    psd.quantity = msg.ps_quantity
    psd.expires = msg.ps_expires
    psd.front = msg.ps_front
    psd.back = msg.ps_back
    psd.sides = msg.ps_sides
    psd.substrate = msg.ps_substrate
    psd.type = msg.ps_type
   //TODO image preview
    // psd.previewImage = msg.ps_preview
    shdref.startHeight = msg.ps_selectedHeight
    emptytext.opacity = 0

    psdOpacityShowAnim.start()
    psdMinShowAnim.start()

    psd.enabled = true
 //   ProfitApi.queryPressSheetTemplate(msg.ps_type)
// ProfitApi.queryPressSheetItemsList(msg.ps_id)

}

function jobFinished(psd,emptytext,psdOpacityHideAnim,psdMinHideAnim)
{
    psd.enabled = false
    emptytext.opacity = 1

    psdOpacityHideAnim.start()
    psdMinHideAnim.start()
}

function jobAborted(psd,emptytext,psdOpacityHideAnim,psdMinHideAnim)
{
    psd.enabled = false
    emptytext.opacity = 1

    psdOpacityHideAnim.start()
    psdMinHideAnim.start()

}

function startCount(jobTimeTimer,jobTime)
{
    jobTimeTimer.start()
    jobTime.color = "orange"
}
function stopCount(jobTimeTimer,jobTime)
{
    jobTimeTimer.stop()
    jobTime.color = "darkgrey"
}
