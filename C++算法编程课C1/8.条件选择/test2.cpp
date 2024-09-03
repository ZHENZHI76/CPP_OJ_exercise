#include <iostream>
using namespace std;

int main() {
    int year, month, days;

    cin >> year >> month;

    switch (month) {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            days = 31;
            break;
    }

    cout << days << endl;
}