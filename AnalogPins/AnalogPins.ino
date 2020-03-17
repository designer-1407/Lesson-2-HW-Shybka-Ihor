#include <Servo.h>
Servo myservo;
const int analogInPin = A0;
 int sensorValue = 0;


void setup() {

  Serial.begin(9600);

  myservo.attach(9);
 
  
}

void loop() {
  sensorValue = analogRead(analogInPin);
  Serial.println("Полученные с датчика данные: ");
  Serial.println(sensorValue);
  Serial.println("");
  if(sensorValue >= 500){   
  myservo.write(90);                  
  }
  delay(100);    
  
 }
