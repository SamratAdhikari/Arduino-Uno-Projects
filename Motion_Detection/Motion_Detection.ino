void setup() {
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
}


void loop() {
  if(digitalRead(2) == HIGH){
    tone(9, 400);
    delay(300);
    noTone(9);
    delay(300);
    tone(9, 400);
    delay(300);
  }
  else {
    noTone(9);
  }
}