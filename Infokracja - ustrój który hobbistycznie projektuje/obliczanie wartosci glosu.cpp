#include <iostream>
#include <locale.h>
using namespace std;
double matematyka, biologia, geografia, moralnosc, moralnosc2,wynik, a;
int tematy,menu, zmiana1, zmiana2, dowie, IPI1,wdn1;
int main ()
{
    setlocale(LC_CTYPE, "Polish");
                wyb0:
    cout << " Witaj w programie\n";
    cout << " Program bazuje na ustroju infokratycznym.\n\n";
    cout << " Infokracja to ustroj polityczny w ktorym wraz z wieksza wiedza w danym temacie oraz wyzszym poziomem moralnosci \n";
    cout << " zwieksza sie twoja wartosc glosu w konkretnym glosowaniu, dotyczacym konkretnego tematu.\n\n";
    cout << " Menu" << endl;
    cout << " 1. dowiedz sie wiecej." << endl;
    cout << " 2. Uzupelnij IPI, aby oszacowac wartosc glosu \n";
    cin >> menu;
    switch(menu)
    {
        case 1:
            {
            info1:
            cout << " Witaj, infokracja to bardzo rozbudowany system, bedacy nie tylko ustrojem politycznym, ale i równiez systemem gospodarczym. \n";
            cout << "Wraz z rozwojem tego programu bede uzupelnial to menu o nowe informacje o ustroju Infokratycznym, jak i o systemie gospodarczym \n";
            cout << "Informatium\n\n";
            cout << " Menu \n\n";
            cout << " 1. IPI \n";
            cout << " 2. Co gdy temat glosowania dotyczy wielu dziedzin nauk?";
            }
        case 2:
            {
            goto uzupIPI;
            }
            break;
        default:
            {
                cout << "Nie ma takiej opcji w menu, sprobuj jeszcze raz. \n";
                goto wyb0;
            }
        break;
    }
    uzupIPI:
    cout << " IPI to skrot od Indywidualne Punkty Informacyjne. IPI jest sieciowym magazynem danych dotyczacych" << endl;
    cout << "twoich zdobytych i zweryfikowanych umiejetnosci, zrozumianej i zweryfikowanej wiedzy, oraz twojego "<< endl;
    cout << "procentowego poziomu moralnosci. To dzieki danym z IPI komputer w latwy sposob jest w stanie obliczyc" << endl;
    cout << "wartosc glosu, kazdego z nas, w roznych tematach w ktorych bedziemy brac udzial." << endl << endl;
    cout << "Wprowadz sztucznie, dane do swojego IPI. \n\n";
        wrumat:
    cout << "Okresl procentowy poziom wiedzy z zakresu Matematyki : \n";
    cout << "wpisana dana uzupelni ogólna procentowa wartosc IPI dla znajdujacego sie w nim katalogu  matematyka : ";
    cin >> matematyka;
    cout << endl;
        if (matematyka <= 100 )
        {
            goto wrubio;
        }
        else
        {
            cout << "Nie mozesz posiadac wiecej niz 100%, wiedzy z zakresu Matematyki, wprowadz liczbe jeszcze raz \n\n";
            goto wrumat;
        }
            wrubio:
    cout << "Okresl procentowy poziom wiedzy z zakresu Biologii : \n";
    cout << "wpisana dana uzupelni ogolna procentowa wartosc IPI dla znajdujacego sie w nim katalogu  biologia : ";
    cin >> biologia;
    cout << endl;
        if (biologia <= 100 )
        {
            goto wrugeo;
        }
        else
        {
            cout << "Nie mozesz posiadac wiecej niz 100%, wiedzy z zakresu Biologii, wprowadz liczbe jeszcze raz \n\n";
            goto wrubio;
        }
            wrugeo:
    cout << "Okresl procentowy poziom wiedzy z zakresu Geografii : \n";
    cout << "wpisana dana uzupelni ogólna procentowa wartosc IPI dla znajdujacego sie w nim katalogu  geografia : ";
    cin >> geografia;
    cout << endl;
        if (geografia <= 100 )
        {
            goto wrumor;
        }
        else
        {
            cout << "Nie mozesz posiadac wiecej niz 100%, wiedzy z zakresu geografi, wprowadz liczbe jeszcze raz \n\n";
            goto wrugeo;
        }
            wrumor:
    cout << "Podaj swój procentowy poziom moralnoœci : ";
    cin >> moralnosc;
        if (moralnosc <= 100 )
        {
            goto wyb1;
        }
        else
        {
            cout << "Nie mozesz posiadac wiecej niz 100%, moralnosci, wprowadz liczbe jeszcze raz \n\n";
            goto wrumor;
        }
    cout << endl;
             wyb1:
    moralnosc2 = moralnosc / 100;
    cout << "Uzupelniles juz swoje IPI, teraz sprawdz ile wynosila by twoja wartosc glosu w róznych tematach. \n\n";
    cout << "Wybierz temat  \n";
    cout << "1. matematyka \n";
    cout << "2. biologia \n";
    cout << "3. geografia \n";
    cin >> tematy;
    switch(tematy)
    {
        case 1:
             a = matematyka;
             break;
        case 2:
             a = biologia;
             break;
        case 3:
             a = geografia;
             break;
        default:
            {
             cout << "Nie ma takiej opcji w menu. spróbuj jeszcze raz.  \n\n";
             goto wyb1;
            }
             cout << a << endl;
    }
      if ((a >= 0)&&(a <= 10))
        cout << "Biorac udzial w tym glosowaniu, do wybranego przez siebie rozwiazania, dodasz " << (a * 1) * moralnosc2 << " punktow glosu. \n\n";
      else if ((a >= 11)&&(a <= 20))
        cout << "Biorac udzial w tym glosowaniu, do wybranego przez siebie rozwiazania, dodasz " << (a * 2) * moralnosc2 << " punktow glosu. \n\n";
      else if ((a >= 21)&&(a <= 30))
        cout << "Biorac udzial w tym glosowaniu, do wybranego przez siebie rozwiazania, dodasz " << (a * 3) * moralnosc2 << " punktow glosu. \n\n";
      else if ((a >= 31)&&(a <= 40))
        cout << "Biorac udzial w tym glosowaniu, do wybranego przez siebie rozwiazania, dodasz " << (a * 4) * moralnosc2 << " punktow glosu. \n\n";
      else if ((a >= 41)&&(a <= 50))
        cout << "Biorac udzial w tym glosowaniu, do wybranego przez siebie rozwiazania, dodasz " << (a * 5) * moralnosc2 << " punktow glosu. \n\n";
      else if ((a >= 51)&&(a <= 60))
        cout << "Biorac udzial w tym glosowaniu, do wybranego przez siebie rozwiazania, dodasz " << (a * 6) * moralnosc2 << " punktow glosu. \n\n";
      else if ((a >= 61)&&(a <= 70))
        cout << "Biorac udzial w tym glosowaniu, do wybranego przez siebie rozwiazania, dodasz " << (a * 7) * moralnosc2 << " punktow glosu. \n\n";
      else if ((a >= 71)&&(a <= 80))
        cout << "Biorac udzial w tym glosowaniu, do wybranego przez siebie rozwiazania, dodasz " << (a * 8) * moralnosc2 << " punktow glosu. \n\n";
      else if ((a >= 81)&&(a <= 90))
        cout << "Biorac udzial w tym glosowaniu, do wybranego przez siebie rozwiazania, dodasz " << (a * 9) * moralnosc2 << " punktow glosu. \n\n";
      else if ((a >= 91)&&(a <= 100))
        cout << "Biorac udzial w tym glosowaniu, do wybranego przez siebie rozwiazania, dodasz " << (a * 10) * moralnosc2 << " punktow glosu. \n\n";

         wru2:
    cout << " 1. Jezli chcesz sprawdzic jaka wartosc glosu posiadal bys w innych tematach. \n";
    cout << " 2. Jezli chcesz zmienic swoje IPI. \n";
    cout << " 3. Jezli chcesz tylko zmienic swój poziom moralnoœci w IPI. \n";
    cout << " 4. Co gdy temat dotyczy wielu dziedzin nauk ? \n\n";
    cin >> zmiana1;
    switch(zmiana1)
    {
    case 1:
        {
        goto wyb1;
        break;
        }
    case 2:
        {
        goto uzupIPI;
        break;
        }
    case 3:
        {
        goto wrumor;
        break;
        }
        case 4:
        {
        goto wdn;
        break;
        }
    default:
        {
        goto wru2;
        break;
        }
    }

    wdn:
        cout << "\t Co gdy temat glosowania dotyczy wielu dziedzin nauk? \n\n" ;
        cout << "Gdy temat glosowania bedzie dotyczyl wielu dziedzin nauk, co bedzie bardzo czeste, rozpocznie sie \n";
        cout << "proces, którego celem bedzie okreslenie jakie dziedziny wiedzy sa w stanie rozwiazac \n";
        cout << "problem postawiony w temacie, nastepnie zostanie okreslony stosunek, pomiedzy wymienionymi naukami \n";
        cout << "który okresli jaka czesc z 100% wartosci glosu, przypada na kazda z nauk. \n\n" ;
        cout << "Wytypowanie zbierznych z tematem dziedzin nauk ----> dowodzenie zbierznosci danej nauki z tematem ----> \n";
        cout << "----> okreslenie tego które z nauk w tym temacie sa najwazniejsze ----> zatwierdzenie. \n\n\n";

        cout << "Menu\n\n";
        cout << " 1. Wróc \n";
        cout << " 2. wróc do menu głównego \n";
        cin >> zmiana2;
        switch(zmiana2)
    {
    case 1:
        {
        goto wru2;
        break;
        }
    case 2:
        {
        goto wyb0;
        break;
        }
    default:
        goto wdn;
        break;
    }
    return 0;
}
