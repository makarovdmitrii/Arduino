unsigned long last_time;
void setup() {
  // put your setup code here, to run once:
  /*Serial.begin(9600);
  delay(1000);
  Serial.println("hola");
  delay(1000);
  Serial.println("hola");
  delayMicroseconds(1000);
  Serial.println("microseconds");*/
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(millis() - last_time > 5000){
    last_time = millis();
    Serial.println("1 time in 5 seconnds");
    }
}
