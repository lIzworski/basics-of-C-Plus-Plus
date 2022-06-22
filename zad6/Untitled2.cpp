#include <iostream>

int main()
{
    int input,inc=0;
    std::cin >> input;
    for(int i=0; i<2*input; ++i)
    {
        for(int j=input; j>=i;--j) std::cout<<" ";
        for(int j=0; j<=inc; ++j)
        {
            std::cout<<"*";
        }
        inc+=2;
        std::cout<<"\n";
    }
    for(int i=1; i<2*input; ++i)
    {
        for(int j=0; j<i;++j) std::cout<<" ";
        for(int j=inc-2; j>1; --j)
        {
            std::cout<<"*";
        }
        inc-=2;
        std::cout<<"\n";
    }
    return 0;
}
