#include <iostream>
#include <cmath>
using namespace std;

bool f(long long num) {
    long long t = num;
    int n = 0;
    while (t > 0) {
        n++;
        t /= 10;
    }

    t = num;
    long long sum = 0;
    while (t > 0) {
        sum += pow(t % 10, n);
        t /= 10;
    }

    return sum == num;
}

int main() {
    long long a, b;
    cin >> a >> b;

    bool s = 0;
    for (long long i = a; i <= b; i++) {
        if (f(i)) {
            cout << i << " ";
            s = 1;
        }
    }

    if (!s) {
        cout << "NO" << endl;
    }
    cout << endl;

    return 0;
}