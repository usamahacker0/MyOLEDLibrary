#ifndef MyOLEDLibrary_h
#define MyOLEDLibrary_h

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class MyOLEDLibrary {
public:
    MyOLEDLibrary();
    void begin();
    void displayText(const char* text);
    void clearDisplay();
private:
    Adafruit_SSD1306 display;
};

#endif
