// Lucjan Izworski
//zadanie tablica 5 liczb
#include <iostream>
using namespace std;

double suma=0;
double srednia=0;
double t[5];
int main()
{
    for (int i=0;i<5;++i)
    {
        cout<<"Wprowadz "<<i+1<<" liczbe: \n";
        cin>>t[i];
        suma=suma+t[i];
    }
    srednia=suma/5;
    for (int i=0;i<5;++i)
    {

       if  (t[i]==0)
        {
             cout<<t[i]<<endl;
        }
        else if((t[i]>=-5 && t[i]<0) || (t[i]>0 && t[i]<=5))
        {
            cout<<"TAJNA \n";
        }
        else
        {
            cout<<t[i]<<endl;
        }

    }
    cout<<"Suma wynosi: "<<suma<<endl;
    cout<<"Srednia wynosi: "<<srednia<<endl;
