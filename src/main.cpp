#include <Arduino.h>
int ldrPin = A0;
void setup() {
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);

}
