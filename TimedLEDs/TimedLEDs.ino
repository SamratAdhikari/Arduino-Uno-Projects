int DELAY_TIME = 1000;
int WHITE_LED = 12;
int GREEN_LED = 11;
int YELLOW_LED = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(WHITE_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(WHITE_LED, HIGH);
  delay(DELAY_TIME);
  digitalWrite(WHITE_LED, LOW);
  delay(DELAY_TIME);
  
  digitalWrite(GREEN_LED, HIGH);
  delay(DELAY_TIME);
  digitalWrite(GREEN_LED, LOW);
  delay(DELAY_TIME);
  
  digitalWrite(YELLOW_LED, HIGH);
  delay(DELAY_TIME);
  digitalWrite(YELLOW_LED, LOW);
  delay(DELAY_TIME);

}
