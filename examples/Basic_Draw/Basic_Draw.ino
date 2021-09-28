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
    Serial.begin(115200);

    // Initialize the display with the pins used
    display.begin(21, 22, 13, 14, 15, 16); // MOSI, CLK, CS, CD, RST

    // All Adafruit GFX functions available

    display.drawRect(20, 10, 50, 50, 1);
    display.fillCircle(50, 50, 10, 1);
    display.drawLine(0, 0, 100, 100, 1);

    display.setCursor(40, 20);
    display.print("Hello World!");
}

void loop()
{
}
