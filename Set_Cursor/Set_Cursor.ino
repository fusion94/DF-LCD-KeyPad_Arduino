/*
  LiquidCrystal Library - setCursor
 
 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the 
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.
 
 This sketch prints to all the positions of the LCD using the
 setCursor(0 method:
 
  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 
 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe 
  modified 25 July 2009
 by David A. Mellis
 
 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include "Wire.h"
#include "LiquidCrystal.h"

// these constants won't change.  But you can change the size of
// your LCD using them:
const int numRows = 2;
const int numCols = 16;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);  // adjust this to suit your pins.

void setup() {
  // set up the LCD's number of rows and columns: 
  lcd.begin(numRows, numCols);
}

void loop() {
  // loop from ASCII 'a' to ASCII 'z':
  for (int thisLetter = 'a'; thisLetter <= 'z'; thisLetter++) {
    // loop over the columns:
    for (int thisCol = 0; thisCol < numRows; thisCol++) {
      // loop over the rows:
      for (int thisRow = 0; thisRow < numCols; thisRow++) {
        // set the cursor position:
        lcd.setCursor(thisRow,thisCol);
        // print the letter:
#if ARDUINO >= 100
        lcd.write(thisLetter);
#else
        lcd.print(thisLetter, BYTE);
#endif
        delay(200);
      }
    }
  }
}
