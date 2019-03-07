//int pushButton = 7;
int motorControl = 9;

void setup() {
//   pinMode(pushButton, INPUT);
   pinMode(motorControl, OUTPUT);
}

void loop() {
  Serial.println("STARTED");
    digitalWrite(motorControl, 1);
  while(1){
    
    Serial.print("STatus: ");
//    Serial.println(digitalRead(pushButton));
  
//    if (digitalRead(pushButton) == HIGH) {
//      Serial.println("Pressed Down");
//    }
  }
}
