#include <iostream>
#include <cmath>

bool myip(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void f(int n, int& p1, int& p2) {
    for (int i = 2; i <= n / 2; i++) {
        if (myip(i) && myip(n - i)) {
            p1 = i;
            p2 = n - i;
            return;
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    int p1, p2;
    f(n, p1, p2);
    std::cout << n << " = " << p1 << " + " << p2;
    return 0;
}