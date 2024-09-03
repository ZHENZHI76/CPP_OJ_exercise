#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char c;
    double i, dper, dpri;

    cout << "";
    cin >> c;

    cout << "";
    cin >> i;

    switch (c) {
        case 'P':
            dper = 0.7;
            break;
        case 'G':
            dper = 0.8;
            break;
        case 'S':
            dper = 0.9;
            break;
        default:
            dper = 0.95;
            break;
    }

    dpri = i * dper;

    cout << "" << fixed << setprecision(2) << dpri << endl;

    return 0;
}