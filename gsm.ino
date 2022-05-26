#include <SoftwareSerial.h>        //Create software serial object to communicate with SIM900
SoftwareSerial mySerial(7, 8);    //SIM900 Tx & Rx is connected to Arduino 7 & 8
void setup(){
  Serial.begin(9600);                   //Begin serial communication with Arduino and Arduino IDE 
  mySerial.begin(9600);             //Begin serial communication with Arduino and SIM900
  Serial.println("Initializing..."); 
  delay(1000);
mySerial.println("AT");         //Handshaking with SIM900
  updateSerial();
  mySerial.println("AT+CMGF=1"); // Configuring TEXT mode
  updateSerial();
  mySerial.println("AT+CMGS=\"+916385273501\""); //phone number to sms
  updateSerial();
  mySerial.print("Garage level indication message:The garbage level is almost full. Do take appropriate action");           //text content
  updateSerial();
  mySerial.write(26);
}
void updateSerial(){
  delay(500);
  while (Serial.available()) {
mySerial.write(Serial.read()); //Forward what Serial received to Software Serial Port
  }
  while(mySerial.available()) {
    Serial.write(mySerial.read()); //Forward what Software Serial received to Serial Port
  }
}
