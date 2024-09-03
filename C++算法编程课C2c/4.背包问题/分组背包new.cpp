#include <iostream>
#include <algorithm>
using namespace std;

struct wp {
    int w, c, p;
};

bool cmp(wp a, wp b) {
    return a.p < b.p;
}

wp a[201];

int main() {
    int V, N, T;
    cin >> V >> N >> T;
    for (int i = 1; i <= N; i++) {
        cin >> a[i].w >> a[i].c >> a[i].p;
    }
    sort(a + 1, a + N + 1, cmp);

    int dp[11][201] = {0};
    int i = 1; // i是当前要分析的组号
    int id = 1; // id是当前要分析的物品下标

    while (i <= T) {
        for (int j = 0; j <= V; j++) {
            while (id <= N) {
                if (a[id].p == i) {
                    // 当前这个物品是第i组的
                    if (j >= a[id].w) {
                        dp[i][j] = max(dp[i][j], dp[i - 1][j - a[id].w] + a[id].c);
                    }
                    id++;
                } else {
                    break;
                }
            }
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
        }
        i++;
    }

    cout << dp[T][V] << endl;
    return 0;
}