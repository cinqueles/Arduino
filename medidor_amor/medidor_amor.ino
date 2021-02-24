/*  Author: Ismael Morilla
    E-mail: i.morilla.orellana@gmail.com
    Date: Febrero 2017*/
    
const int sensorPin= A0;
#define LED1 2
#define LED2 3
#define LED3 4 
void setup()
{
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}
 
void loop()
{
  int value = analogRead(sensorPin);
  float millivolts = (value / 1023.0) * 5000;
  float celsius = millivolts / 10; 
  Serial.println(celsius);
  delay(1000);
  if (celsius>=0 && celsius<2){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    };
  if (celsius>3 && celsius<20){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    }
  if (celsius<40 && celsius>20){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
    };
  if(celsius>40){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    };

}
