//Lucjan Izworski
//Zad. Oceny
#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int *oceny = new int[n];

    int jeden=0, dwa=0, trzy=0, cztery=0, piec=0, szesc=0;
    for (int i = 0; i < n; i++)
    {
        cin >> oceny [i];
    }
    for (int i = 0; i < n ; i++)
    {
        if (oceny[i]==1)
            jeden = jeden +1;
    }
    for (int i= 0; i < n ; i++)
    {
        if (oceny[i]==2)
            dwa = dwa +1;
    }
    for (int i = 0; i < n ; i++)
    {
        if (oceny[i]==3)
            trzy = trzy +1;
    }
    for (int i = 0; i < n ; i++)
    {
        if (oceny[i]==4)
            cztery = cztery +1;
    }
    for (int i = 0; i < n ; i++)
    {
        if (oceny[i]==5)
            piec = piec +1;
    }
    for (int i = 0; i < n ; i++)
    {
        if (oceny[i]==6)
            szesc = szesc +1;
    }
    cout << jeden <<" "<<dwa<<" "<<trzy<<" "<<cztery<<" "<<piec<<" "<<szesc<<endl;
}
