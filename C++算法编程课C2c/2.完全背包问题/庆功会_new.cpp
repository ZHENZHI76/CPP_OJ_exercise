#include<iostream>
using namespace std;

int dp[6005];

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        int v, w, s;
        cin >> v >> w >> s;
        for(int j = m; j >= 0; j--) {
            for(int k = 0; k <= s && k * v <= j; k++) {
                dp[j] = max(dp[j], dp[j - k * v] + k * w);
            }
        }
    }

    cout << dp[m] << endl;
    return 0;
}