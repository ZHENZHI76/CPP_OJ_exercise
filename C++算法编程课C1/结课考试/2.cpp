#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double h, r;
    cin >> h >> r;
    double V = (1.0/3.0) * 3.14159 * r * r * h;
    cout << fixed << setprecision(3) << V << endl;
    return 0;
}