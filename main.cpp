#include "sonicSensor.h"
#include "motors.h"
#include <Arduino.h>

#define MOTOR_FORWARD true
#define MOTOR_REVERSE false
#define SPEED 2
int rightSpeed;
int leftSpeed;
int timer;
double leftDistance;
double rightDistance;

void robotLogic(){
  while(timer < 200){
    leftDistance = getDistanceLEFT();
    rightDistance = getDistanceRIGHT();
  if(rightDistance >= 10){
    if(leftSpeed > 0) leftSpeed = leftSpeed - SPEED;
    if(rightSpeed < 255) rightSpeed = rightSpeed + SPEED;
    
  }
  else if(rightDistance < 10){
    if(rightSpeed > 0) rightSpeed = rightSpeed - SPEED;
    if(leftSpeed < 255) leftSpeed = leftSpeed + SPEED;
  }
  
  Serial.println();
  Serial.println(leftDistance);
  Serial.println(rightDistance);
  Serial.println(leftSpeed);
  Serial.println(rightSpeed);
  Serial.println();
  motorLeft(leftSpeed, MOTOR_FORWARD);
  motorRight(rightSpeed, MOTOR_FORWARD);
  timer++;
  Serial.println(timer);
  delay(5);
  }
}


void setup() {
  rightSpeed = 250;
  leftSpeed = 250;
  Serial.begin(9600);
  setupSensors();
  motorLeft(0, MOTOR_FORWARD);
  motorRight(0, MOTOR_FORWARD);

  robotLogic();

  // motorLeft(200, MOTOR_FORWARD);
  // motorRight(200, MOTOR_FORWARD);
  // delay(1000);

  motorLeft(0, MOTOR_FORWARD);
  motorRight(0, MOTOR_FORWARD);
  
  // motorLeft(200, MOTOR_FORWARD);
  // motorRight(200, MOTOR_FORWARD);
  // delay(10000);
  // motorLeft(0, MOTOR_FORWARD);
  // motorRight(0, MOTOR_FORWARD);
  // for(int i = 255; i > 0; i = i - 5){
  //   motorLeft(i, MOTOR_FORWARD);
  //   Serial.println(i);
  //   delay(200);
  // }

  // int i = 255;
  // motorLeft(i, false);
  // delay(2000);
  // i = i - 10;

  // motorLeft(i, MOTOR_REVERSE);
  // delay(2000);
  // i = i - 10;

  // motorLeft(i, MOTOR_FORWARD);
  // delay(2000);
  // i = i - 5;


  // motorLeft(0, MOTOR_FORWARD);
}


void loop() {
  // robotLogic();
}
