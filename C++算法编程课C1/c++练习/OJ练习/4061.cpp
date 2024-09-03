#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int cft = (a + b > c) && (a + c > b) && (b + c > a);

    cout << cft;

    return 0;
}
