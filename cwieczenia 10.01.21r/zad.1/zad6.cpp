//Lucjan Izworski 6
#include <iostream>
using namespace std;
void generujTablice(int tab[], int n, int a, int b){
    for(int i=0; i<n; i++){
        tab[i]=rand() % (b-a+1) + a;
    }
}
void wypiszTab(int tab[], int n){
    for(int i=0; i<n; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
}
void minnapocz(int tab[], int n){
    int zp=0, tmp;
    for(int i=1; i<n; i++){
        if(tab[i]<tab[zp]){
            zp=i;
        }
    }
    tmp = tab[0];
    tab[0] = tab[zp];
    tab[zp] = tmp;
}
int main(){
	int tab[20];
    int n;
    cin >> n;
    generujTablice(tab, n, 1, 50);
    wypiszTab(tab, n);
    minnapocz(tab, n);
    wypiszTab(tab, n);
return 0;
}
