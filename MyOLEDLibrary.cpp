#include "MyOLEDLibrary.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

MyOLEDLibrary::MyOLEDLibrary() : display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1) {}

void MyOLEDLibrary::begin() {
    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
        Serial.println(F("SSD1306 allocation failed"));
        for (;;);
    }
    display.clearDisplay();
}

void MyOLEDLibrary::displayText(const char* text) {
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0, 0);
    display.println(text);
    display.display();
}

void MyOLEDLibrary::clearDisplay() {
    display.clearDisplay();
}
