#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100005;
int q[MAXN], front = 0, rear = 0; // 使用数组模拟队列，front 和 rear 分别表示队列的头部和尾部
int ans[MAXN], idx = 0; // ans 数组用于存储结果，idx 是结果的数量

int main() {
    int n, k, p;
    cin >> n >> k >> p; // 读取输入
    // 牌堆入队
    for (int i = 1; i <= k; i++) {
        q[rear++] = i; // 将 i 添加到队列的尾部，然后将 rear 加 1
    }
    int m = k / n; // 计算总共需要进行多少轮发牌
    // 每牌的轮数，每轮发一张好牌出来
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            // 如果 j == n，发给小明的
            if (j == n) {
                ans[idx++] = q[front]; // 将队列头部的元素添加到结果数组中，然后将 idx 加 1
            }
            // 出队
            front++; // 将 front 加 1，表示移除队列的头部元素
            // 牌顶的 p 张放到牌底
            for (int x = 1; x <= p; x++) {
                q[rear++] = q[front]; // 将队列头部的元素添加到队列的尾部，然后将 front 和 rear 都加 1
                front++;
            }
        }
    }
    // 对答案数组进行排序 升序
    sort(ans, ans + idx); // 使用 sort 函数对结果数组进行排序
    // 循环输出数组
    for (int i = 0; i < idx; i++) {
        cout << ans[i] << endl; // 输出结果数组的每个元素
    }
    return 0;
}