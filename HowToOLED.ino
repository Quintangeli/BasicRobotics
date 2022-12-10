//Wire SDA to A4, SCL to A5, VCC to +5V, GND to GND

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);    //The typical Adress is 0x3C or 0x3D
  display.clearDisplay();   //removes all data from buffer
  display.display();    //loads your buffer to the screen
  display.setTextSize(0);
  display.setCursor(65, 14);    //Sets the starting point on an XY coordinate
  display.print("TEST");
  display.display();
}

void loop() {
  // put your main code here, to run repeatedly:
}
