/*  Author: Ismael Morilla
    E-mail: i.morilla.orellana@gmail.com
    Description: Mandar 1 y 0 mediante el reloj
    Date: Noviembre 2016*/
   
#include <TimerOne.h>

int signal=0;

void setup()
{
  Timer1.initialize(50000);
  Timer1.attachInterrupt(sreloj);
  pinMode(4,OUTPUT);
}

void loop()
{
}

void sreloj()
{
  if (signal==0)
    digitalWrite(4,LOW);
  else 
    digitalWrite(4,HIGH);  
  signal=!signal;
}
