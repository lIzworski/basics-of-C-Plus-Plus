//*****************************
//Lucjan Izworski
//tablice dwuwymiarowe
//*****************************
#include <iostream>
using namespace std;
const int n = 10;
void wypelnij(int tab[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            tab[i][j] = (i+11)*(j+11);
        }
    }
}
void wypisz(int tab[n][n], int a, int b){
    for(int i=0; i<n; i++){
        if((i+11)==a){
            for(int j=0; j<n; j++){
                cout << tab[i][j] << " ";
            }
        }else{
            for(int j=0; j<n; j++){
                if((j+11)==b)
                    cout << tab[i][j] << " ";
                else
                    cout << "    ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int tab[n][n];
    wypelnij(tab);
	int a, b;
    cin >> a >> b;
    wypisz(tab, a, b);
    return 0;
}
