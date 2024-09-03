#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double r1, r2;
    cout << "";
    cin >> r1 >> r2;

    double pr = 1 / (1/r1 + 1/r2);
    cout << "" << fixed << setprecision(2) << pr << endl;

    return 0;
}
