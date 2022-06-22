// Zad. srodek ukladu wspolrzednych
//Lucjan Izworski
#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cin>>x;
    cin>>y;
    if(x>0&&y>0)
    cout<<"I";
    if(x<0&&y>0)
    cout<<"II";
    if(x<0&&y<0)
    cout<<"III";
    if(x>0&&y<0)
    cout<<"IV";
    if(x==0&&y==0)
    cout<<'0';
    if(x==0&&y!=0)
    cout<<"OY";
    if(x!=0&&y==0)
    cout<<"OX";
    return 0;
}
