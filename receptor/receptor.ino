/*  Author: Ismael Morilla
    E-mail: i.morilla.orellana@gmail.com
    Description: Receptor, lee la cadena de 1 y 0 y enciende el LED
    Date: Noviembre 2016*/
    
int cont=0;
int estadoanterior=0;
int a;
void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT);
  attachInterrupt(0,cuenta,RISING);
  pinMode(13,OUTPUT);
}

void loop()
{
  if(a!=estadoanterior)
    {
      if(a==1)
        Serial.println("LED ENCENDIDO");
      else
        Serial.println("LED APAGADO");
        estadoanterior=a;
      }
}

void cuenta()
{
  if(cont==10)
  {
    a=!a;
    cont=0;
  }
  else
    cont++;
    digitalWrite(13,a);
}

