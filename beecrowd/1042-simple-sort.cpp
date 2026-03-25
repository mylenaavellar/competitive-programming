#include <stdio.h>
#include <iostream>
 
int main() {
    int n[3], n_ord[3], temp;

    for (int i=0; i < 3; i++) {
        std::cin >> n[i];
        n_ord[i] = n[i];
    }

    if (n_ord[0] > n_ord[1]) {
        temp = n_ord[0];
        n_ord[0] = n_ord[1];
        n_ord[1] = temp;
    }

    if (n_ord[1] > n_ord[2]) {
        temp = n_ord[1];
        n_ord[1] = n_ord[2];
        n_ord[2] = temp;
    }

    if (n_ord[0] > n_ord[1]) {
        temp = n_ord[0];
        n_ord[0] = n_ord[1];
        n_ord[1] = temp;
    }
    
    for (int i = 0; i < 3; i++) {
        std::cout << n_ord[i] << "\n";
        if (i == 2) {
            std::cout << "\n";
        }
    }

    for (int i = 0; i < 3; i++) {
        std::cout << n[i] << "\n";
    }

    return 0;
}