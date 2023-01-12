#include<LiquidCrystal.h>

// for lcd
const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// for sensor
const int trigPin = 12;
const int echoPin = 11;
long duration;
long distance;

void setup(){
  lcd.begin(16, 2);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  lcd.print("Distance:");
  
  // Serial.begin(9600);
}

void loop(){
  
  lcd.setCursor(0, 1);
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  
  distance = (duration*0.034) / 2;
  // speed of sound = 340 m/s;
  //				= 0.0340 cm/microseconds;
  // we divide the data by 2 because the sound wave 
  // released by tigger pin takes 2*distance 
  // to strike the object and return back to the echo pin
  
  // Serial.print("Distance: ");
  // Serial.println(distance);
  
  
  lcd.print(distance);
  lcd.print(" cm  ");
  
  
  // delay(1000);
}