//Lucjan Izworski
//zadanie mocna silnia
#include <iostream>
using namespace std;
int main()
{
long long int a, n;
cin >> n;
a = n % 1000000000;
if(n>=40) cout<<0;
else{
while( n > 1 )
{n --;
a = a * (n% 1000000000);
a = a % 1000000000;}
cout << a;
}
return 0;
}
