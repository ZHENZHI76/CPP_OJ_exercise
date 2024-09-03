#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char t;
    int p;
    cin >> t >> p;
    double d;
    switch (t) {
        case 'P':
            d = 0.7;
            break;
        case 'G':
            d = 0.8;
            break;
        case 'S':
            d = 0.9;
            break;
        default:
            d = 0.95;
            break;
    }
    cout << fixed << setprecision(2) << p * d << endl;
    return 0;
}