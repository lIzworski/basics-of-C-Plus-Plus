#include <iostream>
using namespace std;
int main()
{
    int max;
    cin >> max;
    int i = 0;
    while(i < max)
    {
         i = i + 1;
         if(i % 2 == 0)
         {
         	continue;
         }
         cout << " i = " << i << endl;
         if(i == 21)
         {
         	cout << "OKO" << endl;
         	break;
         }
     //<--continue;
    }
    //<-- break;
    return 0;
}
