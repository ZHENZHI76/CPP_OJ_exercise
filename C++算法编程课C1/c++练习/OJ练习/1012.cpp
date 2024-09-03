// #include <iostream>
// using namespace std;

// int main() {
//     int h, r;
//     cout << "";
//     cin >> h >> r;

//     double pi = 3.14159;
//     double bv = pi * r * r * h;
//     int rb = (int)(20 / (bv / 1000)) + 1;

//     cout << "" << rb << endl;

//     return 0;
// }
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int h, r;
    cout << "";
    cin >> h >> r;

    double pi = 3.14159;
    double bv = pi * pow(r, 2) * h;
    int rb = int(20 / (bv / 1000)) + 1;

    cout << "" << rb << endl;

    return 0;
}


