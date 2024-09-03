#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    bool h = !(a) || !(b) || !(a - b) || !((a + b) % 5 - 1);

    cout << h;

    return 0;
}