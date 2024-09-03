// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int a = 0, i = 1, j = 1;
//     while (n > 0) {
//         int k = min(i, n);
//         a += k * j;
//         n -= k;
//         i++;
//         j++;
//     }
//     cout << a << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0, i = 1, j = 1;
    while (n > 0) {
        if (n >= i) {
            a += i * j;
            n -= i;
            j++;
            i++;
        } else {
            a += n * j;
            n = 0;
        }
    }
    cout << a << endl;
    return 0;
}