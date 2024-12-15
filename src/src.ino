#include "MQ135.h"
#define RZERO 1

MQ135 gasSensor = MQ135(A0);
int val;
int sensorPin = A0;
int sensorValue = 0;

void setup() {
  Serial.begin(115200);
  pinMode(sensorPin, INPUT);
}
 
void loop() {
  val = analogRead(A0);
  Serial.print ("raw = ");
  Serial.println (val);
  float zero = gasSensor.getRZero();
  Serial.print ("rzero: ");
  Serial.println (zero);
  float ppm = gasSensor.getPPM();
  Serial.print ("ppm: ");
  Serial.println (ppm);
  delay(2000);
}