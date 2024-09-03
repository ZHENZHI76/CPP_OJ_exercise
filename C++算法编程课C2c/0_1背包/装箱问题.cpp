#include<iostream>
#include<algorithm>
using namespace std;
int w[35], dp[20005];
int main() {
    int v, n;
    cin >> v >> n;

    for(int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = v; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j-w[i]] + w[i]);
        }
    }

    cout << v - dp[v] << endl;
    return 0;
}