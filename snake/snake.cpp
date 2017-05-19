#include <iostream>
#include <string>
#include "snake.h"


using namespace std;

void Snake::Szybkosc()
{
    cout << "podaj szybkosc od 1 do 10" << endl;
    cin >> szybkosc;
    if(szybkosc<1) szybkosc=1;
    if(szybkosc>10) szybkosc=10;
}
void Snake::Sterowanie()
{
    cout <<"Nacisnij klawisze ktorymi bedziesz sterowal"<<endl;
    cout <<"GORA"<<endl;
    GORA=getch();
    if(GORA==224)GORA+=getch();
    if(GORA==0)GORA-=getch();

    cout <<"DOL"<<endl;
    DOL=getch();
    if(DOL==224)DOL+=getch();
    if(DOL==0)DOL-=getch();

    cout <<"PRAWO"<<endl;
    PRAWO=getch();
    if(PRAWO==224)PRAWO+=getch();
    if(PRAWO==0)PRAWO-=getch();

    cout <<"LEWO"<<endl;
    LEWO=getch();
    if(LEWO==224)LEWO+=getch();
    if(LEWO==0)LEWO-=getch();

}
