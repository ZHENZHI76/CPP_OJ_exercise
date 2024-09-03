#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;
    cout << "";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double area = 0.5 * abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)));
    cout << "" << fixed << setprecision(2) << area << endl;

    return 0;
}
