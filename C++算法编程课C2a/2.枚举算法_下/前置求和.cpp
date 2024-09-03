#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[10000010], sum[10000010] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }

    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        cout << a[l] << " " << a[r] << " " << sum[r] - sum[l - 1] << endl;
    }

    return 0;
}