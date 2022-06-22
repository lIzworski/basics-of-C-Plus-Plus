//Lucjan Izworski

#include <iostream>
#include <math.h>

using namespace std;
char pola;
double a,h, wynik;
int main()
{
    cout << "pole ktorej figury chcesz obliczyc ?" << endl;
    cout << "Trojkat prostokatny - wcisnij 't'  " << endl;
    cout << "Kwadrat - wcisnij 'k'  " << endl;
    cout << "Prostokat - wcisnij 'p' " << endl;
    cin >> pola ;
    switch (pola)
    {
        case 't':
        {
           cout << "Podaj dlugosc podstawy trójk¹ta ";
           cin >> a;
           cout << "Podaj  wysokosc trojkata";
           cin >>h;
           wynik = (a*h)/2;
           cout << "Pole trójk¹ta prostokatnego o podstawie "<< a<< " i wysokosci "<<h<< "to : " << wynik;
        }
        break;
        case 'k':
        {
           cout << "Podaj dlugosc boku kwadratu ";
           cin >> a;

           wynik = pow(a,2);
           cout << "Pole kwadratu o boku "<< a<< "to : " << wynik;
        }
        break;
        case 'p':
        {
           cout << "Podaj dlugosc podstawy prostokata ";
           cin >> a;
           cout << "Podaj  wysokosc prostokata";
           cin >>h;
           wynik = pow(a,2)+pow(h,2);
           cout << "Pole prostokata o podstawie "<< a<< " i wysokosci "<<h<< "to : " << wynik;
        }
        break;
        default :
        cout << "Nie przypisano pod ta liczbe/litere zadnej figury";
        break;
    }

    return 0;
}
