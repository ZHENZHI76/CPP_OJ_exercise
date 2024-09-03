#include <iostream>
using namespace std;

int POW(int x, int y) {
    int result = 1;
    for (int i = 1; i <= y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << POW(x, y) << endl;
    return 0;
}