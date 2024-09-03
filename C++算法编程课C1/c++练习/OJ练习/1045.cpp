#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 0, c = 0;

    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;

        a += x;
        b += y;
        c += z;
    }

    int total = a + b + c;

    cout << a << " " << b << " " << c << " " << total << endl;

    return 0;
}


