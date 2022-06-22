//Lucjan Izworski
// Zad. Na przemian
#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int *liczba = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> liczba[i];
    }

    for (int i = 0; i < n; i += 2)
    {
        cout << liczba[i] << " ";
    }

    cout << endl;

    int mod = 1;

    if (n % 2 == 0) {
        mod = 0;
    }

    for (int i = 1; i < n - mod; i += 2)
    {
        cout << liczba[i] << " ";
    }

    delete[] liczba;
}
