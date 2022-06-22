#include <iostream>
using namespace std;

/*
    Zdefiniuj klasê Data zawieraj¹c¹:
    ---prywatne dane sk³adowe:
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
    publiczne funkcje sk³adowe:
    wpisz -umo¿liwiaj¹c¹ wpisanie daty,
    prezentuj(typu const) - wyœwietlaj¹c¹ datê w formacie dzieñ.miesi¹c.rok,

    konstruktor wype³niaj¹cy powy¿sze pola

    Napisz program1, który definiuje obiekt klasy Data ustalaj¹c konstruktorem wartoœci pól.
    Nastêpnie wydrukuj wczytane wartoœci. Zmieñ datê u¿ywaj¹c funkcji sk³adowej wpisz.
    Wypisz powtórnie datê na ekran.
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
