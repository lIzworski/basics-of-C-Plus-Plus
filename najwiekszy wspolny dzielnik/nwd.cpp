// Lucjan Izworski
// zad NWD
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
            return 1;
        }
    }
    return result;
}
int main()
{
    int n = 0;

    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n;++i) {
        cin >> arr[i];
    }

    cout << findGCD(arr, n) << endl;
    return 0;
}
