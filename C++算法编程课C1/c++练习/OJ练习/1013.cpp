#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;

    double length = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
    cout << fixed << setprecision(3) << length << endl;

    return 0;
}
