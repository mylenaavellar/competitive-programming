#include <stdio.h>
#include <iostream>
 
int main() {
    int n, qtde{0}, led[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    std::string v;

    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        qtde = 0;
        std::cin >> v;
        
        for (int j = 0; j < v.length(); j++) {
            qtde += led[v[j] - '0'];
        }
        
        std::cout << qtde << " leds\n";
    }
    
    return 0;
}