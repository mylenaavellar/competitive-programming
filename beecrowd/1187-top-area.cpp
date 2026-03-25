#include <iostream>
 
int main() {
    double m[12][12], total{0};
    char o;

    std::cin >> o;

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            std:: cin >> m[i][j];
        }
    }

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            if (i < j and i+j < 11) {
                total += m[i][j];
            }
        }
    }
    
    if (o == 'S') {
        printf("%.1f", total);
        std:: cout << '\n';
    } else {
        printf("%.1f", total/30);
        std:: cout << '\n';
    }
    
    return 0;
}