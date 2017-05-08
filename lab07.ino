#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() 
{
Serial.begin(9600);
lcd.begin(16, 2);
lcd.println("04050865 KAO");
lcd.setCursor(0, 1);
lcd.println("03050095 Mike");
}
void loop() 
{
 
  String val;
  lcd.setCursor(0, 1);
  if(Serial.available())
  {
    lcd.clear();
    lcd.print(Serial.readString());
    delay(1500);
    //lcd.clear();
  }
}
