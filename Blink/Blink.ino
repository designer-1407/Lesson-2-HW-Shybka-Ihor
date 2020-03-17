
void setup() {
  pinMode(1, OUTPUT);//красный
  pinMode(2, OUTPUT);//желтый
  pinMode(3, OUTPUT);//зеленый
}


void loop() {
  digitalWrite(1, HIGH);   
  delay(3000);                       
  digitalWrite(1, LOW);   
  digitalWrite(2, HIGH); 
  delay(1000);
  for(int i = 0; i<4; i++){
      digitalWrite(2, LOW);   
      delay(500);                       
      digitalWrite(2, HIGH);   
    } 
   digitalWrite(2, LOW);
   digitalWrite(3, HIGH); 
   delay(3000);                       
   digitalWrite(3, LOW);
}
