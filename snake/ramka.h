#include <iostream>
#include <string>
#include <cstdlib>   //system "CLS"

using namespace std;
/////////////////////// definicja klasy  ////////////////////////////
class Ramka
{//friend class Pole;
    int SZ;
    int WY;
public:
    void szerokosc();
    void wysokosc();
    void blad_wysokosc();
    void blad_szerokosc();
    void Rysowanie();
    
    int dajSzerokosc();// funkcja zwraca wartosc zmiennej SZ
    int dajWysokosc();// funkcja zwraca wartosc zmiennej WY


};
