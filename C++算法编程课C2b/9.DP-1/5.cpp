#include<iostream>
using namespace std;
int a[1005], dp[1005], s[1005];
int main() {
    int n = 1;
    while (cin >> a[n])
        n++;
    n--;
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++)
            if (a[j] >= a[i])
                dp[i] = max(dp[i], dp[j] + 1);
    }
    int maxn = 0;
    for (int i = 1; i <= n; i++) {
        maxn = max(maxn, dp[i]);
    }
    cout << maxn << endl;
    
    int scnt = 0;
    for (int i = 1; i <= n; i++) {
        int j = 0;
        for (j = 0; j < scnt; j++) {
            if (s[j] >= a[i]) {
                s[j] = a[i];
                break;
            }
        }
        if (j == scnt) {
            s[scnt++] = a[i];
        }
    }
    cout << scnt << endl;
    return 0;
}