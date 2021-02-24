/*  Author: Ismael Morilla
    E-mail: i.morilla.orellana@gmail.com
    Description: Mandar 1 y 0 mediante el reloj
    Date: Noviembre 2016*/
/*Inicialización de la librería TimerOne*/    
#include <TimerOne.h>

int signal=0;

void setup()
{
  /*Se debe utilizar antes de llamar a otros métodos de Timer1. 
  opcionalmente se puede especificar el período del temporizador en microsegundos
  de forma predeterminada está 1 segundo.
  Timer1.initialize(período)*/
  Timer1.initialize(5000);
  /*llama a la función en el intervalo especificado en microsegundos
  Timer1.aatachInterrupt(función,período)*/
  Timer1.attachInterrupt(sreloj);
  pinMode(4,OUTPUT);
}

void loop()
{
}

/*Especificar la función de la variable 'sreloj' llamada en el void setup*/
void sreloj()
{
  if (signal==0)
  /*Escribe un valor en un pin digital: HIGH ó LOW*/
    digitalWrite(4,LOW);
  else 
    digitalWrite(4,HIGH);
  /* != significa comparacion
  =! significa la negacion. Ej: a=!a significa que el valor de a que era 0 
  el nuevo valor sera 1.*/  
  signal=!signal;
}

