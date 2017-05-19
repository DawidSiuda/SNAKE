#include <iostream>
#include <string>
#include <conio.h>  // getch()

using namespace std;
/////////////////////// definicja klasy  ////////////////////////////
class Snake
{
    int szybkosc;
    int GORA;
    int DOL;
    int PRAWO;
    int LEWO;
    public:
    void Szybkosc();
    void Sterowanie();
};
