//Lucjan Izworski
#include <iostream>
using namespace std;

int main()
{
    char znak;
    cin >> znak;
    if (znak >= 48 && znak <= 57)
    {
        cout << "liczba";
    }
    else if (znak >= 65 && znak <= 90)
    {
        cout << "duza litera";
    }
    else if (znak >= 97 && znak <= 122)
    {
        cout << "mala litera";
    }
    else if (znak >= 32 && znak <= 47)
    {
        cout << "znak specjalny";
    }
}
