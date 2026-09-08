#include <FastLED.h>

#define DATA_PIN 6
#define NUM_LEDS 32
#define LED_TYPE WS2812B
#define COLOR_ORDER GRB
#define BRIGHTNESS 140

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
  FastLED.clear();
  FastLED.show();
}

void loop() {

  // controls shift of yellow to orange
  uint8_t shift = beatsin8(5, 0, 255);

  // yellow orange definition
  uint8_t green = map(shift, 0, 255, 130, 90);

  CRGB currentColor = CRGB(255, green, 0);

  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = currentColor;
  }

  FastLED.show();
  delay(20);
}