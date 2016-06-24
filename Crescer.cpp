/*
 
*/

#include "Arduino.h"
#include "Crescer.h"

// este estou usando somente para criar a instância 
Tempora::Tempora(int indice)
{
  _indice = indice;
}


Tempora::Tempora(){}


//Este aqui serve para definir o Setpoint
void Tempora::defiSP(unsigned long Setpoint)
{
	_Setpoint=Setpoint;
}
// esta é a função principal que quando ligada a entrada aguarda o tempo do setpoint para ligar a saida e ainda
// demonstra o tempo decorrido
boolean Tempora::Saida(boolean entrada)
{
 
   if (entrada==1) 
    {  
     if (setaIni==0)
       {
         tempoInicial=millis();
         setaIni=1; 
       }
     
     if (millis() > tempoInicial + _Setpoint)
		 {
		 return 1;

		}
     else 
		{
			CV = millis() - tempoInicial; //Tempo decorrido
			return 0;
		
		}
     }
  else
   { 
     setaIni=0;
	 CV=0;
     return 0;

	}

}


int Tempora::Saida(int entrada)
{
 
   if (entrada==1) 
    {  
     if (setaIni==0)
       {
         tempoInicial=millis();
         setaIni=1; 
       }
     
     if (millis() > tempoInicial + _Setpoint)
		 {
		 return 1;

		}
     else 
		{
			CV = millis() - tempoInicial; //Tempo decorrido
			return 0;
		
		}
     }
  else
   { 
     setaIni=0;
	 CV=0;
     return 0;

	}

}