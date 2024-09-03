#include <iostream>

using namespace std;

struct E {
    int v;
    int l;
};

int main() {
    int n;
    cin >> n;
    int a[205];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    E dp[205];
    int m = 0;
    for (int i = 0; i < n; i++) {
        E e = {a[i], 1};
        dp[i] = e;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i] && dp[j].l + 1 > dp[i].l) {
                E e = {a[i], dp[j].l + 1};
                dp[i] = e;
            }
        }
        m = max(m, dp[i].l);
    }

    cout << "max=" << m << endl;
    int ans[205];
    int t = m;
    for (int i = n - 1; i >= 0; i--) {
        if (dp[i].l == t) {
            ans[--t] = dp[i].v;
        }
    }
    for (int i = 0; i < m; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}