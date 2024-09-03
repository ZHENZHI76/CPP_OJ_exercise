#include <iostream>
using namespace std;

int dp[105][1005];

int main() {
    int T, M;
    cin >> T >> M;

    for(int i = 1; i <= M; i++) {
        int t, c;
        cin >> t >> c;

        for(int j = 1; j <= T; j++) {
            dp[i][j] = dp[i-1][j];
            if(j >= t) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-t] + c);
            }
        }
    }

    cout << dp[M][T];
    return 0;
}