//Lucjan Izworski
#include <iostream>
using namespace std;
int main()
{
    for(int i=32;i<=73;++i)
    {
        cout<<(char)i<<" "<<i<<"\t"<<(char)(i+(127/3))<<" "<<i+(127/3)<<"\t";
        if(i+(2*127/3)<=127)
        cout<<(char)(i+(2*127/3))<<" "<<i+(2*127/3);
        cout<<"\n";
    }
}
