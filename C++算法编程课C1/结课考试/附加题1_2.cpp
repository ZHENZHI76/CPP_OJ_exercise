#include<iostream>
using namespace std;

int dp[255];

int main() {
    int a;
    cin >> a;
    dp[0] = 1;
    for(int i = 1; i <= a; i++) {
        for(int j = i / 2; j >= 0; j--) {
            dp[i] += dp[j];
        }
    }
    cout << dp[a] << endl;
    return 0;
}