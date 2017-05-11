void setup() {
  // put your setup code here, to run once:
  Serial1.begin(115200);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial1.available() > 0){
    while(Serial1.available() > 0){
      Serial.print((char)Serial1.read());
    }
  }
  if(Serial.available() > 0){
    while(Serial.available() > 0){
      //Serial1.print((char)Serial.read());
      char x = Serial.read();
      if (x == '*'){
        Serial1.print((char)26);
      }
      else{
        Serial1.print(x);
      }
      
    }
  }
}
