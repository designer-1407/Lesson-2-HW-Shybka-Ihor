void setup() {

  Serial.begin(9600);


}

void loop() {

  for(int i = 1; i<=100; i++){
  Serial.println(i);
  Serial.println("");
  delay(50);
    } 

 }
