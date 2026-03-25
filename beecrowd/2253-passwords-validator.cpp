#include <iostream>
#include <cctype>
 
int main() {
    std::string senha;
    
    while (std::getline(std::cin, senha)) {

        if (senha.length() > 5 and senha.length() < 33) {
            bool lower = false, upper = false, number = false, invalida = false;

            for (int i = 0; i < senha.length(); ++i) {
                unsigned char c = senha[i];
                
                if (!isalnum(c)) {
                    invalida = true;
                } else if (islower(c)) {
                    lower = true;
                } else if (isupper(c)) {
                    upper = true;
                } else if (isdigit(c)) {
                    number = true;
                }
            }

            if (lower and upper and number and !invalida) {
                std::cout << "Senha valida.\n";
            } else { 
                std::cout << "Senha invalida.\n";
            }
        } else {
            std::cout << "Senha invalida.\n";
        } 
    }
    
    return 0;
}