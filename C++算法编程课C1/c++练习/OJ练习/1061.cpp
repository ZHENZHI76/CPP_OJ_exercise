#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0, a = 1;
    for (int i = 1; i <= n; i++) {
        a *= i;
        sum += a;
    }
    cout << sum << endl;
    return 0;
}