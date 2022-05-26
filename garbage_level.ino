int trigpin = 4;// Defines Trig and Echo pins of the Ultrasonic Sensor
int echopin = 3;
int led2 = 13;
int led3 = 12;
int led4 = 11;
int led5 = 10;
int led6 = 9;
int x;
float duration;
float cm;
void setup(){
pinMode(trigpin, OUTPUT);// Sets the trigPin as an Output
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(echopin, INPUT);
}
void loop(){
digitalWrite(trigpin, LOW);
delay(2);
digitalWrite(trigpin, HIGH);
delayMicroseconds(10);
digitalWrite(trigpin, LOW);
duration = pulseIn(echopin, HIGH);// Reads the echoPin, returns the sound wave travel time in microseconds
cm = 0.034*(duration/2);
x = cm;
if(x>=50){
digitalWrite(led6, LOW);
digitalWrite(led5, HIGH);
digitalWrite(led4, LOW);
digitalWrite(led3, LOW);
digitalWrite(led2, LOW);
}
else if(x>=40 && x<50){
digitalWrite(led6, LOW);
digitalWrite(led5, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led3, LOW);
digitalWrite(led2, LOW);
}
else if(x>=30 && x<40){
digitalWrite(led6, LOW);
digitalWrite(led5, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led2, LOW);
}
else if(x>=20 && x<30){
digitalWrite(led6, LOW);
digitalWrite(led5, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led2, HIGH);
}
else if(x<20)
{
digitalWrite(led6, HIGH);
digitalWrite(led5, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led2, HIGH);
}
else{
digitalWrite(led5,HIGH);
digitalWrite(led6, LOW);
digitalWrite(led4, LOW);
digitalWrite(led3, LOW);
digitalWrite(led2, LOW);
}
}
