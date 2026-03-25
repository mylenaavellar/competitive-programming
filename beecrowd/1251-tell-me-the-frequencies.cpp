#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

int main() {
    char texto[1000];
    std::vector<std::pair<int,int>> pares;
    
    while (std::cin.getline(texto, sizeof(texto))) {
        int ascii[128] = {0};
        pares.clear();

        for (int i = 0; i < strlen(texto); ++i) {
            ascii[int(texto[i])]++;
        }

        for  (int i = 0; i < 128 ; ++i) {
            if (ascii[i] == 0) {
                continue;
            }

            pares.push_back({ascii[i], i});
        }

        std::sort(pares.begin(), pares.end());

        for (const auto& p : pares) {
            std::cout << p.second << " " << p.first << "\n";
        }

        std::cout << "\n";
    }
    
    return 0;
}