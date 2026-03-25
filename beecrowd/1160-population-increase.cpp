#include <iostream>

int main() {
    int t{};
    std::cin >> t;
    
    for (int i = 0; i < t; ++i) {
        int pa{};
        int pb{};
        float g1{};
        float g2{};
        
        std::cin >> pa >> pb >> g1 >> g2;

        float crescimento_a = pa;
        float crescimento_b = pb;
        int anos{0};

        while (crescimento_b >= crescimento_a) {
            crescimento_a += abs(crescimento_a * g1 / 100);
            crescimento_b += abs(crescimento_b * g2 / 100);
            ++anos;

            if (anos > 101) break;
        }

        if (anos > 100) {
            std::cout << "Mais de 1 seculo.\n";
            continue;
        }
        std::cout << anos << " anos.\n";
    }
}
