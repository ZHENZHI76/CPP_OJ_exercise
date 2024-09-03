#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;

    bool l = a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z';

    cout << l;

    return 0;
}