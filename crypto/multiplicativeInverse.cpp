#include <iostream>

int gcdExtended(int a, int b, int &x, int &y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }

    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b % a, a, x1, y1);

    x = y1 - (b / a) * x1;
    y = x1;

    return gcd;
}

int modInverse(int a, int m) {
    int x, y;
    int gcd = gcdExtended(a, m, x, y);

    if (gcd != 1) {
        std::cerr << "Multiplicative Inverse doesn't exist" << std::endl;
        return -1;
    }

    return (x % m + m) % m;
}

int main() {
    int a, m;

    std::cout << "Enter the number (a): ";
    std::cin >> a;

    std::cout << "Enter the modulo (m): ";
    std::cin >> m;

    int result = modInverse(a, m);

    if (result != -1) {
        std::cout << "The multiplicative inverse of " << a << " modulo " << m << " is: " << result << std::endl;
    }

    return 0;
}