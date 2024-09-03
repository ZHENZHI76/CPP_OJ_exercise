#include <iostream>
#include <algorithm>
using namespace std;

int a[30005], b = 0, n, w;
bool zz[30005] = {0};

int main() {
    cin >> w >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int j = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (!zz[i]) {
            int l = a[i];
            zz[i] = 1;
            for (int j = i; j >= 0; j--) {
                if (l + a[j] <= w && !zz[j]) {
                    l += a[j];
                    zz[j] = 1;
                    break;
                }
            }
            b++;
        }
    }
    cout << b;
    return 0;
}