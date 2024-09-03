#include <iostream>
using namespace std;

int main() {
    // 定义邮件数量N和查询数量M
    int N, M;
    // 从输入中读取N和M
    cin >> N >> M;

    // 定义一个数组vcnt，用于存储每个邮件体积的数量
    // 数组的索引是邮件的体积，数组的值是该体积的邮件的数量
    int vcnt[1000005] = {0};

    // 遍历每个邮件
    for (int i = 1; i <= N; i++) {
        // 定义邮件体积v
        int v;
        // 从输入中读取邮件体积v
        cin >> v;
        // 将vcnt[v]的值增加1，表示体积为v的邮件的数量增加了1
        vcnt[v]++;
    }

    // 遍历每个查询
    for (int i = 1; i <= M; i++) {
        // 定义查询q
        int q;
        // 从输入中读取查询q
        cin >> q;
        // 输出vcnt[q]的值，表示体积为q的邮件的数量
        cout << vcnt[q] << " ";
    }

    return 0;
}