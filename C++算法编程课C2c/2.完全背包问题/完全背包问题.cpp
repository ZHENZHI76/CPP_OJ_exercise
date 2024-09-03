#include<iostream>
#include<algorithm>
using namespace std;

int w[35], v[35], dp[205];
int main() {
    int M, N;
    cin >> M >> N;
    for(int i = 1; i <= N; i++) {
        cin >> w[i] >> v[i];
    }
    for(int i = 1; i <= N; i++) {
        for(int j = w[i]; j <= M; j++) {
            dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
        }
    }

    cout << dp[M] << endl;
    return 0;
}