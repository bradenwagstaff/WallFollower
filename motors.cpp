#include "motors.h"

void motorsInit(){
  pinMode(LeftIn_1, OUTPUT);
  pinMode(LeftIn_2, OUTPUT);
  pinMode(LeftPWM, OUTPUT);

  pinMode(RightIn_1, OUTPUT);
  pinMode(RightIn_2, OUTPUT);
  pinMode(RightPWM, OUTPUT);
}

void motorLeft(int speed, bool forward){
  if(speed > 255){//if input speed is over limit set to max
    speed = 255;
  }
  if(speed < 0){//if input speed is under limit set to min
    speed = 0;
  }
  if(forward){
    digitalWrite(LeftIn_1,MOTOR_FWD);//this patter means motors go forward
    digitalWrite(LeftIn_2,MOTOR_REV);
  }
  else{
    digitalWrite(LeftIn_1,MOTOR_REV);//this patter means motors go backward
    digitalWrite(LeftIn_2,MOTOR_FWD);
  }
  analogWrite(LeftPWM,speed);
}



void motorRight(int speed, bool forward){
  if(speed > 255){//if input speed is over limit set to max
    speed = 255;
  }
  if(speed < 0){//if input speed is under limit set to min
    speed = 0;
  }
  if(forward){
    digitalWrite(RightIn_1,MOTOR_FWD);//this patter means motors go forward
    digitalWrite(RightIn_2,MOTOR_REV);
  }
  else{
    digitalWrite(RightIn_1,MOTOR_REV);//this patter means motors go backward
    digitalWrite(RightIn_2,MOTOR_FWD);
  }
  analogWrite(RightPWM,speed);
}