char value = 0;

void setup() {
  // Initialize Serial (USB) for the Serial Monitor
  Serial.begin(9600);  
  
  // Initialize Serial1 (pins 18 and 19) for Bluetooth communication
  Serial1.begin(9600);  

  pinMode(8, OUTPUT);  // Pin 8 to control an LED or other device
}

void loop() {
  // Check if data is available on Serial1 (Bluetooth module)
  if (Serial1.available() > 0) {
    // Read the incoming byte from Bluetooth
    value = Serial1.read();
    
    // Print the received value to the Serial Monitor
    Serial.print("Received value: ");
    Serial.println(value);
    
    // Control the LED based on the received value
    if (value == '1') {
      digitalWrite(8, HIGH);  // Turn on the LED
    } else if (value == '0') {
      digitalWrite(8, LOW);   // Turn off the LED
    }
  }
}
