#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    char c, s;
    cin >> n >> c >> s;
    double p = n * 12.0;
    if (c == 'y') {
        p += n * 5.0;
    }
    if (s == 'y') {
        p += n * 3.0;
    }
    if (n >= 50) {
        p *= 0.9;
    }
    cout << fixed << setprecision(2) << p << endl;
    return 0;
}