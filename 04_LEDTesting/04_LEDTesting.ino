void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  // digitalWrite(LED_BUILTIN, HIGH);
}

void loop(){
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(500);
  digitalWrite(2,HIGH);
  delay(500);
}