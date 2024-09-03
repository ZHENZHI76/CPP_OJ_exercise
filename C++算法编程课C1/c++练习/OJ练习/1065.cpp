#include <iostream>
using namespace std;

int main() {
    int n, a = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int b = i;
        while (b) {
            if (b % 10 == 1) a++;
            b /= 10;
        }
    }
    cout << a << endl;
    return 0;
}