/*  Author: Ismael Morilla
    E-mail: i.morilla.orellana@gmail.com
    Description: Medir cantidad de luz con LDR y encender el LED cuando haya
                 poca luz.
    Date: Noviembre 2016*/
int cluz=0;
#define LED 13


void setup()
{
  /*Abre el puerto serie y fija la velocidad en baudios*/
  Serial.begin(9600);
  pinMode (LED,OUTPUT); 
}

void loop()
{
  /*Lee el valor del pin analógico especificado
  en este caso es el A0, no se pone la A, solo el número*/
  cluz=analogRead(0);
    /*Pinta o imprime en pantalla */
    Serial.print("Cantidad Luz ");
    /*Imprime datos al puerto serie como texto legible el valor de la variable
    en este caso sería la cantidad de luz que se va guardando en la variable cluz*/
    Serial.println(cluz);
    /*Cada 1'5 segundo se va a imprimir la cantidad de luz que recibe el LDR*/
    delay(1500);
    /*Si la cantidad de luz es menor de 400 encenderá el LED, sino se quedará apagado*/
    if(cluz<400)
    {
      digitalWrite(LED,HIGH);
    }
    else
    {
      digitalWrite(LED,LOW);
    }


}
