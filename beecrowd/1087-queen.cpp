#include <iostream>

int main() {
    int x1, x2, y1, y2, delta_x, delta_y;
    
    while (std::cin >> x1 >> y1 >> x2 >> y2 and x1 != 0) {
        delta_x = std::abs(x2 - x1);
        delta_y = std::abs(y2 - y1);

        if (delta_x == 0 and delta_y == 0) {
            std::cout << "0\n";
            continue;
        }

        if ((delta_x == 0 or delta_y == 0) or (delta_x == delta_y)) {
            std::cout << "1\n";
            continue;
        }

        std::cout << "2\n";
    }
}
