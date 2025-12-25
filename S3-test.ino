#include <Adafruit_NeoPixel.h>

#define LED_PIN 48
#define LED_COUNT 1

Adafruit_NeoPixel pixel(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixel.begin();
  pixel.setBrightness(50);
}

void loop() {
  pixel.setPixelColor(0, pixel.Color(255, 0, 0)); // RED
  pixel.show();
  delay(400);

  pixel.setPixelColor(0, pixel.Color(0, 255, 0)); // GREEN
  pixel.show();
  delay(400);

  pixel.setPixelColor(0, pixel.Color(0, 0, 255)); // BLUE
  pixel.show();
  delay(400);
}
