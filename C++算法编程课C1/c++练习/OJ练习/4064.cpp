#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    int cy = !((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

    cout << cy;

    return 0;
}
