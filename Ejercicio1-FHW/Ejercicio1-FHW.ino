/*  Author: Ismael Morilla
    E-mail: i.morilla.orellana@gmail.com
    Description: Actuar sobre led según la entrada
    Date: Noviembre 2016*/

// inicializar las variables
#define LED 13
char letra;
void setup()
 {
  //Abre el puerto serie y fija la velocidad en baudios
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop() 
{
  /*Devuelve un entero con el número de bytes disponibles para leer
  desde el buffer serie*/
  if (Serial.available()>0)
  //Lee o captura un byte desde el puerto serie
  letra=Serial.read();
  
  //Si introduces 'a' se enciende o apaga el led cada 1 segundo
  if(letra=='a')
  {
    digitalWrite(LED,HIGH);
    delay(1000);
    digitalWrite(LED,LOW);
    /*Hace una pausa en el programa de la cantidad de tiempo que 
    se indica entre parentesis. Se mide en milisegundos. 1000 milisegundos es 1 segundo*/
    delay(1000);
    }

   //Si introduces 'b' se enciende o apaga el led cada 2 segundo
   if(letra=='b')
    {
    digitalWrite(LED,HIGH);
    delay(2000);
    digitalWrite(LED,LOW);
    delay(2000);
    }

    //Si introduces 'c' se enciende o apaga el led cada 3 segundo
     if(letra=='c')
    {  
    digitalWrite(LED,HIGH);
    delay(3000);
    digitalWrite(LED,LOW);
    delay(3000);
    }

    //Si introduces 'd' se enciende o apaga el led cada 4 segundo
      if(letra=='d')
     {
    digitalWrite(LED,HIGH);
    delay(4000);
    digitalWrite(LED,LOW);
    delay(4000);
    }
    
   //Si introduces 'e' se apaga el LED
   if(letra=='e')
   {
    digitalWrite(LED,LOW);
    }

    //Si introduces 'f' se enciende el LED
     if(letra=='f')
   {
    digitalWrite(LED,HIGH);
    }
 }
 

