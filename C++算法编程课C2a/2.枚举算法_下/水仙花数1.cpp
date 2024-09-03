#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;

    int t = num;
    int n = 0;
    while (t > 0) {
        n++;
        t /= 10;
    }

    t = num;
    int sum = 0;
    while (t > 0) {
        sum += pow(t % 10, n);
        t /= 10;
    }

    if (sum == num) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}