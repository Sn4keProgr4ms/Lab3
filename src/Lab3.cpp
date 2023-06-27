/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/Desktop/Remys_Labs/Lab3/src/Lab3.ino"
void setup();
void loop();
#line 1 "/Users/admin/Desktop/Remys_Labs/Lab3/src/Lab3.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);


void setup()
 {
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
 }

void loop() 
{
  analogWrite(D5, 255);
  analogWrite(D6, 255);
  analogWrite(D7, 0);
  delay(1000);
  analogWrite(D5, 255);
  analogWrite(D6, 0);
  analogWrite(D7, 255);
  delay(1000);
  analogWrite(D5, 0);
  analogWrite(D6, 255);
  analogWrite(D7, 255);
  delay(1000);
  analogWrite(D5, 255);
  analogWrite(D6, 0);
  analogWrite(D7, 0);
  delay(1000);
  analogWrite(D5, 0);
  analogWrite(D6, 255);
  analogWrite(D7, 0);
  delay(1000);
  analogWrite(D5, 0);
  analogWrite(D6, 0);
  analogWrite(D7, 255);
  delay(1000);
}