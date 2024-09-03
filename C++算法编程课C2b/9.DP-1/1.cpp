#include <vector>
#include <algorithm>

int minCostClimbingStairs(std::vector<int>& cost) {
    int n = cost.size();
    std::vector<int> dp(n);
    dp[0] = cost[0];
    dp[1] = cost[1];
    for (int i = 2; i < n; i++) {
        dp[i] = std::min(dp[i - 1], dp[i - 2]) + cost[i];
    }
    return std::min(dp[n - 1], dp[n - 2]);
}