#include <iostream>

using namespace std;

bool isTriangle(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        return true;
    }
    return false;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (isTriangle(a, b, c)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
