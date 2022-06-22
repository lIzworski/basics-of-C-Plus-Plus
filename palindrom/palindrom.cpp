// Lucjan Izworski
// Zadanie Polidrom
#include <iostream>
using namespace std;
int main ()
{
    bool odtylu = true;
    string slowo;
    cin >> slowo;
    cin.ignore();
    //cout << slowo.length()-1;
    for (int i = 0; i <slowo.length() /2; i++)
        if (slowo[i] != slowo[slowo.length()-1-i])
        {
        odtylu = false;
        break;
        }
    if (odtylu == true)
        cout <<  "TAK";
    else
        cout <<  "NIE";
    getchar ();
    return 0;
}
