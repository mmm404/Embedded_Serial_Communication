uint8_t potPin = A3;
uint16_t pinVal;
void setup() {
  Serial.begin(9600);
  //Serial1.begin(9600);
  pinMode(potPin,INPUT);
}

void loop() {
  pinVal = analogRead(potPin);
  Serial.println(pinVal);
  //Serial1.print(pinVal);
  delay(100);
}
