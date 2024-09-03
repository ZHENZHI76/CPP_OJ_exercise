#include <iostream>
using namespace std;

void f(int n) {
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            f(n / i);
            break;
        }
    }
}

int main() {
    int n;
    cin >> n;
    f(n);
    cout << endl;
    return 0;
}