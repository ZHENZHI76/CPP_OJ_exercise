#include <iostream>
using namespace std;

long long digital(long long n, int k) {
    for (int i = 1; i < k; i++) {
        n = n / 10;
    }
    int digit = n % 10;
    return digit;
}

int main() {
    long long n;
    int k;
    cin >> n >> k;
    cout << digital(n, k) << endl;
    return 0;
}