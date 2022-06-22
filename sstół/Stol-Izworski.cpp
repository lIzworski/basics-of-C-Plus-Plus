
//Lucjan Izworski
// Zadanie król
#include <iostream>
using namespace std;
int a, b, k, a1, b1, k1;
int main()
{
cin>>a>>b>>k;
if(b>=(2 * k)){
    a=a/k;
    b=b/k;
    a1=a*2;
    b1=b*2;
    k1=(a1+b1)-4;
    cout<<k1;}
    else if(b>=k){
        a1=a/k;
        b1=b/k;
        k1=a1*b1;
        cout<<k1;}
    else{
    cout<<0;}
    return 0;
}
