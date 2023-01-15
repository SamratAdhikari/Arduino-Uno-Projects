int ledPin = 12;
int sensorPin = 2;
    
     
//byte leds = 0;
     
void setup() 
{
  Serial.begin(9600);
	pinMode(ledPin, OUTPUT);
	pinMode(sensorPin, INPUT);    
}

void loop() 
{
  Serial.println(digitalRead(sensorPin));
	if (digitalRead(sensorPin) == 1)
	{
		digitalWrite(ledPin, HIGH);
	}
	else
	{
		digitalWrite(ledPin, LOW);
	}
  
  delay(100);
}