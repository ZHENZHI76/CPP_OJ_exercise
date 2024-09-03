#include <iostream>
using namespace std;

void generateSchedule(int m) {
    int N = 1 << m; // 使用位运算计算 2^m
    int schedule[N][N];

    // 初始化比赛日程表
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            schedule[i][j] = 0;
        }
    }

    // 使用循环赛算法填充比赛日程表
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            int opponent = (i + j) % (N - 1);
            if (j == 0) {
                opponent = N - 1;
            }
            schedule[i][j] = opponent + 1;
        }
    }

    // 输出比赛日程表
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            cout << schedule[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m;
    cin >> m;
    generateSchedule(m);
    return 0;
}