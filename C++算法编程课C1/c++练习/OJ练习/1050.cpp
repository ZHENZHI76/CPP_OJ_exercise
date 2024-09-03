#include <iostream>
using namespace std;

int f(int k) {
    if (k <= 1) {
        return k;
    }
    int a = 0, b = 1;
    for (int i = 2; i <= k; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int k;
    cin >> k;
    cout << f(k) << endl;
    return 0;
}
