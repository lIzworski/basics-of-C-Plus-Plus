#include <iostream>
using namespace std;
void randtab(int tab[], int n, int a, int b){
    for(int i=0; i<n; i++){
        tab[i]=rand() % (b-a+1) + a;
    }
}
void wypisz(int tab[], int n){
    for(int i=0; i<n; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
}
int maks(int tab[], int n){
    int maks = tab[0];
    for(int i=1; i<n; i++){
        if(tab[i]>maks) maks=tab[i];
    }
    return maks;
}
int main() {
	int tab[20];
    int n;
    cin >> n;
    randtab(tab, n, 0, 100);
    wypisz(tab, n);
    cout << "Max = " << maks(tab, n) << endl;
	return 0;
}
