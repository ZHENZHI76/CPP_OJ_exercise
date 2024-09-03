/*
#include <iostream>
using namespace std;

long long dp[1005];

int main() {
    int M, N;
    cin >> M >> N;

    for (int i = 0; i <= N; ++i) {
        dp[i] = 0;
    }
    dp[M] = 1;
    dp[M + 1] = 1;

    for (int i = M + 2; i <= N; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[N] << endl;

    return 0;
}
*/
#include <iostream>
using namespace std;

const int MAXN = 1005;
int dp[1005][1005], len[1005];

void add(int a[], int b[], int c[]) {
    int len = max(a[0], b[0]);
    for (int i = 1; i <= len; i++) {
        c[i] += a[i] + b[i];
        if (c[i] >= 10) {
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
    }
    if (c[len + 1] > 0) len++;
    c[0] = len;
}

int main() {
    int M, N;
    cin >> M >> N;

    dp[M][0] = dp[M][1] = dp[M + 1][0] = dp[M + 1][1] = 1;
    len[M] = len[M + 1] = 1;

    for (int i = M + 2; i <= N; i++) {
        add(dp[i - 1], dp[i - 2], dp[i]);
        len[i] = dp[i][0];
    }

    for (int i = len[N]; i >= 1; i--) {
        cout << dp[N][i];
    }
    cout << endl;

    return 0;
}
