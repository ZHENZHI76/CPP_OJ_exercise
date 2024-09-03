#include <iostream>
#include <algorithm>

using namespace std;

// int cnt[15];
int dp[15][205];

struct wp {
    int w, c, p;
} a[35];

bool cmp(wp a, wp b) {
    return a.p < b.p;
}

int main() {
    int V, N, T;
    cin >> V >> N >> T;
    for (int i = 1; i <= N; i++) {
        cin >> a[i].w >> a[i].c >> a[i].p;
        /*
        int w, c, p;
        cin >> w >> c >> p;
        cnt[p]++;
        z[p][cnt[p]] = {w,c};
        */
    }
    sort(a + 1, a + N + 1, cmp);

    for (int i = 1; i <= T; i++) { //遍历每一组
        for (int j = 0; j <= V; j++) { //遍历背包容量
            dp[i][j] = dp[i - 1][j];
            for (int k = 1; k <= N; k++) { //遍历每一个物品
                if (a[k].p == i) { // if (j >= z[i][k].w)
                    if (j >= a[k].w) {
                        dp[i][j] = max(dp[i][j], dp[i - 1][j - a[k].w] + a[k].c); // 
                     // dp[i][j] = max(dp[i][j], dp[i - 1][j - z[i][k].w] + z[i][k].c);
                    }
                }
            }
            // dp[i][j] = max(dp[i][j], dp[i - 1][j]);
        }
    }

    cout << dp[T][V] << endl;
    return 0;
}