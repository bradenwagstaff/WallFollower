#include "sonicSensor.h"

// defines variables
long duration; // variable for the duration of sound wave travel
double distanceLEFT; // variable for the distance measurement
double distanceFRONT; // variable for the distance measurement
double distanceRIGHT; // variable for the distance measurement

void setupSensors(){
  pinMode(trigPinLEFT, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPinLEFT, INPUT); // Sets the echoPin as an INPUT

  pinMode(trigPinFRONT, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPinFRONT, INPUT); // Sets the echoPin as an INPUT

  pinMode(trigPinRIGHT, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPinRIGHT, INPUT); // Sets the echoPin as an INPUT
  // Serial.println("Kaboom");
}

double getDistanceLEFT(){
    // Clears the trigPin condition
  digitalWrite(trigPinLEFT, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPinLEFT, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinLEFT, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPinLEFT, HIGH);
  // Calculating the distance
  distanceLEFT = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  // Serial.print("DistanceLEFT: ");
  // Serial.print(distanceLEFT);
  // Serial.println(" cm");
  return distanceLEFT;
}

double getDistanceFRONT(){
    // Clears the trigPin condition
  digitalWrite(trigPinFRONT, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPinFRONT, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinFRONT, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPinFRONT, HIGH);
  // Calculating the distance
  distanceFRONT = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
//   Serial.print("DistanceFRONT: ");
//   Serial.print(distanceFRONT);
//   Serial.println(" cm");
  return distanceFRONT;
}

double getDistanceRIGHT(){
    // Clears the trigPin condition
  digitalWrite(trigPinRIGHT, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPinRIGHT, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinRIGHT, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPinRIGHT, HIGH);
  // Calculating the distance
  distanceRIGHT = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
//   Serial.print("DistanceRIGHT: ");
//   Serial.print(distanceRIGHT);
//   Serial.println(" cm");
  return distanceRIGHT;
}
