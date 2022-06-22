// Lucjan Izworski
#include <iostream>

const double pi = 3.14159265;
int main()
{
    char input;
    int a,b,c;
    std::cin >> input;
    switch(input)
    {
    case 'S':
    case 's':
        std::cout << "Podaj wymiar krawedzi szescianu: ";
        std::cin >> a;
        std::cout << "Pole: " << 6*a*a << " Objetosc: " <<a*a*a;
        break;
    case 'P':
    case 'p':
        std::cout << "Podaj wymiary krawedzi prostopadloscianu: ";
        std::cin >> a >> b >> c;
        std::cout << "Pole: " << 2*a*b + 2*a*c + 2*b*c << " Objetosc: " << a*b*c;
        break;
    case 'W':
    case 'w':
        std::cout << "Podaj promien i wysokosc walca: ";
        std::cin >> a >> b;
        std::cout << "Pole: " << 2*pi*(a*a) + 2*pi*a*b << " Objetosc: " << pi*(a*a)*b;
        break;
    case 'K':
    case 'k':
        std::cout << "Podaj promien kuli: ";
        std::cin >> a;
        std::cout << "Pole: " << 4*pi*(a*a) << " Objetosc: " << 4/3.0*pi*(a*a*a);
        break;
    default:
        std::cout << "Blad danych \n";
        break;
    }
    return 0;
}
