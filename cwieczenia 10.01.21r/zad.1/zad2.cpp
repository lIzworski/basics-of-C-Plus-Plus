#include <iostream>

using namespace std;

void zad1(){
     for (int i=32;i<=127;i++)
    {
        cout << (char) i<<"\n";
    }
}
void zad2()
{
    for (int i=48;i<58;i++)
    {
        cout << (char) i;
    }
    cout << "\n";
    for (int i=65;i<91;i++)
    {
        cout << (char) i;
    }
    cout << "\n";
    for (int i=97;i<123;i++)
    {
        cout << (char) i;
    }
    cout << "\n";
}
int main()
{
    zad2();
    return 0;
}
