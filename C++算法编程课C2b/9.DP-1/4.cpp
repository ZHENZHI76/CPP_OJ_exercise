#include <iostream>
#include <algorithm>
using namespace std;

int dp[1005][1005];

int main() {
    int r;
    cin >> r;

    for(int i = 1; i <= r; i++)
        for(int j = 1; j <= i; j++)
            cin >> dp[i][j];

    for(int i = r-1; i >= 1; i--)
        for(int j = 1; j <= i; j++)
            dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]) + dp[i][j];

    cout << "max=" << dp[1][1] << endl;

    return 0;
}