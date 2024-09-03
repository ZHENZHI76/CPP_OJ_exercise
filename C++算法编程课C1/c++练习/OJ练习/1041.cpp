#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    char ms;
    int p;
    double d;

    cin >> ms >> p;

    if (ms == 'P') {
        d = 0.7;
    } else if (ms == 'G') {
        d = 0.8;
    } else if (ms == 'S') {
        d = 0.9;
    } else {
        d = 0.95;
    }

    double py = p * d;

    cout << fixed << setprecision(2) << py << endl;

    return 0;
}
