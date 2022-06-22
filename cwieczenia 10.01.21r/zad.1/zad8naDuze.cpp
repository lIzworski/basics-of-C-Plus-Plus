//*****************************
//Lucjan Izworski
//zmien na duze
//*****************************
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string slowo;
    cin >> slowo;

    for (int i=0;i<slowo.length();++i)
    {
        if(slowo[i]>=97&&slowo[i]<=122)
        {
            slowo[i]-=32;
        }
    }
    cout << slowo;
}
