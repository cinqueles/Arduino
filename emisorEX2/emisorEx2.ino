/*  Author: Ismael Morilla
    E-mail: i.morilla.orellana@gmail.com
    Description: Enviar cadenas de bit 101010... ininterrupidamente
    Date: Noviembre 2016*/

void setup(){
  pinMode(3,OUTPUT);
  digitalWrite(3,LOW);
}

void loop(){
  /*El 0 tendrá un valor de 0,5 segundos
  El 1 tendrá un valor de 1 segundo*/
  /*En el pin digital 3 escribe HIGH*/
  digitalWrite(3,HIGH);
  /*Pausa de medio segundo*/
  delay(50);
  /*En el pin digital 3 escribe LOW*/
  digitalWrite(3,LOW);
  delay(50);
  digitalWrite(3,HIGH); 
  /*Pausa de 1 segundo*/
  delay(100);
  digitalWrite(3,LOW); 
  delay(100);
}
