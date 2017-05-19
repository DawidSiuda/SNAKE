#include <iostream>
#include "ramka.h"
#include "snake.h"
#include "pole.h"

using namespace std;

int main()
{
	
    Ramka R;
    R.szerokosc();
    R.wysokosc();
    
	Pole P; // zmieni³em pozycje poto aby gdy tworzysz pole by³o ju¿ wiadomo jakie rozmiary bedzie mia³o 
	P.ustawWymiary(R.dajSzerokosc(),R.dajWysokosc());// funkcja ta ustala zmienne SZ i WY w obiekcji P (pierwszy parametr to szerokosc ,drugi to wysokosc)
	
    Snake Waz;
    Waz.Szybkosc();
    Waz.Sterowanie();
    
    R.Rysowanie();
    P.pole_puste();

    return 0;
}
