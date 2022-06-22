//zad 3 - Student
// Lucjan Izworski
//*****************
#include <iostream>
using namespace std;
//Utwórz strukturê Student zawieraj¹c¹ dane sk³adowe:
//§  imiê, nazwisko, numer Indeksu studenta`
//§  tablicê ocena piêcioelementow¹.
struct student
    {
        string imie;
        string nazwisko;
        int indeks;
        int ocena[5];
    };
//Napisz funkcje:
//§  wczytaj pobieraj¹cego jako argument studenta i wczytuj¹c¹ z klawiatury dane studenta podanego jako argument
void wczytaj(student * s)
    {
        cout << endl;
        cout << "Podaj imie studenta : ";
        cin >> s->imie;
        cout << "Podaj nazwisko studenta : ";
        cin >> s->nazwisko;
        cout << "Podaj numer indeksu studenta : ";
        cin >> s->indeks;
        cout << "Podaj wszystkie piec ocen studenta : ";
        for (int i =0; i <= 4; i++)
        {
            cin >> s->ocena[i];
        }
    }
//§  wypisz wypisuj¹c¹ na ekranie dane studenta podanego jako argument
//§  sredniaOcen obliczaj¹c¹ i zwracaj¹c¹ w wyniku œredni¹ ocen podanego jako argument studenta
void wypisz (student * s)
    {
        double a, srednia;
        cout << endl;
        cout << "Imie studenta : " <<s->imie;
        cout << "\nNazwisko studenta : " << s->nazwisko;
        cout << "\nNumer indeksu studenta : " << s->indeks;
        cout << "\nOceny studenta ";
        for (int i =0; i<=4; i++)
        {
            cout << s->ocena[i]<< " ";
        }
        cout <<"\nSrednia ocen studenta to : ";
        for (int i =0; i<=4; i++)
        {
            a += s->ocena[i];
        }
        srednia = a/5;
        cout << srednia;
        cout << endl;
    }
int main ()
{
//W funkcji main:
//·         utwórz obiekt klasy Student
student s1;
//·         wczytaj i wypisz dane studenta
//·         wypisz œredni¹ ocen studenta
wczytaj(&s1);
wypisz(&s1);
//·         Operatorem new utwórz drugiego studenta
student * s2 =new student;
//·         Wczytaj i wypisz dane i œredni¹ ocen
wczytaj(s2);
wypisz(s2);
//·         Usuñ drugiego studenta operatorem delete
delete s2;
}
