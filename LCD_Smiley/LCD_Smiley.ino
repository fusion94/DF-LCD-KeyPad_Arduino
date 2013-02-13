#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);  // adjust this to suit your pins.

// define a custom degree symbol
uint8_t degree[8]  = {140,146,146,140,128,128,128,128};

byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};

void setup() {
  //lcd.createChar(0, degree);
  lcd.createChar(0, smiley);
  lcd.begin(16, 2); 
  lcd.setCursor(15,1);
  lcd.print((char)0);
}

void loop() {}
