//Lucjan Izworski
//Zadanie 1 - klient.
#include <iostream>
using namespace std;
//1.      Zaimplementuj strukturê Klient. Powinna zawieraæ pola: imie, nazwisko, miejscowoœæ, telefon.
struct klient
    {
        string imie;
        string nazwisko;
        string miejscowosc;
        int telefon;
    };
//2.      Zaimplementuj funkcje wypisz wypisujaca dane klienta na ekranie.
void wypisz(klient k)
    {
        cout << endl;
        cout << "imie : "<< k.imie << endl;
        cout << "nazwisko : "<< k.nazwisko << endl;
        cout << "miejscowosc : "<< k.miejscowosc << endl;
        cout << "telefon : "<< k.telefon << endl;
    }
//3.      Zaimplementuj funkcje wczytaj wczytujaca dane klienta - struktura przeslana do funkcji poprzez wskaznik.
void wczytaj(klient * k)
    {
        cout << endl;
        cout << "Podaj imie : ";
        cin >> k ->imie;
        cout << "\nPodaj nazwisko : ";
        cin >> k ->nazwisko;
        cout << "\nPodaj miejscowosc : ";
        cin >> k ->miejscowosc;
        cout << "\nPodaj numer telefonu : ";
        cin >> k ->telefon;
    }
//4.      Zaimplementuj drugą (przeładowaną) funkcję o nazwie wczytaj wczytującą dane pracownika – struktura Klient powinna przesłana do funkcji poprzez referencję.
void wczytaj(klient & k)
    {
        cout << endl;
        cout << "Podaj imie : ";
        cin >> k.imie;
        cout << "\nPodaj nazwisko : ";
        cin >> k.nazwisko;
        cout << "\nPodaj miejscowosc : ";
        cin >> k.miejscowosc;
        cout << "\nPodaj numer telefonu : ";
        cin >> k.telefon;
    }
//6.      W funkcji utwórz obiekt klasy Klient wczytaj dane klienta wykorzystując funkcję wczytaj pobierającą klienta przez referencję. Wypisz dane tego pracownika.
void utworz (klient & k)
    {
        wczytaj(k);
        wypisz (k);
    }
int main ()
{
    klient k1;
    utworz (k1);
//7.      Utwórz drugiego klienta i wczytaj dane wykorzystując funkcję wczytaj pobierającą pracownika przez wskaźnik. Wypisz dane tego kienta.
    klient k2;
    wczytaj(&k2);
    wypisz(k2);
//8.      Operatorem new utwórz trzeciego pracownika i wskaźnik który go wskazuje. Wczytaj dane klienta i wypisz je na ekranie.
    klient * k3 =new klient;
    wczytaj(k3);
    wypisz(*k3);
//9.      Usuń ostatniego pracownika wykorzystując operator delete.
    delete k3;
}
