#include <iostream>
#include <algorithm>
using namespace std;

int dp[6005];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        int v, w, s;
        cin >> v >> w >> s;

        // 二进制拆分
        int k = 1;
        while (s > 0) {
            int num = min(k, s);
            s -= num;
            int cost = num * v;
            int value = num * w;
            for (int j = m; j >= cost; j--) {
                dp[j] = max(dp[j], dp[j - cost] + value);
            }
            k *= 2;
        }
    }

    cout << dp[m] << endl;
    return 0;
}