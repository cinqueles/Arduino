/*  Author: Ismael Morilla
    E-mail: i.morilla.orellana@gmail.com
    Description: Serialización prueba emisor
    Date: Noviembre 2016*/

#include <SoftwareSerial.h>   
#define envio 11
SoftwareSerial puertonuevo (10,11); // Receptor, emisor
 
 void setup() 
 {
  puertonuevo.begin(9600);
  pinMode(envio,OUTPUT);
 }

void loop()
{
  puertonuevo.write(1);
  delay (1000);
  puertonuevo.write(0);
  delay (1000);
}
