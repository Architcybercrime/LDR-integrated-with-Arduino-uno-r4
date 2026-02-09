#include <Arduino.h>
int ldrPin = A0;
void setup() {
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);

}

void loop() {

    int ldrValue = analogRead(ldrPin);
    int lightPercent=map(ldrValue,0,1023,0,100);
    Serial.print("LDR Value: ");
    Serial.println(ldrValue);
    Serial.println(lightPercent);
    delay(300);
}