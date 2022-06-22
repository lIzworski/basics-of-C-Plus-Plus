//Lucjan Izworski
//Zadanie 1 NWD
#include <iostream>
using namespace std;

void NWD(int a,int b)
{
    cin >> a >> b;
    while(a!=b)
       if(a>b)
           a-=b;
       else
           b-=a;
    cout << a;
}
int main()
{
    int a,b;
    NWD(a,b);
}
