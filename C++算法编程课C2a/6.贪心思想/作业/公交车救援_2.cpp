#include <algorithm>
#include <iostream>
using namespace std;

int a[30005], num = 0, n, w;
bool zz[30005] = {0};

int main() {
    cin >> w >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--) {
        int l = a[i];
        if (a[i] != zz[i]) {
            a[i] = zz[i];
            for (int j = i; j >= 0; j--) {
                if (l + a[j] <= w && a[j] != zz[j]) {
                    l += a[j];
                    a[j] = zz[j];
                }
            }
            num++;
        }
    }
    cout << num;
    return 0;
}