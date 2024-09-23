// Define the Arduino pins connected to the sensor outputs
int channelAPin = 10;
int channelBPin = 11;
int indexPin = 9;
int hallPin = 13;

void setup() {
  // Set the pins as inputs
  pinMode(channelAPin, INPUT);
  pinMode(channelBPin, INPUT);
  pinMode(indexPin, INPUT);
  
  // Initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // Read the states of the sensor outputs
  int channelAState = digitalRead(channelAPin);
  int channelBState = digitalRead(channelBPin);
  int indexState = digitalRead(indexPin);
  
  // Print the states to the Serial Monitor
  Serial.print("ChannelA:");
  Serial.print(channelAState);
  Serial.print(",");
  Serial.print("ChannelB:");
  Serial.print(channelBState);
  Serial.print(",");
  Serial.print("Index:");
  Serial.println(indexState);

  
  // Delay a bit for readability
  delay(500);
}