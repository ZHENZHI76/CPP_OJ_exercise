#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // 将所有的橡皮擦转换为零散的块数
    int total_blocks = a * 10 * 8 + b * 8 + c;

    // 计算可以打包成多少箱
    int boxes = total_blocks / (24 * 10 * 8);
    // 计算剩下的块数
    int remaining_blocks = total_blocks % (24 * 10 * 8);

    // 计算剩下的块数可以打包成多少盒
    int boxes_remaining = remaining_blocks / (10 * 8);
    // 再次计算剩下的块数
    remaining_blocks = remaining_blocks % (10 * 8);

    // 计算剩下的块数可以打包成多少包
    int packages = remaining_blocks / 8;
    // 最后剩下的块数
    remaining_blocks = remaining_blocks % 8;

    // 输出结果
    cout << boxes << endl;
    cout << boxes_remaining << endl;
    cout << packages << endl;
    cout << remaining_blocks << endl;

    return 0;
}

