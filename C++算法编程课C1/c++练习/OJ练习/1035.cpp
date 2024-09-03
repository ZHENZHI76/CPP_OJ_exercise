#include <iostream>

using namespace std;

int main() {
    int d;
    cin >> d;

    double wt = d / 1.2;
    double bt = 27 + d / 3.0 + 23;

    if (bt < wt) {
        cout << "Bike" << endl;
    } else if (bt > wt) {
        cout << "Walk" << endl;
    } else {
        cout << "All" << endl;
    }

    return 0;
}
