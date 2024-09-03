#include <iostream>
using namespace std;
int main() {
    int N, M; // N表示邮件的数量，M表示询问的次数
    cin >> N >> M; // 输入邮件的数量和询问的次数

    int a[1000005]; // a数组用来存储邮件的体积
    int b[1005]; // b数组用来存储每次询问的邮件体积

    // 输入邮件的体积
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }

    // 输入每次询问的邮件体积
    for (int i = 1; i <= M; i++) {
        cin >> b[i];
    }

    // 对每次询问进行处理
    for (int i = 1; i <= M; i++) {
        int cnt = 0; // cnt用来计数体积为b[i]的邮件的数量
        // 遍历所有的邮件
        for (int j = 1; j <= N; j++) {
            // 如果邮件的体积等于b[i]，则cnt加1
            if (a[j] == b[i]) {
                cnt++;
            }
            // 如果邮件的体积大于b[i]，则结束循环，因为邮件的体积是从小到大排列的
            if (a[j] > b[i]) {
                break;
            }
        }
        // 输出体积为b[i]的邮件的数量
        cout << cnt << " ";
    }
}