// Zad 3
#include <iostream>
using namespace std;
int main ()
{
public class OdwracanieElementow {
public static void odwroc(int[] wejscie) {
int poczatek  = 0;
int koniec = wejscie.length-1;
while (poczatek < koniec) {
int pomoc = wejscie[poczatek];
wejscie[poczatek]  = wejscie[koniec];
wejscie[koniec] = pomoc;
poczatek++;
koniec--;
}
}
public static void pokazTablice(int[] wejscie) {
for(int x : wejscie) System.out.print (x + " ");
}
public static void main(String[] args) {
int[] tablica = {4, 6, 1, 2, 3, 8, 7, 9, 5};
pokazTablice(tablica);
odwroc(tablica);
pokazTablice(tablica);
}
}
