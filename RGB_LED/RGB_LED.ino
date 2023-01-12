int DELAY_TIME = 500;
int RED_LED = 12;
int BLUE_LED = 11;
int GREEN_LED = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RED_LED, HIGH);
  delay(DELAY_TIME);
  digitalWrite(RED_LED, LOW);
  delay(DELAY_TIME);
  
  digitalWrite(GREEN_LED, HIGH);
  delay(DELAY_TIME);
  digitalWrite(GREEN_LED, LOW);
  delay(DELAY_TIME);
  
  digitalWrite(BLUE_LED, HIGH);
  delay(DELAY_TIME);
  digitalWrite(BLUE_LED, LOW);
  delay(DELAY_TIME);

}
