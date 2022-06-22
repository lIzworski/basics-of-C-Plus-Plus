#include <iostream>
using namespace std;
int main ()
{
int a;
cin >> a;
if ((a >= 1 ) && ( a <=3))
    cout << "Wiosna";
else if ((a >= 4 ) &&( a <= 6))
    cout << " Lato";
else if ((a >= 7 ) &&( a <= 9))
    cout << "Jesien";
else if ((a >= 10 ) &&( a <=12))
    cout << "Zima";
else
    cout << "Rok ma tylko dwanascie miesiecy";
}
