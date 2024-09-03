#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    bool l[5005] = {false};

    for (int i = 1; i <= M; i++) {
        for (int j = i; j <= N; j += i) {
            l[j - 1] = !l[j - 1];
        }
    }

    bool f = true;
    for (int i = 1; i <= N; i++) {
        if (l[i]) {
            if (!f) {
                cout << ",";
            }
            cout << (i + 1);
            f = false;
        }
    }

    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int N, M; // N代表灯的数量，M代表人的数量
    cin >> N >> M; // 从用户输入中获取N和M的值

    bool lights[5005] = {false}; // 创建一个布尔数组，表示每盏灯的状态。初始时，所有的灯都是关闭的。

    // 外层循环，遍历每个人
    for (int i = 1; i <= M; i++) {
        // 内层循环，遍历每盏灯。只有当灯的编号是人的编号的倍数时，才会改变灯的状态。
        for (int j = i; j <= N; j += i) {
            lights[j - 1] = !lights[j - 1]; // 改变灯的状态。如果灯是开的，就关闭它；如果灯是关的，就打开它。
        }
    }

    bool first = true; // 用于控制输出格式。如果是第一次输出，就不需要在前面加逗号。

    // 遍历所有的灯
    for (int i = 0; i < N; i++) {
        // 如果灯是关闭的
        if (lights[i]) {
            // 如果不是第一次输出，就在前面加一个逗号
            if (!first) {
                cout << ",";
            }
            // 输出灯的编号。注意，由于数组的索引是从0开始的，而灯的编号是从1开始的，所以需要加1。
            cout << (i + 1);
            first = false; // 一旦输出了一次，就将first设置为false，以便在后续的输出前加逗号。
        }
    }

    cout << endl; // 在所有的输出后面加一个换行符。

    return 0; // 程序正常结束
}
