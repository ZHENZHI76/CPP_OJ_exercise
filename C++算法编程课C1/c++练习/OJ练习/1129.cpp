#include <iostream>
using namespace std;

bool f(int n) {
    int a = 0;
    int temp = n;
    while (temp != 0) {
        a = a * 10 + temp % 10;
        temp /= 10;
    }
    return n == a;
}

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (f(i)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}