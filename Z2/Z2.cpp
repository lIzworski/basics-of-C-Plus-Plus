//Zad 2 - Pracownik
//Lucjan Izworski
//*****************
#include <iostream>
using namespace std;
//Zaimplementuj strukturê Pracownik. Powinna zawieraæ pola: imie, nazwisko, placa.
struct Pracownik
    {
        string imie;
        string nazwisko;
        int placa;
    };
//Zaimplementuj funkcjê wypisuj¹c¹ dane pracownika - struktura przes³ana do funkcji poprzez wskaŸnik.
void wypisz (Pracownik * p)
    {
        cout << endl;
        cout << "Imie : "<< p ->imie << endl;
        cout << "Nazwisko : "<< p ->nazwisko << endl;
        cout << "Placa : "<< p ->placa << endl;
    }
//Zaimplementuj funkcjê wypisuj¹c¹ dane pracownika - struktura przes³ana do funkcji poprzez referencjê.
void wypisz (Pracownik & p)
    {
        cout << endl;
        cout << "Imie : "<< p.imie << endl;
        cout << "Nazwisko : "<< p.nazwisko << endl;
        cout << "Placa : "<< p.placa << endl;
    }
void wczytaj(Pracownik * p)
    {
        cout << endl;
        cout << "Podaj imie : ";
        cin >> p->imie;
        cout << "\nPodaj nazwisko : ";
        cin >> p->nazwisko;
        cout << "\nPodaj place : ";
        cin >> p->placa;
    }
int main ()
{
   //utwórz obiekt klasy Pracownik
   Pracownik p1;
   //wczytaj i wypisz dane Pracownika
   wczytaj(&p1);
   wypisz(p1);
}
