#include <iostream>
#include <algorithm>
using namespace std;

int dp[35][205];

int main() {
    int m, n;
    cin >> m >> n;
    
    for (int i = 1; i <= n; i++) {
        int w, c, p;
        cin >> w >> c >> p;
        
        if (p == 1) { // 01背包
            for (int j = 0; j <= m; j++) {
                if (j >= w) {
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-w] + c);
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        } else if (p == 0) { // 完全背包
            for (int j = 0; j <= m; j++) {
                if (j >= w) {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-w] + c);
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        } else { // 多重背包
            for (int j = 0; j <= m; j++) {
                dp[i][j] = dp[i-1][j];
                for (int k = 1; k <= p && k * w <= j; k++) {
                    dp[i][j] = max(dp[i][j], dp[i-1][j - k * w] + k * c);
                }
            }
        }
    }
    
    cout << dp[n][m] << endl;
    
    return 0;
}