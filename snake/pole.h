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
    void ustawWymiary(int,int); // stworzyłem funkcje (którajako paremetry bedzie dostawałą dwie liczby int)
								// bedzie ona modyfikowała zmienne SZ i WY 

};
