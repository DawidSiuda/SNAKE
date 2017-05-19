#include <iostream>
#include <string>
#include "pole.h"
#include "ramka.h"
using namespace std;


void Pole::pole_puste()
{

    ////wartosc p bedzie oznaczac pole puste////
    for(int i=0; i<WY; i++)
    {
        for(int j=0; j<SZ; j++)
        {
            pole[j][i]='p';

        }
    }
    
    cout << endl << " zmienna SZ w obiekcie klasy Pole ma wartosc: " << SZ <<endl; // wypisanie wartosci  SZ aby upewnic sie ¿e na pewno zosta³a poprawnie przekazana
    cout << " zmienna WY w obiekcie klasy Pole ma wartosc: " << WY <<endl;// wypisanie wartosci WY  aby upewnic sie ¿e na pewno zosta³a poprawnie przekazana
}

void Pole::ustawWymiary(int x,int y)
{
	SZ = x;
	WY = y;
}
