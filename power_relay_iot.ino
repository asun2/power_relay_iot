char input;
#define pwr_pin  2
void setup() {
    pinMode(pwr_pin, OUTPUT);
    
}
 
void loop() {
  if(digitalRead(pwr_pin) == LOW){
      digitalWrite(pwr_pin, HIGH);
      delay(1000);
  }
  else{
      digitalWrite(pwr_pin, LOW);
      delay(1000);
  }
   
}
