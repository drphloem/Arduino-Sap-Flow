#include <SoftwareSerial.h>
#include <Wire.h>

void setup() {
pinMode(A5,OUTPUT);
Serial.begin(9600);

}
// declare variables with appropriate precision
int upst;
int downst;
double US1;
double DS1;

void loop() {
  sensorRead();
  Serial.println(upst, 4);
  Serial.println(downst, 4);
}

void sensorRead(){
  digitalWrite(A5, HIGH);
  delay(500);
  upst = analogRead(A3);
  downst = analogRead(A1);
  delay(500);
  digitalWrite(A5,LOW);

US1 = upst*(5.0/1023.0);
DS1 = downst*(5/1023.0);
  
}

