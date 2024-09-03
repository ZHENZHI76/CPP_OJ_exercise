#include <iostream>
using namespace std;

int main() {
    int d;
    while (cin >> d && d != 0) {
        int c = 0;
        int dc = 1;
        int dd = 1;

        while (d) {
            if (d < dd) {
                c += d * dc;
                d -= d;
            } else {
                c += dd * dc;
                d -= dd;
                dc += 1;
                dd += 1;
            }
        }

        cout << c << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int d; // 天数
    while (cin >> d && d != 0) { // 读取天数，如果天数不为0，则继续执行
        int c = 0; // 总金币数
        int dc = 1; // 当前的金币数
        int dd = 1; // 当前的天数

        while (d) {
            if (d < dd) { // 如果当前的天数小于dd
                c += d * dc; // 将天数乘以金币数加到总金币数上
                d -= d; // 将天数减去
            } else { // 如果当前的天数大于或等于dd
                c += dd * dc; // 将dd乘以金币数加到总金币数上
                d -= dd; // 将天数减去dd
                dc += 1; // 将金币数增加1
                dd += 1; // 将dd增加1
            }
        }

        cout << c << endl; // 输出总金币数
    }

    return 0;
}