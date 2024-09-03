#include <iostream>
using namespace std;

int main() {
    int x, y, d;

    cin >> x >> y;

    switch (y) {
        case 2:
            if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
                d = 29;
            } else {
                d = 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            d = 30;
            break;
        default:
            d = 31;
            break;
    }

    cout << d << endl;
}