#include <iostream>
using namespace std;

bool f(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 2; i <= n; i++) {
        if (f(i)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}