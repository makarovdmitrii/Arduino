boolean butt_flag = 0;
boolean butt;
boolean led = false;
void setup() {
  // put your setup code here, to run once:
  /*pinMode(A5, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);*/
  pinMode(A4, INPUT_PULLUP);
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(13, HIGH);
  digitalWrite(12, 1);
  digitalWrite(A5, 0);*/  

  /*boolean button1 = !digitalRead(A4);
  boolean button2 = !digitalRead(13);

  if(button1 == 1) digitalWrite(13,1);
  else digitalWrite(13,0);
  Serial.print(" boton uno :"); Serial.print(button1);
  Serial.print(" boton dos :"); Serial.println(button2);*/
  butt = !digitalRead(3);

  if(butt == 1 && butt_flag == 0){
    butt_flag = true;
    Serial.println("Presione");
    led = !led;
    digitalWrite(4, led);
    //delay(50);
    }
  if(butt == 0 && butt_flag == 1){
    butt_flag = false;
    Serial.println("Solte");
    }
  
}
