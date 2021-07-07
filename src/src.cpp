
#include <Arduino.h>
#include "define.h"

// This is to hide non-test related source code.
// https://docs.platformio.org/en/latest/plus/unit-testing.html
#ifndef UNIT_TEST

void setup() {
    // put your setup code here, to run once:

    // Enables Serial Communication with baudRate of 115200
    Serial.begin(115200);


}

void loop() {
    // put your main code here, to run repeatedly:

}

#endif
