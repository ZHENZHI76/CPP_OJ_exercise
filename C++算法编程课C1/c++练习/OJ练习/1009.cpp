#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    // double r;
    int r;
    cin >> r;

    // double d = 2 * r;
    // double circ = 2 * 3.1415926 * r;
    // double area = 3.1415926 * r * r;

    cout << fixed << setprecision(4) << 1.0 * 2 * r << " " << 1.0 * 2 * 3.1415926 * r<< " " << 1.0 * 3.1415926 * r * r << endl;

    return 0;
}