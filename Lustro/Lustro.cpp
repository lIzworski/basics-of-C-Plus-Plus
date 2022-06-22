//Izworski Lucjan
//Lustro
#include <iostream>
using namespace std;

int main() {
    int n;
    int l = 0;
    cin >> n;
    while( n ) {
        l = l * 10 + n % 10;
        n /= 10;
    }
    cout << l << endl;
}
