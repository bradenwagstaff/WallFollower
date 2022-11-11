#ifndef SONICSENSOR_H
#define SONICSENSOR_H
#include "Arduino.h"

#define echoPinLEFT 9 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPinLEFT 8 //attach pin D3 Arduino to pin Trig of HC-SR04
#define echoPinFRONT 13 // attach pin D13 Arduino to pin Echo of HC-SR04
#define trigPinFRONT 12 //attach pin D12 Arduino to pin Trig of HC-SR04
#define echoPinRIGHT 11 // attach pin D11 Arduino to pin Echo of HC-SR04
#define trigPinRIGHT 10 //attach pin D10 Arduino to pin Trig of HC-SR04


void setupSensors();
double getDistanceLEFT();
double getDistanceFRONT();
double getDistanceRIGHT();

#endif
