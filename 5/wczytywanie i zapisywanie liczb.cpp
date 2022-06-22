// Lucjan Izworski

#include <iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int t[100];

    for (int i=0;i<n;++i)
    {
        cin>>t[i];
    }
    for (int i=0;i<n;++i)
    {
        cout<<t[i]<<" ";
    }
}
