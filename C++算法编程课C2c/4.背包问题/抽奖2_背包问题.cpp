#include <iostream>
using namespace std;

int main() {
    int n, win;
    cin >> n;
    
    int winningNumbers[100]; // 假设 n 最大为 100
    for (int i = 0; i < n; ++i) {
        cin >> winningNumbers[i];
    }
    
    cin >> win;
    
    // 动态规划数组，初始化为 false
    bool dp[10000] = {false};
    dp[0] = true; // 和为 0 的子集是存在的（空子集）
    
    for (int i = 0; i < n; ++i) {
        for (int j = 9999; j >= winningNumbers[i]; --j) {
            if (dp[j - winningNumbers[i]]) {
                dp[j] = true;
            }
        }
    }
    
    if (dp[win]) {
        for (int i = 0; i < n; ++i) {
            if (winningNumbers[i] == win) {
                cout << i + 1 << endl;
                return 0;
            }
        }
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}