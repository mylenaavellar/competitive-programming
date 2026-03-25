#include <stdio.h>
#include <iostream>
 
int main() {
    int l, c;

    std::cin >> l >> c;

    if (l % 2 == 0) {
        if (c % 2 == 0) {
            std::cout << "1";
        } else {
            std::cout << "0";
        }
    } else {
        if (c % 2 == 0) {
            std::cout << "0";
        } else {
            std::cout << "1";
        }
    }
    
    return 0;
}