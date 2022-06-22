//*****************************
//Lucjan Izworski
//kody ascii
//*****************************
#include <iostream>

int main()
{
    for(int i=32;i<=127;++i)
    {
        std::cout<<(char)i<<" "<<i<<"\t";
        if((i-32)%(96/8)==(96/8)-1) std::cout<<"\n";
    }
}
