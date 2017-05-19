#include <iostream>
#include <string>
#include "ramka.h"
using namespace std;

void Ramka::blad_szerokosc()
{
    cout <<"Podales zla liczbe podaj poprawna albo zostanie wpisana domyslna"<< endl;
        cin>>SZ;
        if(SZ<10 || SZ>38) SZ = 15;

}
void Ramka::blad_wysokosc()
{
    cout <<"Podales zla liczbe podaj poprawna albo zostanie wpisana domyslna"<< endl;
        cin>>WY;
        if(WY<10 || WY>45) WY = 20;

}
void Ramka::szerokosc()
	 {
        cout << "Podaj szerokosc planszy od 10 do 38:" << endl;
        cin >> SZ;
        if (SZ<10 || SZ>38) blad_szerokosc();

	 }
void Ramka::wysokosc()
	 {
        cout << "Podaj wysokosc planszy od 10 do 45:" << endl;
        cin >> WY;
        if (WY<10 || WY>45) blad_wysokosc();

	 }
void Ramka::Rysowanie()
{
    system("CLS"); // oczyszczenie ekranu

       ////gorna ramka////////
    for(int i=0; i<=SZ ; i++)
    {
        cout << "--";
    }

    for(int i=0; i<WY; i++)
    {
        cout << endl << "|";   //lewa ramka
            for(int j=0; j<SZ; j++)

                {
                    cout <<"  ";
                }
                cout << "|";   //prawa ramka
    }
    cout << endl;
       ////dolna ramka////
    for(int i=0; i<=SZ; i++)
    {
        cout << "--";
    }

}
int Ramka::dajSzerokosc()
{
	return SZ;
}

int Ramka::dajWysokosc()
{
	return WY;
}
