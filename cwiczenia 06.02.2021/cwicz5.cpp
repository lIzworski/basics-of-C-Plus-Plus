#include <iostream>
//Lucjan Izworski
using namespace std;
int nwd(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
           b-=a;
        }
    }

    return a;
}
int nww(int a, int b)
{
    return (a*b)/nwd(a,b);
}
int silnia(int n)
{
    static int licznik =0;
    int wynik=1;
    for(int i=1;i<=n;++i)
    {
        wynik = wynik*i;
    }
    licznik++;
    cout << "Wywoluje silnie po raz" << licznik <<"\n";
    return wynik;
}
int newton(int n, int k)
{
    return silnia(n)/(silnia(k)*silnia(n-k));
}
void zliczNewton(int t)
{
    int** tab = new int *[t];

    for(int i=0;i<t;++i)
    {
        tab[i] = new int[2];
    }
    for(int i=0;i<t;++i)
    {
        cin >> tab[i][1];
        cin >> tab[i][2];
    }
    for(int i=0;i<t;++i)
    {
       cout << newton(tab[i][1], tab[i][2]) <<"\n";
    }

}

int potega(int x,int n)
{
    int wynik=1;
    if(n==0)
    {
        if(x==0)
        {
            return 0;
        }
        return 1;
    }
    int tmp_n = n;
    if(n<0)
    {
        tmp_n = tmp_n*-1;
    }
    for(int i=0;i<tmp_n;i++)
    {
        wynik = wynik * x;
    }
    if(n<0)
    {
        if(tmp_n%2 == 0)
        {
            return wynik;
        }
        else{
            return -wynik;
        }
    }
    else{
        return wynik;
    }

}

int main()
{
    /*
    cout << nwd(0,0);
    cout << nww(2,3);
    */
    //cout << silnia(3);
    //zliczNewton(2);
    cout << potega(2,-9);
    return 0;
}

