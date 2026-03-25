#include <iostream>
 
int main() {
    int l, v, nivel, nivel_max;

    while (std::cin >> l) {
        nivel_max = 1;
        for (int i = 0; i < l; ++i) {
            std::cin >> v;
            
            if (v <= 10) {
                nivel = 1;
            } else if (v <= 20) {
                nivel = 2;
            } else {
                nivel = 3;
            }
            
            if (nivel > nivel_max) {
                nivel_max = nivel;
            }
        }

        std::cout << nivel_max << "\n";
    }
    
    return 0;
}