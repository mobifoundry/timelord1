var counter = 0;

function append() {
    var textBox = document.getElementById('txtCount');
    counter++;
    textBox.value = "Clicked " + counter +  " times";
}