#include <iostream>

using namespace std;
float waga, wzrost, wmc;
int main()
{
    cout << "Podaj wage "<< endl;
    cin>> waga;
    cout << "Podaj wzrost "<< endl;
    cin>> wzrost;

    wmc = (waga/(wzrost*wzrost));
    cout << "twoj wspolczynnik WMC to : " << wmc ;
    if (wmc < 19) cout << " masz niedowage";
    else if (wmc < 25) cout << " jest w normie";
    else if ( wmc < 30) cout <<" masz nadwage";
    else cout << " jestes otyly";


    return 0;
}
