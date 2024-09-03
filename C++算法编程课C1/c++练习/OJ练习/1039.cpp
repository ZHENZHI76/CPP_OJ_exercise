#include <iostream>

using namespace std;

bool ily(int y) {
    if (y % 4 == 0) {
        if (y % 100 != 0 || (y % 100 == 0 && y % 400 == 0)) {
            return true;
        }
    }
    return false;
}

int main() {
    int y;
    cin >> y;

    if (ily(y)) {
        cout << "Y" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
