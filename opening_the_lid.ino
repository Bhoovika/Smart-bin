#include <Servo.h>
Servo servoMain; // Define our Servo
int trigpin = 4;   // Defines Trig and Echo pins of the Ultrasonic Sensor
int echopin = 3;
int led = 13;
int distance;
float duration;
float cm;
void setup(){
servoMain.attach(5); // servo on digital pin 5
pinMode(trigpin, OUTPUT);//  trigPin as an Output
pinMode(led, OUTPUT);// led as an Output
pinMode(echopin, INPUT);// echopin as an Input
}
void loop(){
digitalWrite(trigpin, LOW);
delay(2);
digitalWrite(trigpin, HIGH);
delayMicroseconds(10);
digitalWrite(trigpin, LOW);
duration = pulseIn(echopin, HIGH);// returns the travel time of the sound wave 
cm = 0.034*(duration/2);
distance = cm;
if(distance<40){
digitalWrite(led, HIGH);
servoMain.write(180);  // Turn Servo back to center position (90 degrees)
delay(3000);
}
else{
digitalWrite(led,LOW);
servoMain.write(0);
delay(50);
}
}
