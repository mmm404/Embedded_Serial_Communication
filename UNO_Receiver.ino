uint8_t ledPin = 5;
uint16_t potData;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Reading incoming data from serial
  if (Serial.available() > 0) {
    
    potData = Serial.parseInt();
    analogWrite(ledPin, potData / 4); 
  }
}
