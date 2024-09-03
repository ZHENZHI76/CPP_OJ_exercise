// #include <iostream>
// using namespace std;

// int main() {
//     int m, k;
//     cin >> m >> k;
//     int a = 0;
//     while (m) {
//         if (m % 10 == 3) {
//             a++;
//         }
//         m /= 10;
//     }
//     if (a == k && m % 19 == 0) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int m, k;
    cin >> m >> k;
    int a = 0, b = m;
    while (b) {
        if (b % 10 == 3) {
            a++;
        }
        b /= 10;
    }
    if (a == k && m % 19 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}