#include <iostream>
using namespace std;

int main() {
    int a, b, c = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        int t = i;
        while (t) {
            if (t % 10 == 2) c++;
            t /= 10;
        }
    }
    cout << c << endl;
    return 0;
}