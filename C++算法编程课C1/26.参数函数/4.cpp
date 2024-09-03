#include <iostream>
#include <cmath>
using namespace std;

bool a(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int countPrimes(int n) {
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (a(i)) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countPrimes(n);
    return 0;
}