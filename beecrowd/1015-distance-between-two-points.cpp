#include <stdio.h>
#include <iostream>
#include <cmath>
 
int main() {
    float x1, y1, x2, y2, d;

    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;

    d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("%.4f", d);

    return 0;
}