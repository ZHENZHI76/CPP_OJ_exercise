#include <iostream>
#include <cmath>
using namespace std;

int zxl(int num) {
    long long res = 0;
    int p = 0;
    while (num > 0) {
        int d = num % 10;
        res += d * pow(2, p);
        num /= 10;
        p++;
    }
    return res;
}

int main() {
    int num;
    cin >> num;
    cout << zxl(num) << endl;
    return 0;
}