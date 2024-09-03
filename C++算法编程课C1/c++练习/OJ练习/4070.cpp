#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    bool c1 = (a == 1) && (b + c + d > 100);
    bool c2 = (a == 2) && (b % 2 != 0) && (c < 0) && (d <= 50);
    bool c3 = (a == 3) && !(b) && (d <= b) && (d <= c);

    cout << (c1 || c2 || c3);

    return 0;
}
