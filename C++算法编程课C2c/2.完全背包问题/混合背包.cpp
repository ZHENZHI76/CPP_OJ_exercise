#include<iostream>
#include<algorithm>
using namespace std;
int dp[205];
int main() {
    int m, n;
    cin >> m >> n;

    for(int i = 1; i <= n; i++) {
        int w, c, p;
        cin >> w >> c >> p;
        /*
        if(p == 1) {
            for(int j = w; j <= m; j++) {
                dp[j] = max(dp[j], dp[j - w] + c);
            }
        } else */ 
        if(p == 0) {
            for(int j = m; j >= w; j--) {
                dp[j] = max(dp[j], dp[j - w] + c);
            }
        } else {
            for(int j = m; j >= 0; j--) {
                for(int k = 0; k <= min(m/w, p) && k * w <= j; k++) {
                    dp[j] = max(dp[j], dp[j - k * w] + k * c);
                }
            }
        }
    }

    cout << dp[m] << endl;
    return 0;
}