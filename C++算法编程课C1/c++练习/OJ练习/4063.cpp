#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    int ly = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    cout << ly;

    return 0;
}
