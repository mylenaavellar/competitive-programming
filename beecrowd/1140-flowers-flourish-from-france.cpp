#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>
 
int main() {

    std::string frase;

    while (std::getline(std::cin, frase) and frase != "*") {
        std::stringstream ss(frase);
        std::vector<std::string> palavras;
        std::string palavra;

        while (ss >> palavra) {
            palavras.push_back(palavra);
        }

        char inicial = tolower(palavras[0][0]);
        bool tautograma = true;

        for (const std::string& p : palavras) {
            if (tolower(p[0]) != inicial) {
                tautograma = false;
                break;
            }
        }

        if (tautograma == true) {
            std::cout << "Y\n";
        } else {
            std::cout << "N\n";
        }
    }
    
    return 0;
}