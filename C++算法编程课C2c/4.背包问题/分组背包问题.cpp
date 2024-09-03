#include <iostream>
#include <algorithm>
using namespace std;

int dp[101][101]; // 假设最大N和V均为100

int main() {
    int N, V;
    cin >> N >> V;

    for (int i = 1; i <= N; ++i) {
        int Si;
        cin >> Si;
        int v[101], w[101]; // 假设每组最多有100个物品
        for (int j = 1; j <= Si; ++j) {
            cin >> v[j] >> w[j];
        }

        // 从大到小遍历背包容量
        for (int j = V; j >= 0; --j) {
            // 当前组一个都不拿
            // dp[i][j] = dp[i-1][j];
            // 当前组只拿第 k 个物品
            for (int k = 0; k <= Si; ++k) {
                if (j >= v[k]) {
                    dp[i][j] = max(dp[i][j], dp[i-1][j - v[k]] + w[k]);
                }
            }
        }
    }

    cout << dp[N][V] << endl;

    return 0;
}