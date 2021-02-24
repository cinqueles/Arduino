/*  Author: Ismael Morilla
    E-mail: i.morilla.orellana@gmail.com
    Description: Serialización de bits emisor
    Date: Noviembre 2016*/

#define TX 5
#define INT 4
/*variable ms pequeña que se usa en programacion 'char'*/
char dato, mascara;
int bit=0;
int i=0;
int estado=0;

void setup(){
  dato='a';
  pinMode(TX,OUTPUT);
  mascara=1;
  delay(1000);
}

void loop(){
  for (i=0; i<8; i++)
  {
    /*Rota el valor de dato a la derecha el valor de 'i'*/
    dato=dato>>i;
    /*Realiza el bit&bit con el valor de la variable 'dato' y 'mascara'*/
    bit=dato&mascara;
    digitalWrite(TX,bit);
    estado=!estado;
    digitalWrite(INT,estado);
    /*Pausa el programa la candidad de tiempo indicado en 
    los microsegundos indicados entre parentesis*/
    delayMicroseconds(100);
  }
  dato='a';
}
