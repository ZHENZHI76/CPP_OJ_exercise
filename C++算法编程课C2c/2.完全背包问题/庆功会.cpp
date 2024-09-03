#include<iostream>
using namespace std;

int s[505];
int dp[6005];

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        int v, w;
        cin >> v >> w >> s[i];
        for(int j = m; j >= 0; j--) {
            for(int k = 0; k <= s[i] && k * v <= j; k++) {
                dp[j] = max(dp[j], dp[j - k * v] + k * w);
            }
        }
    }

    cout << dp[m] << endl;
    return 0;
}