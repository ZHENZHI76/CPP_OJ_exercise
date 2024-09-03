#include <iostream>
using namespace std;

int mygcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mygcd(b, a % b);
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << mygcd(m, n) << endl;
    return 0;
}