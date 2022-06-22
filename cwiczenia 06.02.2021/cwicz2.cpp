//**********************
//Lucjan Izworski
//Zadanie: NWW
//nazwa: NWW
//06.02.2021
//**********************
#include <iostream>
using namespace std;

int NWD(int a,int b)
{
 while( a != b )
    if( a < b )
    {
        b -= a
    }
    else
    {
        a -= b;
    }
    return a;
}

int NWW(int a, int b)
{
  return a*b / NWD(a, b);
}

int main()
{
    int a,b;
    cin >> a >> b;

    cout <<endl<< NWW(a,b);
}

