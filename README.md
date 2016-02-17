# arduino_7_segment_display_library
This library was written originally to be used with 7-Segment-Display YSD-160AR4B-8


**How to use this library:**

This is the correct pinout diagram of the YSD-160AR4B-8.

```
10, 9, CA, 7, 6
 ____________
|            |
|            |
|            |
|            |
|            |
|____________|
1, 2, CA, 4, 5
```
```C
/*
 *Initialize SevenSegment
 *Put the number of the digitalPin from the arduino connected to the 7-Segment in order
 *For example, I use digitalPin 2 connected to pin 1 on the 7-Segment, digitalPin 3 to pin2, 4 to 4
 *5 to 5, 6 to 6, 7 to 7, 8 to 9, and 9 to 10
 */
SegmentDisplay segmentDisplay(2, 3, 4, 5, 6, 7, 8, 9);
```

**How to display a hex letter with/without decimal point**
```C
/*Display any given hex number 0 to 15
 *2 with no decimal and C with decimal point in this example
 */
segmentDisplay.displayHex(2, false);
segmentDisplay.displayHex(12, true);
```

**Display only the decimal point**
```C
/*Display only the decimal point*/
segmentDisplay.displayDecimalPoint();
```

**How to test the display and test display wiring**
```C
/*Test the given display and display wiring by rotating through numbers 0 - F*/
segmentDisplay.testDisplay();
```

**Example Wiring**

![Alt text](https://github.com/dgduncan/arduino_7_segment_display_library/blob/master/extras/fritzing_image.png "Example Wiring Diagram")

