//*****************************
//Lucjan Izworski
//*****************************
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generujTablice(int tab[],int rozmiar, int a, int b)
{
    srand(time(0));
    for (int i=0; i<rozmiar; i++)
    {
        tab[i]=rand()%(b-a+1)+a;
    }
}
void wypiszTab(int tab[], int rozmiar)
{
    for (int i=0; i<rozmiar; i++)
    {
        cout<<tab[i]<<" ";
    }
}
int main()
{
    int tab[20];
    int pozycja=0;
    int n,x,ile_razy=0;
    cin>>n;
    generujTablice(tab,n,1,10);
    wypiszTab(tab,n);
    cout << "\n";
    cin >> x;

    for (int i=0;i<n;++i)
    {
        if (x==tab[i])
        {
            ile_razy++;
        }
    }
    cout << "Liczba " << x << " wystapila " << ile_razy << " razy";
}

