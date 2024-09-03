#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int d;
    while (num > 0) {
        d = num % 10;
        cout << d << endl;
        num = num / 10;
    }
    return 0;
}