/*

 LCD KeyPad from DFRobot
 https://github.com/fusion94/DF-LCD-KeyPad_Arduino

 Copyright 2011-2013, http://fusion94.org
 Licensed under the Mozilla Public License Version 2.0
 
 LiquidCrystal Library - Hello World
 
 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the 
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.
 
 This sketch prints "Hello World!" to the LCD

*/

#include <LiquidCrystal.h>

// adjust this to suit your pins.
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
    // initialize the LCD
    lcd.begin(16, 2);

    // Turn on the blacklight and print a message.
    lcd.print("Hello, World!");
}

void loop() {
    // Do nothing here...
}