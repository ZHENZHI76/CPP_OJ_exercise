#include<iostream>
#include<algorithm>
using namespace std;

int dp[205], v[205], w[205];

int main() {
    int m, n;
    cin >> m >> n;

    int cnt = 0;
    while(n--) {
        int a, b, s;
        cin >> a >> b >> s;

        // 确定物品的真实上限
        s = min(m/a, s);
        int k = 1;
        while(k < s) {
            v[cnt] = k * a; // 体积
            w[cnt] = k * b; // 价值
            s -= k;
            k *= 2; // 或者 k <<= 1;
            cnt++;
        }

        // 如果有剩余的物品，独自成为一组
        if(s > 0) {
            v[cnt] = s * a;
            w[cnt] = s * b;
            cnt++;
        }
    }

    // 对cnt个物品进行处理
    for(int i = 0; i < cnt; i++) {
        for(int j = m; j >= v[i]; j--) {
            dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
        }
    }

    // 输出在不超过背包容量的情况下，可以获得的最大价值
    cout << dp[m] << endl;
    return 0;
}