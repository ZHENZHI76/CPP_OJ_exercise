#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int c = n / 2; c >= n / 3; c--) {
        for (int b = n / 4; b <= c; b++) {
            int a = n - b - c;
            if (a <= b && b <= c && a + b > c) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}