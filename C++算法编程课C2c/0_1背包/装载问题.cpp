#include<iostream>
#include<algorithm>
using namespace std;
int w[45], dp[1005];
int main() {
    int n, c;
    cin >> n >> c;

    for(int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = c; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j-w[i]] + w[i]);
        }
    }

    cout << dp[c] << endl;
    
    return 0;
}