const int input = 5;
const int output=11;
 
int value = 0;
 
void setup() {
  Serial.begin(9600);
  pinMode(input, INPUT);
  pinMode(output,OUTPUT);
}
 
void loop(){
  value = digitalRead(input); 
   
  if (value == HIGH) {
      delayMicroseconds(5185.063); 
      digitalWrite(output, HIGH); 
      delayMicroseconds(500);
      digitalWrite(output, LOW);
      delayMicroseconds(7833.137);
      digitalWrite(output, HIGH); 
      delayMicroseconds(500);
      digitalWrite(output, LOW);
  }
  
  else {
      
      digitalWrite(output, LOW); 
      
  }

}
