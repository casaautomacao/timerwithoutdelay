#include <Crescer.h>

Tempora temp1;// o número entre parenteses é um indice necessário e até tem outra maneira mas não precisa
Tempora temp2;
Tempora tempImpr;

boolean statusEntr2=false;
boolean statusEntr3=false;

boolean Imprime=false;

void setup()
{
  Serial.begin(9600);
  temp1.defiSP(2500);
  temp2.defiSP(5000);
  tempImpr.defiSP(200);
  pinMode(2, INPUT_PULLUP);
   pinMode(3, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  statusEntr2 = bitRead(~digitalRead(2),0);
   statusEntr3 = bitRead(~digitalRead(3),0);  
  digitalWrite(13,temp1.Saida(statusEntr3));
  digitalWrite(12,temp2.Saida(statusEntr2));


Imprime=tempImpr.Saida(1);
  
if (Imprime==true)
  {
     Serial.print("Tempo 1: ");
     Serial.print(temp1.CV);
     Serial.print(" ; Tempo 2: ");
     Serial.println(temp2.CV); 
    Imprime=tempImpr.Saida(0);
 
  }
}
