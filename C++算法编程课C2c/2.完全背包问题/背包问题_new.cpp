#include <iostream>
using namespace std;

int dp[1005];
int main() {
    int T, M;
    cin >> T >> M;

    for(int i = 1; i <= M; i++) {
        int t, c;
        cin >> t >> c;
        for(int j = T; j <= t; j++) {
            dp[j] = max(dp[j], dp[j-t] + c);
        }
    }

    cout << dp[T] << endl;
    return 0;
}
