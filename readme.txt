Arduino 5 LEDs Control with Buttons
This Arduino sketch allows you to control 5 LEDs using 5 buttons. Each button is associated with one LED, and when a button is clicked, the corresponding LED will turn on or off. This project offers an interactive and fun way to control the LEDs and experiment with different button actions.

Hardware Requirements
To run this project, you will need the following components:

Arduino board (e.g., Arduino Uno)
5 LEDs
5 buttons
Current-limiting resistors for the LEDs (if needed)
Jumper wires
Circuit Setup
Connect the 5 LEDs to digital pins 2 to 6 on the Arduino board.
If required, use current-limiting resistors to protect the LEDs from excess current.
Connect the 5 buttons to digital pins 7 to 11 on the Arduino board. Connect the other terminal of each button to the GND pin on the Arduino.
Uploading the Sketch
Open the Arduino IDE and create a new sketch.
Copy and paste the provided code into the sketch.
Connect the Arduino board to your computer via USB.
Select the correct board and port from the "Tools" menu in the IDE.
Click the "Upload" button to upload the code to the Arduino board.
Usage
After uploading the code, the Arduino will continuously monitor the buttons' status.
When you click a button, the corresponding LED will turn on or off, depending on its current state.
Release the button, and the LED state will remain until the button is pressed again.
Customization
You can customize the code to add more LEDs or buttons as needed.
Adjust the debounce delay in the code (delay(200)) to control the delay between button clicks and avoid rapid toggling due to contact bouncing.
Acknowledgments
This Arduino project is made possible by the creativity and passion of the Arduino community. Have fun experimenting with different LED and button combinations!