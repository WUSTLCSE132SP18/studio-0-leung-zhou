void setup() {
    Serial.begin(9600);
    pinMode(13,OUTPUT);

}

void loop() {
//  delay(100);
  
  double time = millis();
  digitalWrite(13, HIGH);       
  delay(500);                  
  digitalWrite(13, LOW);      
  delay(500);
   Serial.print(time/1000.0);
   Serial.println("sec have elapsed");
}
