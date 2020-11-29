
#include <Adafruit_NeoPixel.h>

#define PIN 0
#define pot 1

#define NUMPIXELS 30

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_RGB + NEO_KHZ800);

void setup() {
  pixels.begin();
  pinMode(pot, INPUT);
}
void loop() {
  int poten = analogRead(pot)/4;
  
  for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,poten,poten)); 
    pixels.show(); 
  }
}
