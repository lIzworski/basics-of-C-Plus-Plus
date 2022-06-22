//**************************************
//Lucjan Izworski
//Zadanie 4 - Symbol Newtona
//*************************************
int silnia(unsigned int a)
{
    long long sil=1;
    for(int i=a;i>1;i--)
    {
        sil=sil*i;
    }
    return sil;
}
int symbolNewtona(unsigned int n, unsigned int k)
{
    unsigned int wynik;
    wynik=silnia(n)/(silnia(k)*silnia(n-k));
    return wynik;
}
#include <iostream>
using namespace std;
int main()
{
    unsigned int n,k;
    cin >> n >> k;

    if(k<n & 0<k & n<=12)
    {
        cout << symbolNewtona(n,k)<< endl;
    }
}

