//Lucjan Izworski
#include <iostream>
using namespace std;

int main() {
	int x=0;
    for(int i=1; i<=15; i++){
        if(i%2==0&&i*i%2==0&&i*i*i%2==0){
            cout << i << " " << i*i << " " << i*i*i << " PARZYSTE" << endl;
            x++;
        }else
            cout << i << " " << i*i << " " << i*i*i << endl;
        //(i%2==0&&i*i%2==0&&i*i*i%2==0)?cout << i << " " << i*i << " " << i*i*i << " PARZYSTE" << endl:cout << i << " " << i*i << " " << i*i*i << endl;
    }
    cout << x;
	return 0;
}
