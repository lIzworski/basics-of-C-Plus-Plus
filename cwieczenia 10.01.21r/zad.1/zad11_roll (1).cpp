//*****************************
//Lucjan Izworski
//roll
//*****************************
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void wpiszDoTab(int tab[], int t)
{
    for (int i=0;i<t;++i)
    {
        cin >> tab[i];
    }
}
void wypiszTab(int tab[], int rozmiar)
{
    for (int i=0; i<rozmiar; i++)
    {
        cout<<tab[i]<<" ";
    }
    cout << "\n";
}
void wLewo(int tab[], int t)
{
    int pierwsza=tab[0];
    for (int i=0;i<t;++i)
    {
        tab[i]=tab[i+1];
    }
    tab[t-1]=pierwsza;
}

int main()
{
    int tab[101];
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        wpiszDoTab(tab,n);
        wLewo(tab,n);
        wypiszTab(tab,n);
    }

}

