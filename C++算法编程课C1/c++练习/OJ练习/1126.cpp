#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double cc(int w) {
    int m = ceil((double)w / 70);
    return m * 0.1;
}

int main() {
    int n;
    cin >> n;
    double t = 0;
    for (int i = 0; i < n; i++) {
        int w;
        cin >> w;
        t += cc(w);
    }
    cout << fixed << setprecision(1) << t << endl;
    return 0;
}