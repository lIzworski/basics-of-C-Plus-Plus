#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;++i)
    {
        for(int s=0; s < n - i -1; ++s)
        {
            cout << " ";
        }

        for(int j=0;j < 2*i + 1 ;++j)
        {
            cout <<"*";
        }

        cout << endl;
    }

    for(int i=0;i<n-1; ++i)
    {
        for(int s=0;s<i+1;++s)
        {
            cout << " ";
        }
        for(int g=0;g < 2*(n - i - 1) - 1 ; g++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
