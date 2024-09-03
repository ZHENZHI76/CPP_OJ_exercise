#include <iostream>
using namespace std;

int main() {
    int lc, ec;
    cin >> lc >> ec;

    if (lc >= 10 || ec >= 20) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
