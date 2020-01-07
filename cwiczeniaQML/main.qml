import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.3
import pl.gwizdz 1.0
import pl.acceleration 1.0
import pl.displacement 1.0
import pl.speed 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Demo{
        id: demo
        value: 10.2
        onTest: function()
        {
           // console.log("It works...");
            textInput.clear();
        }
    }

        Displacement
        {
            id: displacement
            value: 5
            onChanged:
            {
                //console.log("DZIALA displacement");
                speed.onDisplacementChanged(value);
            }

        }

        Speed
        {
            id: speed

            onChanged:
            {
                //console.log("Dziala speed");
                acceleration.onSpeedChanged(value);
                element.text = "Speed " + speed.get();
            }
        }

        Acceleration
        {
            id: acceleration
            onChanged:
            {
                element1.text = "Acc " + acceleration.get();
            }
        }

    TextInput {
        id: textInput
        x: 80
        y: 56
        width: 249
        height: 43
        text: qsTr("Tutaj wpisz polozenie")
        font.pixelSize: 12
    }


        Button {
            id: button
            x: 440
            y: 58
            text: qsTr("Button")
            onClicked: function() {
                //displacement.doSomething();
                displacement.set(parseFloat(textInput.text));
            }
        }

        Text {
            id: element
            x: 80
            y: 185
            width: 118
            height: 22
            text: qsTr("0")
            font.pixelSize: 12
        }

        Text {
            id: element1
            x: 80
            y: 233
            width: 98
            height: 22
            text: qsTr("0")
            font.pixelSize: 12
        }

    }

