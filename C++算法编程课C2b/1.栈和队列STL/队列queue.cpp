#include<iostream>
#include<queue>
using namespace std;

queue<int> q;

int main() {
    int n, m;
    cin >> n >> m;
    q.push(m); // m入队
    for(int i = 1; i <= n; i++) {
        int h = q.front(); // 获取队首元素
        q.pop(); // 出队
        long long s = (long long)h * 123456; // 注意这里可能会有大数，所以我们使用long long类型
        while(s) {
            q.push(s % 1000); // 后三位入队
            s /= 1000; // 去掉后三位
        }
    }
    return 0;
}