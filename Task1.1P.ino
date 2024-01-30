// Define motion sensor pin
const int motionSensorPin = 2;
// Define LED pin
const int ledPin = 12;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  // Set motion sensor pin as input
  pinMode(motionSensorPin, INPUT);
  // Set LED pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read motion sensor input
  int motionSensorState = digitalRead(motionSensorPin);
  
  // Print sensor input to Serial
  Serial.print("Motion Sensor: ");
  Serial.println(motionSensorState);
  
  // Check if motion detected
  if (motionSensorState == HIGH) {
    // Turn on LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Turn off LED
    digitalWrite(ledPin, LOW);
  }
  
  // Delay for stability
  delay(1000);
}
