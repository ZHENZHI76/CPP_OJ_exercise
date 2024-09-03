#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int d1 = n % 10;
    int d2 = (n / 10) % 10;
    int d3 = n / 100;

    cout << d1 << d2 << d3 << endl;

    return 0;
}
