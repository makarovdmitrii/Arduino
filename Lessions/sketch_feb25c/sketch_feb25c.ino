boolean butt_flag = 0;
boolean butt;
boolean led = false;
int contador = 0;
void setup() {
  pinMode(3, INPUT_PULLUP);
  
  
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
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
  /*butt = !digitalRead(3);

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
    }*/
    
    //boolean boton = !digitalRead(3);
    boolean boton = true;
    boolean bandera = false;
    if(boton == true && bandera == false){
      
      bandera = true;
      //led = !led;
      contador++;
        if(contador >= 1){
            pinMode(7, OUTPUT);
            
          }
          if(contador >= 2){
            pinMode(8, OUTPUT);
            
           }
           if(contador >= 3){
            pinMode(9, OUTPUT);
            
           }
           if(contador >= 4){
            pinMode(10, OUTPUT);
           }
           if (contador >= 5){
              pinMode(12, OUTPUT);
           }
            if (contador >= 6){
              pinMode(13, OUTPUT);
           }
            if (contador >= 7){
              pinMode(7, LOW);
           }
            if (contador >= 8){
              pinMode(8, LOW);
           }
            if (contador >= 9){
              pinMode(9, LOW);
           }
           if (contador >= 10){
              pinMode(10, LOW);
           }
           if (contador >= 11){
              pinMode(12, LOW);
           }
           if (contador >= 12){
              pinMode(13, LOW);
              contador=0;
           }
          
        
        delay(150);
      }

      if(boton == false && bandera == true){
        bandera = false;
      
        }
  
}
