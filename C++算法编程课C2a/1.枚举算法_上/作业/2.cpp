#include <iostream>

using namespace std;

bool c(int num, int digit) {
    while (num > 0) {
        if (num % 10 == digit) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main() {
    int m, t;
    cin >> m >> t;
    int r = 0;
    for (int i = 1; i <= m; ++i) {
        if (!c(i, t)) {
            r++;
        }
    }
    cout << r << endl;
    return 0;
}