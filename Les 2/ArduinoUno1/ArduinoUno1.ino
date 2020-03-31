int lamp = 8;

void setup() {
  Serial.pinMode(lamp,OUTPUT);
}

void loop() {
  Serial.digitalWrite(lamp,HIGH);
}
