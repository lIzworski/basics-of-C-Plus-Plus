//*****************************
//Lucjan Izworski
//tablice
//*****************************
#include <iostream>
#include <cstdlib>
#include <ctime>

void generujTablice(int tab[],int n, int a, int b)
{
    srand(time(0));
    for (int i=0; i<n; i++)
    {
        tab[i]=rand()%(b-a+1)+a;
    }
}

void wypiszTab(int tab[], int rozmiar)
{
    for (int i=0; i<rozmiar; i++)
    {
        std::cout<<tab[i]<<" ";
    }
}
void odwrocTab(int tab[], int n)
{
    int tmp,j=n-1;
    for (int i=0;i<n/2;++i)
        {
            tmp=tab[i];
            tab[i]=tab[j];
            tab[j]=tmp;
            --j;
        }
}
int main()
{
    int tab[20];
    int n;
    std::cin>>n;
    generujTablice(tab,n,1,50);
    wypiszTab(tab,n);
    odwrocTab(tab,n);
    std::cout<<"\n";
    wypiszTab(tab,n);
}
