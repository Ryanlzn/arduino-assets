#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

void setup()
{
  lcd.begin(16, 2);
  lcd.setBacklight(1);
  Serial.begin(9600);
}

void loop()
{ 
  lcd.setCursor(0,0);
  lcd.print("Hello <3");
  lcd.setCursor(0,1);
  lcd.print("Enthusiast");
  delay(50);
  
}