#include <iostream>
using namespace std;

bool ily(int year) {
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    int count = 0;
    for (int year = x; year <= y; year++) {
        if (ily(year)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}