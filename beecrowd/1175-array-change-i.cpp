#include <stdio.h>
#include <iostream>
 
int main() {
    int n[20];

    for (int i=0; i < 20; i++) {
        std::cin >> n[19-i];
    }

    for (int i=0; i < 20; i++) {
        std::cout << "N[" << i << "] = " << n[i] << "\n";
    }
    return 0;
}