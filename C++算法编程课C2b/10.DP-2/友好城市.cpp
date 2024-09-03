#include <iostream>
#include <algorithm>

using namespace std;

struct C {
    int s, n;
};

bool db(C a, C b) {
    return a.s < b.s;
}

int main() {
    int n;
    cin >> n;
    C c[5005];
    for (int i = 1; i <= n; i++) {
        cin >> c[i].s >> c[i].n;
    }

    sort(c, c + n, db);

    int dp[5005];
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (c[i].n > c[j].n && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }

    int maxsq = 0;
    for (int i = 1; i <= n; i++) {
        maxsq = max(maxsq, dp[i]);
    }

    cout << maxsq << endl;

    return 0;
}