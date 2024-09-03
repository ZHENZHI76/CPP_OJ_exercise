#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    int r = 0;
    while (a > 0) {
        r = r * 10 + a % 10;
        a /= 10;
    }

    while (r > 0) {
        int d = r % 10;
        cout << d << " ";
        r /= 10;
    }
    cout << endl;

    return 0;
}
