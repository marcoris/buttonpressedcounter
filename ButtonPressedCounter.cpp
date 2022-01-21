#include "Arduino.h"
#include "ButtonPressedCounter.h"

ButtonPressedCounter::ButtonPressedCounter(int pin)
{
    pinMode(pin, INPUT);
    _pin = pin;
}

void ButtonPressedCounter::setCounterOnPress()
{
    // Button debounce
    int reading = digitalRead(_pin);
    if (reading != _lastButtonState) {
        _lastDebounceTime = millis();
    }
    if ((millis() - _lastDebounceTime) > _debounceDelay) {
        if (reading != _buttonState) {
            _buttonState = reading;

            if (_buttonState == HIGH) {
                _buttonPressedCounter++;
            }
        }
    }
    _lastButtonState = reading;
}

int ButtonPressedCounter::getCounter()
{
    return _buttonPressedCounter;
}

void ButtonPressedCounter::resetCounter()
{
    _buttonPressedCounter = 0;
}