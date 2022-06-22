//Lucjan Izworski
#include <iostream>

int main() {
    int max_chars = 10000;
    char data[max_chars];
    int direction = 1;
    int offset = 0;

    std::cin >> direction;
    std::cin >> offset;
    std::cin.ignore(); // ignore last new line to allow reading of whole line
    std::cin.getline(data, sizeof(data));

    for (int i = 0; i < max_chars; ++i) {
        if (data[i] == 0) {
            break;
        }

        if (direction == 1) {
            if (isalpha(data[i])) {
                if (isupper(data[i])) {
                    std::cout << char(int(data[i] + offset - 65) % 26 + 65);
                } else {
                    std::cout << char(int(data[i] + offset - 97) % 26 + 97);
                }
            } else {
                std::cout << data[i];
            }
        } else if (direction == 2) {
            if (isalpha(data[i])) {
                if (isupper(data[i])) {
                    std::cout << char(int(data[i] + (26 - offset) - 65) % 26 + 65);
                } else {
                    std::cout << char(int(data[i] + (26 - offset) - 97) % 26 + 97);
                }
            } else {
                std::cout << data[i];
            }
        }
    }

    return 0;
}

