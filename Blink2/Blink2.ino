
void setup() {
  pinMode(1, OUTPUT);//красный
  pinMode(2, OUTPUT);//желтый
  pinMode(3, OUTPUT);//зеленый
  }


void loop() {
  
     for(int i = 1; i<=3; i++){
      digitalWrite(i, HIGH);   
      delay(100);                       
      digitalWrite(i, LOW); 
      delay(100);  
    } 
     for(int i = 3; i>=0; i--){
      digitalWrite(i, HIGH);   
      delay(100);                       
      digitalWrite(i, LOW); 
      delay(100);  
    } 
}
