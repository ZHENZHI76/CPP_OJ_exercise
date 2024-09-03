#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    int a[105], dp1[105], dp2[105];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp1[i] = 1;
        dp2[i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (a[j] < a[i]) {
                dp1[i] = max(dp1[i], dp1[j] + 1);
            }
        }
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            if (a[j] < a[i]) {
                dp2[i] = max(dp2[i], dp2[j] + 1);
            }
        }
    }
    int maxl = 0;
    for (int i = 1; i <= n; i++) {
        maxl = max(maxl, dp1[i] + dp2[i] - 1);
    }
    cout << n - maxl << endl;

    return 0;
}