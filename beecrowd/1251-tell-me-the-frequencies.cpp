#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

int main() {
    char texto[1001];
    std::vector<std::pair<int,int>> pares;
    int caso = 0;
    
    while (std::cin.getline(texto, sizeof(texto))) {
        if (caso > 0) {
            std::cout << "\n";
        }
        ++caso;

        int len = strlen(texto);
        int ascii[128] = {0};
        pares.clear();

        for (int i = 0; i < len; ++i) {
            ascii[int(texto[i])]++;
        }

        for  (int i = 0; i < 128 ; ++i) {
            if (ascii[i] == 0) {
                continue;
            }

            pares.push_back({ascii[i], i});
        }

        // Frequência ascendente. Em caso de empate: maior ASCII primeiro
        std::sort(pares.begin(), pares.end(), [](const auto& a, const auto& b) {
            if (a.first != b.first) return a.first < b.first;
            return a.second > b.second;
        });
        
        for (const auto& p : pares) {
            std::cout << p.second << " " << p.first << "\n";
        }
    }

    return 0;
}