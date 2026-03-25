#include <iostream>
 
int main() {
    int n, l, hash{0};

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        hash = 0;
        std::cin >> l;

        for (int j = 0; j < l; ++j) {
            std::string texto;

            std::cin >> texto;

            for (int k = 0; k < texto.length(); ++k) {
                hash += (texto[k] - 'A') + j + k;
            }
        }
        std::cout << hash << "\n";
    }
    
    return 0;
}