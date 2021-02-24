/*  Author: Ismael Morilla
    E-mail: i.morilla.orellana@gmail.com
    Description: Encender o apagar un LED por un pulsador
    Date: Noviembre 2016*/
#define LED 13
#define PULSADOR 12
/*Se inicializa la variable 'valor' a 0 para evitar confusiones de
si está encendido o no*/
int valor=0;

void setup()
{
  /*Abre el puerto serie y fija la velocidad en baudios*/
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  /*El pulsador solo tiene dos valores HIGH y LOW*/
  pinMode(PULSADOR,INPUT);
}

void loop()
{
  /*Lee el valor del pulsador*/
  valor=digitalRead(PULSADOR);
  /*Dependiendo del valor del pulsador, si está HIGH encenderá el LED
  si está LOW lo apagará.*/
  digitalWrite(LED,valor);
}

