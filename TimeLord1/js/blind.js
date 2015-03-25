.pragma library

function closeBlind(blind,jobqueuelist,blindShowButtonSymbol)
{
//   blind.x = detailedView.width - blind.width
    var dw = blind.edgeX
    var bw = blind.width
    blind.x = dw - bw;
    blindShowButtonSymbol.text = "<"
}

function openBlind(blind,jobqueuelist,blindShowButtonSymbol)
{
   blind.x = blind.edgeX - jobqueuelist.width - blind.width
   blindShowButtonSymbol.text = ">"
}

function pressed(blindXAnimation,blindShowButton)
{
    blindXAnimation.enabled = false
    //blindShowButton.color = "Teal"
}

function released(blindXAnimation,blindShowButton)
{
    blindXAnimation.enabled = true
    blindShowButton.color = "Steelblue"
}
