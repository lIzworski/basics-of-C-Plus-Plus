// Lucjan Izworski
// Zadanie Pierwszy i Ostatni
#include <iostream>
using namespace std;
int main ()
{
    int first_day =-1, last_day =-1;
    int x,n,tmp=0;
    cin >> n; //  ilo�� dni
    cin >> x; // cena za akcje sp�ki kt�ra nas interesuje.
    for ( int i = 0; i <n; i++)
    {
        cin >> tmp; // tymczasowa zmienna, przechowywuj�ca warto�� gie�dow�
        if (tmp == x)
        {
           if ( first_day ==-1)
            {
               first_day = i+1;
            }
            last_day = i+1;
        }
    }
    cout << first_day << " " << last_day;
    return 0;
}
