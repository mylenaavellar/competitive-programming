#include <stdio.h>
#include <iostream>
 
int main() {
    int x, y, soma{0};

    std::cin >> x >> y;

    if (x < y) {
        if (x % 2 == 0) {
            for (int i = x+1; i < y; i+=2) {
                soma += i;
            }
        } else {
            for (int i = x+2; i < y; i+=2) {
                soma += i;
            }
        }

        std::cout << soma<< "\n";
    } else if (x > y) {
        if (y % 2 == 0) {
            for (int i = y+1; i < x; i+=2) {
                soma += i;
            }
        } else {
            for (int i = y+2; i < x; i+=2) {
                soma += i;
            }
        }

        std::cout << soma << "\n";
    } else {
        std::cout << "0\n";
    }
    
    return 0;
}