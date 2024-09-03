#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double h;
    cin >> h;

    double td = h + 2 * (h/2) * (1 - pow(1/2.0, 9)) / (1 - 1/2.0);

    double h10 = h / pow(2, 10);

    cout << fixed << setprecision(4) << td << endl;
    cout << fixed << setprecision(7) << h10 << endl;

    return 0;
}