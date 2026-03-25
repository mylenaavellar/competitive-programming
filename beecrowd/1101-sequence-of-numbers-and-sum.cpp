#include <iostream>
 
int main() {
    int n, m, sum{0}, id{0};

    while (std::cin >> n >> m and n > 0 and m > 0) {
        if (n < m) {
            for (int i = n; i < m + 1; ++i) {
                std::cout << i << " ";
                sum += i;
            }
        } else {
            for (int i = m; i < n + 1; ++i) {
                std::cout << i << " ";
                sum += i;
            }
        }

        std::cout << "Sum=" << sum << "\n";
        sum = 0;
    }
    
    return 0;
}