#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int dp[1005] = {0};
    dp[m] = 1;
    for (int i = m + 1; i <= n; i++) {
        for (int j = m; j < i; j++) {
            dp[i] += dp[j];
        }
    }
    cout << dp[n] << endl;
}