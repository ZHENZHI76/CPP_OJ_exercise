#include <iostream>
#include <algorithm>
using namespace std;

const int N = 510;
int a[N][N], dp[N][N];
int n;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= i; j++)
            cin >> a[i][j];

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= i; j++)
            dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + a[i][j];

    int res = 0;
    for(int i = 1; i <= n; i++) res = max(res, dp[n][i]);

    cout << res << endl;

    return 0;
}