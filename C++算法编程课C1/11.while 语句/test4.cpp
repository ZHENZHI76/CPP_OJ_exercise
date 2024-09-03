// #include <iostream>
// using namespace std;

// int main() {
//     double a, b, c;
//     cin >> a >> b >> c;

//     //double cm = b;
//     int yrs = 0;
    
//     while (b <= c) {
//         b *= (1 + a / 100.0);
//         yrs++;
//     }

//     cout << yrs << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int s = 1;
    if (N < 0) {
        s = -1;
        N *= -1;
    }

    int reversed = 0;
    while (N > 0) {
        reversed = reversed * 10 + N % 10;
        N /= 10;
    }

    cout << reversed * s << endl;

    return 0;
}

