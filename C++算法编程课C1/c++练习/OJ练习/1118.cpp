#include <iostream>
using namespace std;

bool isp(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (isp(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}