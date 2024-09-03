#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double xa, ya;
    cin >> xa >> ya;
    
    double xb, yb;
    cin >> xb >> yb;
    
    double x_d = xb - xa;
    double y_d = yb - ya;

    double length = sqrt(x_d * x_d + y_d * y_d);

    cout << fixed << setprecision(3) << length << endl;

    return 0;
}
