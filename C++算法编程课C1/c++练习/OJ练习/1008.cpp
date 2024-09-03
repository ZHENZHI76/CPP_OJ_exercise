// #include <iostream>
// #include <iomanip>

// using namespace std;

// int main() {
//     double fahrenheit;
//     cin >> fahrenheit;

//     double celsius = 5 * (fh - 32) / 9;
//     cout << fixed << setprecision(5) << celsius << endl;

//     return 0;
// }

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int fh;
    cin >> fh;

    //double C = 5 * (fh - 32) / 9;
    cout << fixed << setprecision(5) << 1.0 * 5 * (fh - 32) / 9 << endl;

    return 0;
}