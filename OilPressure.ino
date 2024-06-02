
 
#include <LiquidCrystal_I2C.h> // Driver Library for the LCD Module
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  lcd.init(); // Initialize the LCD
  lcd.backlight(); // Turn on the LCD backlight
}
void loop() {
  int inputValue = analogRead(A0);
  float inputVoltage = 32 * (inputValue * (5.0 / 1023)) - 16;
  lcd.clear(); // Clear the screen
  lcd.print(inputVoltage);
  lcd.print(" PSI");
  delay(100);
  
}
