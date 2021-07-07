#pragma once
// #ifndef UNIT_TEST

#include <Arduino.h>
#include <unity.h>
#include "define.h"
#include "config/pins.h"

#define UNIT_TEST

void setup();
void loop();

void before_blinkTest();
void blink_test();
