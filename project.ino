// Define the Arduino pins connected to the sensor outputs
int channelAPin = 10;   // Pin for Channel A output of the sensor (e.g., encoder)
int channelBPin = 11;   // Pin for Channel B output of the sensor (e.g., encoder)
int indexPin = 9;       // Pin for Index output (if using an encoder with index pulse)
int hallPin = 13;       // Pin for Hall effect sensor output

void setup() {
  // Set the pins as inputs
  pinMode(channelAPin, INPUT);  // Set Channel A pin as input
  pinMode(channelBPin, INPUT);  // Set Channel B pin as input
  pinMode(indexPin, INPUT);     // Set Index pin as input

  // Initialize serial communication at 9600 bits per second:
  Serial.begin(9600);  // Set up the serial monitor to view sensor readings
}

void loop() {
  // Read the states of the sensor outputs
  int channelAState = digitalRead(channelAPin);  // Read the state of Channel A
  int channelBState = digitalRead(channelBPin);  // Read the state of Channel B
  int indexState = digitalRead(indexPin);        // Read the state of Index pin
  
  // Print the states to the Serial Monitor
  Serial.print("ChannelA:");    // Label for Channel A state
  Serial.print(channelAState);  // Print the state of Channel A (HIGH/LOW)
  Serial.print(",");            // Separator for readability in the output
  Serial.print("ChannelB:");    // Label for Channel B state
  Serial.print(channelBState);  // Print the state of Channel B (HIGH/LOW)
  Serial.print(",");            // Separator for readability in the output
  Serial.print("Index:");       // Label for Index state
  Serial.println(indexState);   // Print the state of Index pin (HIGH/LOW)

  // Delay a bit for readability of the serial output
  delay(500);  // Wait for 500 milliseconds before repeating
}
