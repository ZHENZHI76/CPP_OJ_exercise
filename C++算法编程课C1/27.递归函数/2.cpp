#include <iostream>
using namespace std;

void c(long long n) {
    if (n == 1) {
        cout << "End" << endl;
        return;
    }

    if (n % 2 == 0) {
        cout << n << "/2=" << n / 2 << endl;
        c(n / 2);
    } else {
        cout << n << "*3+1=" << n * 3 + 1 << endl;
        c(n * 3 + 1);
    }
}

int main() {
    long long n;
    cin >> n;
    c(n);
    return 0;
}