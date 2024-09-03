#include <iostream>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    for (int i = 0; i < x; ++i) {  // 读取被填色的行号，但实际上我们并不需要这些值
        int temp;
        cin >> temp;
    }
    for (int i = 0; i < y; ++i) {  // 读取被填色的列号，但实际上我们并不需要这些值
        int temp;
        cin >> temp;
    }
    long long total = (long long)n * m;  // 计算总的小方格数量
    long long colored = (long long)x * m + (long long)y * n - (long long)x * y;  // 计算被填色的小方格数量
    cout << total - colored << endl;  // 输出未被填色的小方格数量
    return 0;
}