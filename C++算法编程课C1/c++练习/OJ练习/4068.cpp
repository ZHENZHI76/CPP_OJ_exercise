#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool M = (a >= b) && (a > c);
    
    cout << M;

    return 0;
}

