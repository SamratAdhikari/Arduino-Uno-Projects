void setup() {
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  
  if(digitalRead(2) == HIGH){
    Serial.println("hello");
    tone(9, 400);
    delay(300);
    noTone(9);
    delay(300);
    tone(9, 400);
    delay(300);
  }
  else {
    Serial.println("low");
    noTone(9);
  }
}