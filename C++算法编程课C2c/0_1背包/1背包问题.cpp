#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    // T代表总共能够用来采药的时间，M代表山洞里的草药的数目
    int T, M;
    cin >> T >> M;

    // t[i]和v[i]分别表示第i株草药的采摘时间和价值
    // dp[j]表示在总时间为j的情况下，最多可以采集的草药的价值
    int t[105], v[105], dp[1005] = {0};

    // 读取每株草药的采摘时间和价值
    for(int i = 1; i <= M; i++) {
        cin >> t[i] >> v[i];
    }

    // 使用动态规划计算最大价值
    for(int i = 1; i <= M; i++) { // 外层循环，遍历每一株草药
        for(int j = T; j >= t[i]; j--) { // 内层循环，从总时间开始，到当前草药所需的时间结束
            // 对于每一株草药，我们都尝试一下是否采摘它
            // 如果采摘，那么dp[j]就是dp[j-t[i]]（即不采摘这株草药，剩余的时间可以采摘的最大价值）加上这株草药的价值v[i]，和dp[j]（即已经采摘的草药的最大价值）中的较大值
            dp[j] = max(dp[j], dp[j-t[i]] + v[i]);
        }
    }

    // 输出在总时间为T的情况下，最多可以采集的草药的价值
    cout << dp[T] << endl;
    return 0;
}