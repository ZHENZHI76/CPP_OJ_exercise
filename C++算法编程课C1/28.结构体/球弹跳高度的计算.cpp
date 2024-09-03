#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double h;
    cin >> h;
    double t = h;
    for (int i = 1; i < 10; i++) {
        h /= 2;
        t += h * 2;
    }
    h /= 2;
    cout << t << endl;
    cout << h << endl;
    return 0;
}