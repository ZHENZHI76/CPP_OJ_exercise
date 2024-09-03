#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long dp[41] = {1, 1, 2};
    for(int i = 3; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    cout << dp[n] << endl;
    return 0;
}