

// include the library code:
#include <LiquidCrystal.h>

int runTime;

// initialize the library by associating any needed LCD 
//interface pin with arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // lcd.setCursor(0, 0);
  // Print a message to the LCD.
  lcd.print("To Truely Live");
}

void loop() {
  // set the cursor to column 0, line 1
  // note line 1 is the second row, since counting begins with 0
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  // lcd.print(millis() / 1000);
  
  delay(1000);
  
  int loopTime = (millis() / 1000) % 3;
    if (loopTime == 0){
  		lcd.print("LET GO");
      	lcd.print("                ");
      // 16 spaces for the printing issue //
  	}
  	else if (loopTime == 1){
      	lcd.print("LOVE");
      	lcd.print("                ");
	}
  	else if (loopTime == 2){
    	lcd.print("LAUGH");
    	lcd.print("                ");
    }
    
}