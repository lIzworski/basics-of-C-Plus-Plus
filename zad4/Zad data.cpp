#include <iostream>
using namespace std;

/*
    Zdefiniuj klas� Data zawieraj�c�:
    ---prywatne dane sk�adowe:
    -dzien,
    -miesiac,
    -rok
    */
    class Data
    {
        int dzien;
        int miesiac;
        int rok;
        /*
    publiczne funkcje sk�adowe:
    wpisz -umo�liwiaj�c� wpisanie daty,
    prezentuj(typu const) - wy�wietlaj�c� dat� w formacie dzie�.miesi�c.rok,

    konstruktor wype�niaj�cy powy�sze pola

    Napisz program1, kt�ry definiuje obiekt klasy Data ustalaj�c konstruktorem warto�ci p�l.
    Nast�pnie wydrukuj wczytane warto�ci. Zmie� dat� u�ywaj�c funkcji sk�adowej wpisz.
    Wypisz powt�rnie dat� na ekran.
        */
    public:
        Data(int _dzien, int _miesiac, int _rok)
        {
            dzien= _dzien;
            miesiac= _miesiac;
            rok= _rok;
        }
        void wpisz(Data & d)
        {

        }
        void prezentuj (Data & d)
        {
            cout << dzien <<"."<<miesiac<<"."<< rok;
        }
    };

int main ()
{
    Data d1(15,09,1992);
    t1.prezentuj();
}
