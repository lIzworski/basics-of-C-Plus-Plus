// Lucjan Izworski
#include <iostream>
#include <map>

std::string convert_to_morse(char character) {
    static const std::map<char, std::string> codes = {
            {'A', ".-"},
            {'B', "-..."},
            {'C', "-.-."},
            {'D', "-.."},
            {'E', "."},
            {'F', ".-.."},
            {'G', "--."},
            {'H', "...."},
            {'I', ".."},
            {'J', ".---"},
            {'K', "-.-"},
            {'L', "..-."},
            {'M', "--"},
            {'N', "-."},
            {'O', "---"},
            {'P', ".--."},
            {'Q', "--.-"},
            {'R', ".-."},
            {'S', "..."},
            {'T', "-"},
            {'U', "..-"},
            {'V', "...-"},
            {'W', ".--"},
            {'X', "-..-"},
            {'Y', "-.--"},
            {'Z', "--.."},
            {' ', "/"},
    };

    auto morseStr = codes.find(toupper(character));

    if (morseStr != codes.end()) {
        return morseStr->second;
    }

    return "";
}


int main() {
    int max_lines = 100;
    int line_length = 1000;

    char data[max_lines][line_length];

    for (int i = 0; i < max_lines; ++i) {
        std::cin.getline(data[i], sizeof(data[i]));

        // End loop if there is no data
        if (data[i][0] == 0) {
            break;
        }
    }

    for (int i = 0; i < max_lines; ++i) {
        // End loop if there is no data
        if (data[i][0] == 0) {
            break;
        }

        for (int j = 0; j < line_length; ++j) {
            // Break if there are is no more letters
            if (data[i][j] == 0) {
                break;
            }

            std::cout << convert_to_morse(data[i][j]);
            if (data[i][j] != ' ') {
                std::cout << "/";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
