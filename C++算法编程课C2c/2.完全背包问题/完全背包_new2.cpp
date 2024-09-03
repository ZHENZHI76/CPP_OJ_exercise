#include<iostream>
using namespace std;

int dp[6005];
int main() {
    int N, M;
    cin >> M >> N;

    for(int i = 1; i <= N; i++) {
        int w, c;
        cin >> w >> c;
        for(int j = w; j <= M; j++) {
            for(int k = 0; k * w <= j; k++) {
                dp[j] = max(dp[j], dp[j - k * w] + k * c);
            }
        }
    }

    cout << "max=" << dp[M] << endl;
    return 0;
}