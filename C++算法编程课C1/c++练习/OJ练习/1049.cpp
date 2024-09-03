#include <iostream>
using namespace std;

int main() {
    int r, m, y;
    cin >> r >> m >> y;

    double a = m;
    int years = 0;
    
    while (a <= y) {
        years++;
        a *= (1 + r / 100.0);
    }

    cout << years << endl;
    return 0;
}