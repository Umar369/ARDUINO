/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
================================================================================
File name: example.ino
   System: Due TLC5940 Library
 Platform: Arduino Due (Atmel SAM3X8E ARM Cortex-M3)
   Author: Madeline Usher
  Created: July 6, 2013
  Purpose: Example showing usage of the TLC5940 Library.
================================================================================
  $LastChangedDate$
  $LastChangedBy$
================================================================================
  Copyright (c) 2013 Madeline Usher <maddy314 ~@~ gmail.com>
 
  The Arduino Due TLC5940 Library is free software: you can redistribute it
  and/or modify it under the terms of the GNU General Public License as
  published by the Free Software Foundation, either version 3 of the License, 
  or (at your option) any later version.

  This library is distributed in the hope that it will be useful, but WITHOUT 
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS 
  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

  You should have received a copy of the GNU General Public License along with 
  this library.  If not, see <http://www.gnu.org/licenses/>.
================================================================================
*/

/// Pin Assignments:
/// - SPI CLK  = SDA1, A.17, peripheral B -> TLC5940 SCLK (pin 25)
/// - SPI MOSI = TX1 (pin 18), A.11. peripheral A -> TLC5940 SIN (pin 26)
/// - SPI MISO = RX1 (pin 17), A.10, peripheral A -> TLC5940 SOUT (pin 17) [opt]
/// - pin 6 -> TLC5940 VPRG (pin 27)
/// - pin 5 -> TLC5940 XLAT (pin 24)
/// - pin 4 -> TLC5940 BLANK (pin 23)
/// - pin 3 -> TLC5940 GSCLK (pin 18)
/// - pin 2 -> TLC5940 XERR (pin 16)  [optional]

////////////////////////////////////////////////////////////////////////////////

#include "Arduino.h"
#include "due_tlc5940.h"


////////////////////////////////////////////////////////////////////////////////
/// The setup() method runs once, when the sketch starts

void setup ()
 {
  initTLC5940();
  demo();
  return;
 }


////////////////////////////////////////////////////////////////////////////////
/// The loop() method runs over and over again, as long as the Arduino has power

void loop()
 {
  delay (500);
 }


 
void setAndSend (byte led, uint16_t brightness)
 {
  setGSData(led, brightness);
  sendGSData();
  return;
 }

void demo()
{
  for (int i = 0; i < 16; i++)
  {
    setAndSend(i, 2056);
    delay(150);
  }
  setAllGSData(0);
  sendGSData ();
  delay(100);
  setAllGSData(2056);
  sendGSData ();
  delay(100);
  setAllGSData(0);
  sendGSData ();
  delay(100);
  setAllGSData(2056);
  sendGSData ();
  delay(100);
  setAllGSData(0);
  sendGSData ();
  delay(100);
  setAllGSData(2056);
  sendGSData ();
  delay(100);
  setAllGSData(0);
  sendGSData ();
  delay(100);
  setAllGSData(2056);
  sendGSData ();
  delay(100);
  setAllGSData(0);
  sendGSData ();
  delay(100);
  setAllGSData(2056);
  sendGSData ();
  delay(100);
  setAllGSData(0);
  sendGSData ();
  delay(100);
  setAllGSData(2056);
  sendGSData ();
  delay(100);
  setAllGSData(0);
  sendGSData ();
  delay(100);
   setAllGSData(2056);
  sendGSData ();
  delay(100);
  setAllGSData(0);
  sendGSData ();
  delay(100);
  setAllGSData(2056);
  sendGSData ();
  delay(100);
  setAllGSData(0);
  sendGSData ();
  delay(100);
   setAllGSData(2056);
  sendGSData ();
  delay(100);
  setAllGSData(0);
  sendGSData ();
  delay(100);
  setAllGSData(2056);
  sendGSData ();
  delay(100);
  setAllGSData(0);
  sendGSData ();
  delay(100);
  for (int i = 0; i < 4096; i+=91)
  {
    setAllGSData(i);
    sendGSData ();
    delay(25);
  }
  for (int i = 4095; i >= 0; i-=91)
  {
    setAllGSData(i);
    sendGSData ();
    delay(25);
  }
  for (int i = 0; i < 4096; i+=91)
  {
    setAllGSData(i);
    sendGSData ();
    delay(25);
  }
  for (int i = 4095; i >= 0; i-=91)
  {
    setAllGSData(i);
    sendGSData ();
    delay(25);
  }
  for (int i = 0; i < 4096; i+=91)
  {
    setAllGSData(i);
    sendGSData ();
    delay(25);
  }
  for (int i = 4095; i >= 0; i-=91)
  {
    setAllGSData(i);
    sendGSData ();
    delay(25);
  }
}
////////////////////////////////////////////////////////////////////////////////
/// End of Code
