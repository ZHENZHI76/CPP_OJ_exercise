#include<iostream>
#include<algorithm>
using namespace std;

int dp[205];

int main() {
    int m, n;
    cin >> m >> n;

    int w[205], c[205], num = 0;
    for(int i = 1; i <= n; i++) {
        int weight, cost, amount;
        cin >> weight >> cost >> amount;
        if(amount == 0) { // 完全背包
            for(int j = weight; j <= m; j++) {
                dp[j] = max(dp[j], dp[j - weight] + cost);
            }
        } else if(amount == 1) { // 01背包
            for(int j = m; j >= weight; j--) {
                dp[j] = max(dp[j], dp[j - weight] + cost);
            }
        } else { // 多重背包
            int k = 1;
            while(k < amount) {
                w[++num] = k * weight;
                c[num] = k * cost;
                amount -= k;
                k *= 2;
            }
            w[++num] = amount * weight;
            c[num] = amount * cost;
            for(int i = 1; i <= num; i++) {
                for(int j = m; j >= w[i]; j--) {
                    dp[j] = max(dp[j], dp[j - w[i]] + c[i]);
                }
            }
        }
    }
    cout << dp[m] << endl;
    return 0;
}