#pragma once
#include <Arduino.h>

class LED {
  public:
    LED(uint8_t pin);
    void turnOn();
    void turnOff();
    void ledSet(bool state);
    void ledBrightness(uint8_t value);
    void ledToogle(uint32_t timeOn, uint32_t timeOff);

  private:
    uint8_t _pin;
    bool _state;
    uint8_t _value;
    uint32_t _timeOn;
    uint32_t _timeOff;
    uint32_t _tmr;
    uint32_t _period;
};
