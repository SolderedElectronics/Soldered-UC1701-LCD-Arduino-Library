/**
 **************************************************
 *
 * @file        Basic_Draw.ino
 * @brief       Basic drawing example using basic Adafruit GFX functions
 *
 *
 *
 * @authors     Zvonimir Haramustek for soldered.com
 ***************************************************/

#include "UC1701-SOLDERED.h"

// Declare the display object
UC1701_SOLDERED display;

void setup()
{
    Serial.begin(115200);   //Start serial communication with PC using 115200 baudrate

    // Initialize the display with the pins used
    display.begin(21, 22, 13, 14, 15, 16); // MOSI, CLK, CS, CD, RST
    
    // All Adafruit GFX functions available

    display.drawRect(20, 10, 50, 50, 1);    //Draw rectangle with coordinates (x0,y0,x1,y1,color)
    display.fillCircle(50, 50, 10, 1);      //Draw flled circle with coordinates (x0,y0,radius,color)
    display.drawLine(0, 0, 100, 100, 1);    //Draw line with start and end point (x0,y0,x1,y1,color)

    display.setCursor(40, 20);              //Set cursor location for text writinf (x,y)
    display.print("Hello World!");

    display.display();                      //Display buffer on screen
}

void loop()
{
}
