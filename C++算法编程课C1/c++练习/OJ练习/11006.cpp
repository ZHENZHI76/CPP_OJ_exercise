#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a = 1, b = 1, c = 1;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << endl;
    return 0;
}