//Patryk Czech
//Funkcja silnia
#include<iostream>
using namespace std;

int silnia (int x)
{
    int a=1;
    for (int i=1; i<=x; i++)
    {
        a=a*i;
    }
    return a;
}
int main ()
{
    int x;
    cin>>x;

    if (x==0)
    {
        cout<<"1"<<endl;
    }
    else if (x>0 && x<13)
    {
       silnia (x);
       cout <<silnia(x)<<endl;
    }
}

