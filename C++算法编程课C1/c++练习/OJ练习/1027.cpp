#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    int ascii = (int)ch;

    if (ascii % 2 == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
