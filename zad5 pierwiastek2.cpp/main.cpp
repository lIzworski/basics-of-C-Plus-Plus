#include <iostream>
#include <math.h>
using namespace std;
double liczba, liczba2, wynik2, wynik, stopien, wynik3;
int main()
{
    cout << "podaj liczbe ktora chcesz wlozyc pod pierwiastek drugiego stopnia" << endl;
    cin >> liczba;
    wynik = pow(liczba, 0.5);
    cout << wynik;
    cout <<endl<< "podaj liczbe ktora chcesz wlozyc pod pierwiastek" << endl;
    cin >> liczba2;
    cout <<endl << "do którego stopnia chcesz podnieœæ pierwiastek";
    cin >> stopien;
    wynik2 = 1/stopien;
    wynik3 = pow(liczba2,wynik2);
    cout << wynik3;

    return 0;
}
