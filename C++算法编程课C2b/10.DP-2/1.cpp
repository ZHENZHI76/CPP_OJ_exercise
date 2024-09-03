#include<iostream>
#include<algorithm>
using namespace std;

struct city {
    int south, north;
} cities[5005];

bool cmp(city a, city b) {
    return a.south < b.south;
}

int dp[5005];

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> cities[i].south >> cities[i].north;
    }
    sort(cities + 1, cities + n + 1, cmp);

    for(int i = 1; i <= n; i++) {
        dp[i] = 1;
        for(int j = 1; j < i; j++) {
            if(cities[j].north <= cities[i].north) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        ans = max(ans, dp[i]);
    }

    cout << ans;

    return 0;
}