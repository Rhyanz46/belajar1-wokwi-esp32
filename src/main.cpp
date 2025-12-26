#include <Arduino.h>



void setup() {
  // put your setup code here, to run once:

  pinMode(26, OUTPUT);
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000); // this speeds up the simulation
  digitalWrite(26, HIGH);
  delay(1000); // this speeds up the simulation
  digitalWrite(26, LOW);
}
