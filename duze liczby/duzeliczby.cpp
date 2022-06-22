//Lucjan Izworski
// Zad. Duze liczby
#include <iostream>
using namespace std;
int main ()
{
    long long int a,b;
    string operatory;
    cin >> a;
    cin >> operatory;
    cin >> b;



    if (operatory == "==")
    {
            if (a == b )
            {
                cout << "TAK";
            }
            else
            {
                cout << "NIE";
            }
    }
    else if (operatory == "!=")
    {
            if (a != b )
            {
                cout << "TAK";
            }
            else
            {
                cout << "NIE";
            }
    }
    else if (operatory == "<")
    {
            if (a < b )
            {
                cout << "TAK";
            }
            else
            {
                cout << "NIE";
            }
    }
    else if (operatory == ">")
    {
            if (a > b )
            {
                cout << "TAK";
            }
            else
            {
                cout << "NIE";
            }
    }
    else if (operatory == "<=")
    {
            if (a <= b )
            {
                cout << "TAK";
            }
            else
            {
                cout << "NIE";
            }
    }
    else if (operatory == ">=")
    {
            if (a >= b )
            {
                cout << "TAK";
            }
            else
            {
                cout << "NIE";
            }
    }
}
