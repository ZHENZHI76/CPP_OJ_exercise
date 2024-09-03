// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int a = n / 100;
//     int b = n / 10 % 10;
//     int c = n % 10;
//     cout << c << b << a << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int a = n / 100;
//     int b = n / 10 % 10;
//     int c = n % 10;
//     int sum = a + b + c;
//     int i = (sum >= 1) * (sum <= 27) * (n >= 100) * (n <= 999);
//     int o = i * (c * 100 + b * 10 + a) + (1 - i) * 1000;
//     cout << o << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    char a, b, c;
    cin >> a >> b >> c;
    cout << c << b << a << endl;
    return 0;
}
