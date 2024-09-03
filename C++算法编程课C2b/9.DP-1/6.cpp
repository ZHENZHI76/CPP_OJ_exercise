#include<iostream>
using namespace std;

int a[1005]; // 存储导弹高度
int dp1[1005]; // dp1[i]表示以a[i]为结尾的最长不升子序列的长度
int dp2[1005]; // dp2[i]表示以a[i]为结尾的最长上升子序列的长度

int main() {
    int n = 1; // 导弹数量
    while(cin >> a[n]) { // 读入导弹高度
        n++;
    }
    n--;

    for(int i = 1; i <= n; i++) {
        dp1[i] = dp2[i] = 1; // 初始化dp1[i]和dp2[i]为1，因为每个导弹自己就是一个长度为1的子序列

        for(int j = 1; j < i; j++) {
            if(a[j] >= a[i]) { // 如果a[j]大于等于a[i]，那么a[i]可以接在a[j]后面形成一个不升子序列
                dp1[i] = max(dp1[i], dp1[j] + 1); // 更新dp1[i]
            }

            if(a[j] < a[i]) { // 如果a[j]小于a[i]，那么a[i]可以接在a[j]后面形成一个上升子序列
                dp2[i] = max(dp2[i], dp2[j] + 1); // 更新dp2[i]
            }
        }
    }

    int maxn1 = 0; // 最长不升子序列的长度
    int maxn2 = 0; // 最长上升子序列的长度

    for(int i = 1; i <= n; i++) {
        maxn1 = max(maxn1, dp1[i]); // 更新最长不升子序列的长度
        maxn2 = max(maxn2, dp2[i]); // 更新最长上升子序列的长度
    }

    cout << maxn1 << endl << maxn2; // 输出最长不升子序列的长度和最长上升子序列的长度

    return 0;
}