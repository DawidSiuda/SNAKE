#include <iostream>
#include <string>

using namespace std;
/////////////////////// definicja klasy  ////////////////////////////
class Ramka;

class Pole
{  // friend class Ramka;
    char pole[38][45];
    int wspolzednaXweza;
    int wspolzednaYweza;
    int SZ;
    int WY;
    
public:
    void pole_puste();
    void ustawWymiary(int,int); // stworzy³em funkcje (którajako paremetry bedzie dostawa³¹ dwie liczby int)
								// bedzie ona modyfikowa³a zmienne SZ i WY 

};
