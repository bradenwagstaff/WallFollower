#ifndef MOTORS_H
#define MOTORS_H
#include "Arduino.h"

#define MOTOR_REV  LOW
#define MOTOR_FWD  HIGH
const int LeftIn_1 = 2;
const int LeftIn_2 = 4;
const int LeftPWM = 3;

const int RightIn_1 = 7;
const int RightIn_2 = 8;
const int RightPWM = 6;



void motorLeft(int speed, bool foward);
void motorRight(int speed, bool forward);


#endif