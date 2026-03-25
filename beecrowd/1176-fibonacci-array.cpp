#include <iostream>
 
int main() {
    int t, n;
    long long fibo[61];

    std::cin >> t;
    
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i < 61; ++i) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    for (int i = 0; i < t; ++i) {
        std::cin >> n;
        
        std::cout << "Fib(" << n << ") = " << fibo[n] << "\n";
    }
    
    return 0;
}