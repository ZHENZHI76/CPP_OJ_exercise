#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++) {
        int a = i;
        bool b = false;
        while (a) {
            if (a % 10 == 7) {
                b = true;
                break;
            }
            a /= 10;
        }
        if (!b && i % 7 != 0) s += i * i;
    }
    cout << s << endl;
    return 0;
}