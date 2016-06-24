/*
  esta library está simulando um temporizador TON tendo um bit entrado e um bit saindo, com o setpoint do tempo
  sem dalay ou seja, o program não trava
*/
#ifndef Crescer_h
#define Crescer_h

#include "Arduino.h"

class Tempora
{
  public:
    Tempora(int indice);
	Tempora();
    void defiSP(unsigned long Setpoint);
	boolean Saida(boolean entrada);

	int Saida(int entrada);


	unsigned long _Setpoint;
	boolean setaIni;
	unsigned long tempoInicial;
	unsigned long CV;

private:
    int _indice;

};

#endif