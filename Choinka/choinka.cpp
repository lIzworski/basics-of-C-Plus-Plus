//Lucjan Izworski
//Zad. Choinka
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        for(int s=0; s < n - i +1; ++s)
        {
            cout << " ";
        }

        for(int j=0;j < 2*i + 1 ;++j)
        {
            cout <<"*";
        }

        cout << endl;
    }
    for(int i=0;i<n+1;++i)
    {
        for(int s=0; s < n - i +1; ++s)
        {
            cout << " ";
        }

        for(int j=0;j < 2 * i + 1 ;++j)
        {
            cout <<"*";
        }

        cout << endl;
    }
    for(int i=0;i>=n+1;++i)
    {
        for(int g=0; g < n+2; ++g)
        {
            cout << " ";
        }

        for(int m=0; m > n + 3 ;++m)
        {
            cout <<"*";
        }

        cout << endl;
    }


    int m = 0;
    for(int g=0; g < n+1; ++g)
    {
        cout << " ";
    }

    cout <<"*";

    cout << endl;
    int o = 0;
    for(int g=0; g < n+1; ++g)
    {
        cout << " ";
    }

    cout <<"*";

    cout << endl;
}
