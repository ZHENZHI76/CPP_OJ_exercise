#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    cout << ((n - y / x) + abs(n - y / x)) / 2 << endl;

    return 0;
}

