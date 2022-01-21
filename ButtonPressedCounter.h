#ifndef ButtonPressedCounter_h
#define ButtonPressedCounter_h

#include "Arduino.h"

class ButtonPressedCounter
{
    public:
        ButtonPressedCounter(int pin);
        void setCounterOnPress();
        int getCounter();
        void resetCounter();
    private:
        int _pin;
        int _lastButtonState = LOW;
        unsigned long _lastDebounceTime = 0;
        int _debounceDelay = 50;
        int _buttonState;
        int _buttonPressedCounter = 0;
};

#endif