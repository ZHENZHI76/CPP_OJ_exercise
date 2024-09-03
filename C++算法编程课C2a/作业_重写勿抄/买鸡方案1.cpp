#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i <= 33; i++) {
        for (int j = 0; j <= 100; j++) {
            int k = n - i - j;
            if (k >= 0 && k % 3 == 0 && i * 3 + j + k / 3 == 100) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}