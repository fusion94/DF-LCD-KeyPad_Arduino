/*

 LCD KeyPad from DFRobot
 https://github.com/fusion94/DF-LCD-KeyPad_Arduino

 Copyright 2011-2013, http://fusion94.org
 Licensed under the Mozilla Public License Version 2.0
 
 LiquidCrystal Library - Serial Console
 
 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the 
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.
 
 This sketch prints anything you send from Serial Monitor to the LCD

*/

#include <LiquidCrystal.h> 

 // adjust this to suit your pins.
 LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

 void setup() {
     lcd.begin(16, 2);

     // Initialize the serial port at a speed of 9600 baud
     Serial.begin(9600);
 }

 void loop() {
     // If characters arrived over the serial port...
     if (Serial.available()) {
         // Wait a bit for the entire message to arrive
         delay(100);

         // Clear the screen
         lcd.clear();

         // Write all characters received with the serial port to the LCD.
         while (Serial.available() > 0) {
             lcd.write(Serial.read());
         }
     }
 }
