/*
 Library written for use with Common-Anode 7-Segment Display. For more information on how to use this library,
 please refer to the github README.
 
 Written by: Derek Duncan
 Data: 2/4/2016
 */

#ifndef SegmentDisplay_H
#define SegmentDisplay_H

#include "Arduino.h"

class SegmentDisplay
{
    public:
      SegmentDisplay(int pin1, int pin2, int pin4, int pin5, int pin6, int pin7, int pin9, int pin10);
      void displayDecimalPoint();
      void displayHex(int numberToDisplay, boolean decimalPointFlag);
      void displayMinus(boolean decimalPointFlag=false);
      void testDisplay();

    private:
	  int pins[8];
    
};

#endif
