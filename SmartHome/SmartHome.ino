#include <Servo.h>
Servo myservo;
#define PIN_PIR 2//выход с датчиком
#define PIN_LED 13//реле с освещением

const int analogInPin = A0;
 int sensorValue = 0;


void setup() {
  pinMode(PIN_PIR, INPUT);//установка пина на чтение
  pinMode(PIN_LED, OUTPUT);//установка пина на вывод
  Serial.begin(9600);

  myservo.attach(9);
 
  
}

void loop() {
  int pirVal = digitalRead(PIN_PIR);//опрос датчика движения
  if (pirVal)//если датчик сработал
  {
    digitalWrite(PIN_LED, HIGH);//вклчаем свет
    
  }

  sensorValue = analogRead(analogInPin);//опрос датчика тепла
  Serial.println("Полученные с датчика данные: ");
  Serial.println(sensorValue);
  Serial.println("");
  if(sensorValue >= 500){   
  myservo.write(90);                  
  }
  delay(100);    
  
 }
