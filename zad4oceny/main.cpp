#include <iostream>

using namespace std;
int ocena, punkty;
int main()
{
cin >> punkty;
    if (punkty <=50 ) cout << "ndst";
    else if (punkty <= 60) cout << "mrn";
    else if (punkty <= 70) cout << "dst";
    else if (punkty <= 80) cout << "db";
    else if (punkty <= 90) cout << "bdb";
    else if (punkty <= 100) cout << "cel";

    return 0;
}
