#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;
    double m;
    if (t <= 30) {
        m = 3.5;
    } else {
        m = 1.5;
    }
    cout << fixed << setprecision(1) << m << endl;
    return 0;
}