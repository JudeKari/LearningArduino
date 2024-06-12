#include "Led.h"
#include "LedBlinker.h"

#define LED_PIN 11

Led led(LED_PIN);
LedBlinker ledBlinker(led);

void setup() {
  ledBlinker.initLed();

}

void loop() {
  led.toggle();
  delay(500);
}
