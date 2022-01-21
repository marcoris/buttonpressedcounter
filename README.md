# Arduino library ButtonPressedCounter
to increment a pressed button counter

## Getting started
```cpp
#include <ButtonPressedCounter.h>

int buttonPin = 8;
ButtonPressedCounter bpc(buttonPin);

void setup() {
  ...
}

void loop() {
  bpc.setCounterOnPress();

  Serial.println(bpc.getCounter());
```

## Methods
```cpp
void ButtonPressedCounter::setCounterOnPress();
int ButtonPressedCounter::getCounter();
void ButtonPressedCounter::resetCounter();
```