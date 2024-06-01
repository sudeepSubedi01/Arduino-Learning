void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(13, HIGH);
  Serial.println('1');
  delay(3000);
  digitalWrite(13, LOW);
  Serial.println('0');
  delay(3000);
}
