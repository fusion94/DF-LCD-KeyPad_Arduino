// include the library code:
#include <LiquidCrystal.h> //adafruit modified library (https://github.com/adafruit/LiquidCrystal)
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);  // adjust this to suit your pins.

// define a custom symbol (clock)
uint8_t bell[8]  = {0x4, 0xe, 0xe, 0xe, 0x1f, 0x0, 0x4};

// Connect via i2c, default address #0 (A0-A2 not jumpered)

void setup() {
  // set up the LCD's number of rows and columns:
  lcd.begin(16, 2);
  //set up custom character
  lcd.createChar(0, bell);
  //clear lcd
  lcd.clear();
  //write custom character
  lcd.print((char)0); //or lcd.print(0, BYTE);
}

void loop() { 
}
