//Zad 2 - Pracownik
//Lucjan Izworski
//*****************
#include <iostream>
using namespace std;
//Zaimplementuj struktur� Pracownik. Powinna zawiera� pola: imie, nazwisko, placa.
struct Pracownik
    {
        string imie;
        string nazwisko;
        int placa;
    };
//Zaimplementuj funkcj� wypisuj�c� dane pracownika - struktura przes�ana do funkcji poprzez wska�nik.
void wypisz (Pracownik * p)
    {
        cout << endl;
        cout << "Imie : "<< p ->imie << endl;
        cout << "Nazwisko : "<< p ->nazwisko << endl;
        cout << "Placa : "<< p ->placa << endl;
    }
//Zaimplementuj funkcj� wypisuj�c� dane pracownika - struktura przes�ana do funkcji poprzez referencj�.
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
   //utw�rz obiekt klasy Pracownik
   Pracownik p1;
   //wczytaj i wypisz dane Pracownika
   wczytaj(&p1);
   wypisz(p1);
}
