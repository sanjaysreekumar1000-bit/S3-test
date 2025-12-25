#include <Adafruit_NeoPixel.h>
#include <Wire.h>
#include <SPI.h>
#include <WiFi.h>
#include <ArduinoJson.h>
#include <RemoteXY.h>
#include <Servo.h>
#include <FastLED.h>

#define LED_PIN 48
#define LED_COUNT 1

Adafruit_NeoPixel pixel(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
StaticJsonDocument<200> jsonDoc;
Servo testServo;

void setup() {

  Serial.begin(115200);

  // NeoPixel
  pixel.begin();
  pixel.setBrightness(50);
  pixel.show();

  // JSON
  jsonDoc["status"] = "running";

  // I2C + SPI
  Wire.begin();
  SPI.begin();

  // Servo
  testServo.attach(2);

  // FastLED dummy init
  FastLED.addLeds<NEOPIXEL, LED_PIN>((CRGB*)nullptr, 0);

  Serial.println("Multi-library test sketch running!");
}

void loop() {
  pixel.setPixelColor(0, pixel.Color(255, 0, 0));
  pixel.show();
  delay(300);

  pixel.setPixelColor(0, pixel.Color(0, 255, 0));
  pixel.show();
  delay(300);

  pixel.setPixelColor(0, pixel.Color(0, 0, 255));
  pixel.show();
  delay(300);
}
