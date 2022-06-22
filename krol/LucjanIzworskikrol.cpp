//Lucjan Izworski
// zad: Krol
#include <iostream>
using namespace std;
int main()
{
char k;
int w;
cin>>k>>w;
if(w==1 || w==8){
if(k=='a' || k=='h'){
    cout<<"3";}
    else{
        cout<<"5";
		}
	} else
	{
		if(k=='a' || k=='h')
		{
			cout <<"5";
		} else
		{
			cout<<"8";
		}
	}

}
