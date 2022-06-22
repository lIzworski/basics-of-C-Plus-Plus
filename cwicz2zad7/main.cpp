//Lucjan Izworski
// rozwarty czy ostry
#include <iostream>
using namespace std;

int main()
{
	int k;
    cin >> k;
    if(k<90)

    {
        cout << "ostry" << endl;
    }
    else if(k==90)
    {
        cout << "prosty" << endl;
    }
    else
    {
        cout << "rozwarty" << endl;
    }
	return 0;
}
