// PROGRAM: LCD 16x02 DISPLAY
// AUThOR: Marquistei Medeiros (Marx Medeiros)
// GITHUB: @MarxSteel
//
// PLEASE, STAY THE CREDITS
 
 
// READ THE LiquidCrystal Library
#include <LiquidCrystal.h>
 
// SET THE USED I/O PINS
LiquidCrystal lcd(PB4, PB5, PB12, PB13, PB14, PB15);

// PIN: PB4 - RS pin into display
// PIN: PB5 - E (enable) pin into display
// PIN: PB12 - DB4 Pin
// PIN: PB13 - DB5 Pin
// PIN: PB14 - DB6 Pin
// PIN: PB15 - DB7 Pin
//
// -------------------------------------------------------------------
// OTHER PINS
//
// VCC +5V:
// PIN 2 - VCC
// PIN 15/A/Vee 
// 
// GND (GROUND):
// R/W ou RW
// 0V (Backlight)
// VSS
//
// CONTRAST ADJUST
// PIN V0 - INTO POTENCIOMETER
// -------------------------------------------------------------------


void setup()
{
  //set the LCD Display Type
  lcd.begin(16, 2);
}
 
void loop()
{
  // Clear Screen
  lcd.clear();
  //Set cursor in 0 column and 0 position
  lcd.setCursor(0, 0);
  //Send the text
  lcd.print("1234567890123456");
  //Set cursor in 1 column and 0 position
  lcd.setCursor(0, 1);
  lcd.print("6543210987654321");

}
