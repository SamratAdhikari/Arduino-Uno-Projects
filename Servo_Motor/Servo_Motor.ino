#include <Servo.h>

Servo Servo1;

int servoPin = 9;
int potPin = A1;


void setup() {
    Serial.begin(9600);
    Servo1.attach(servoPin);
}


void loop() {
    int reading = analogRead(potPin);
    // Serial.println(reading);
    int angle = map(reading, 0, 1023, 0, 180);
    Serial.println(angle);
    Servo1.write(angle);

    delay(500);
}