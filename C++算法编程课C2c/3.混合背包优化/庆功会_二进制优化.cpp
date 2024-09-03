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

        for (int k = 1; s > 0; k <<= 1) {
            int num = min(k, s);
            s -= num;
            int xinde_v = num * v;
            int xinde_w = num * w;
            for (int j = m; j >= xinde_v; j--) {
                dp[j] = max(dp[j], dp[j - xinde_v] + xinde_w);
            }
        }
    }

    cout << dp[m] << endl;
    return 0;
}