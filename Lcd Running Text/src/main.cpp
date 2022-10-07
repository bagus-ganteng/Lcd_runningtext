#include <LiquidCrystal_I2C.h>
#include <Arduino.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("F");delay(1000); lcd.print("O");delay(500);
  lcd.print("L");delay(500); lcd.print("L");delay(500);
  lcd.print("L");delay(500); lcd.print("O");delay(500);
  lcd.print("W");delay(500); lcd.print(" ");delay(500);

  lcd.setCursor(1,1);
  lcd.print("@");delay(200); lcd.print("B");delay(200);
  lcd.print("A");delay(200); lcd.print("G");delay(200);
  lcd.print("S");delay(200); lcd.print(" ");delay(200);
  lcd.print("R");delay(200); lcd.print("I");delay(200);
  lcd.print("Z");delay(200); lcd.print("K");delay(200);
  lcd.print("Y");
  lcd.clear();
}

void loop() {
  int u;
  lcd.setCursor(1,0);
  lcd.print("FOLLOW @BAGS_RIZKY PROJECT-03");
  for (u = 0 ; u < 15; u++) {
    lcd.scrollDisplayLeft();
    delay(100);
    lcd.scrollDisplayRight();
    delay(100);
  }
}
