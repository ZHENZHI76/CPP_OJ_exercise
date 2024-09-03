#include <iostream>
#include <algorithm>

using namespace std;

int tower[100][100];
int dp[100][100];

int main() {
    int n;
    cin >> n;

    // 输入数塔
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cin >> tower[i][j];
        }
    }

    // 初始化dp的最后一行
    for (int j = 0; j < n; ++j) {
        dp[n-1][j] = tower[n-1][j];
    }

    // 从底层到顶层计算最大和
    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]) + tower[i][j];
        }
    }

    // 输出最大和
    cout << dp[0][0] << endl;

    return 0;
}