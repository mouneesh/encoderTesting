# Arduino Sensor Read Example

## Overview
This Arduino code reads and prints the states of three sensor outputs connected to specific pins. These sensors can be encoders or other sensors that use digital signals. The program reads the states of `Channel A`, `Channel B`, and the `Index` pin, then displays the results in the Serial Monitor.

## Components
1. Arduino (Uno, Mega, or compatible)
2. Sensors (e.g., encoders or Hall effect sensors)
3. Jumper wires
4. USB cable for serial monitoring

## Pin Connections
- `Channel A`: Connected to pin 10 of the Arduino
- `Channel B`: Connected to pin 11 of the Arduino
- `Index`: Connected to pin 9 of the Arduino
- `Hall Effect Sensor`: Connected to pin 13 (optional, not currently used in the code)

## How the Code Works
1. The pins associated with the sensor outputs (Channel A, Channel B, Index) are defined at the beginning of the code.
2. The `setup()` function initializes these pins as inputs and starts serial communication with a baud rate of 9600.
3. Inside the `loop()`, the code reads the state of each sensor pin (either `HIGH` or `LOW`) using the `digitalRead()` function.
4. The sensor states are printed to the Serial Monitor in a comma-separated format for easy interpretation.
5. A `delay()` of 500 milliseconds is added for readability, ensuring that the output isn't too fast to follow.

## How to Use
1. Connect the sensors to the specified pins on the Arduino.
2. Upload the code to the Arduino.
3. Open the Serial Monitor in the Arduino IDE (set baud rate to `9600`).
4. Observe the real-time sensor output states displayed in the Serial Monitor.

## Notes
- Ensure that the sensors are connected correctly to the respective pins.
- You can modify the pin definitions at the start of the code if different pins are used.
- This code is primarily for testing and visualizing sensor output in the Serial Monitor.

## Future Improvements
- Add functionality to the Hall effect sensor (connected to pin 13).
- Implement logic based on the sensor outputs for real-time control (e.g., motor speed or direction).
