#include <stdio.h>
#include <iostream>
 
int main() {
    int x, y, z, maior;

    std::cin >> x >> y >> z;

    maior = (x + y + abs(x - y))/2;
    maior = (maior + z + abs(maior - z))/2;
    
    std::cout << maior << " eh o maior\n";

    return 0;
}