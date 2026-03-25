#include <iostream>
 
int main() {
    int n, c, l, xx, x, v, ii, i;

    std::cin >> n;
    std::cout << n << "\n";

    c = abs(n/100);
    n -= c*100;

    l = abs(n/50);
    n -= l*50;

    xx = abs(n/20);
    n -= xx*20;

    x = abs(n/10);
    n -= x*10;

    v = abs(n/5);
    n -= v*5;

    ii = abs(n/2);
    n -= ii*2;

    i = n;

    std::cout << c << " nota(s) de R$ 100,00\n";
    std::cout << l << " nota(s) de R$ 50,00\n";
    std::cout << xx << " nota(s) de R$ 20,00\n";
    std::cout << x << " nota(s) de R$ 10,00\n";
    std::cout << v << " nota(s) de R$ 5,00\n";
    std::cout << ii << " nota(s) de R$ 2,00\n";
    std::cout << i << " nota(s) de R$ 1,00\n";
    
    return 0;
}