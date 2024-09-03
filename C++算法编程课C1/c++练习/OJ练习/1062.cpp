#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double e = 1, a = 1;
    for (int i = 1; i <= n; i++) {
        a *= i;
        e += 1.0 / a;
    }
    cout << fixed << setprecision(10) << e << endl;
    return 0;
}