#include <iostream> // 包含输入输出流库，用于处理输入输出操作
using namespace std; // 使用标准命名空间，简化代码书写

int main() {
    int n, w; // 定义两个整数变量 n 和 w，分别表示获奖号码的数量和小谢的抽奖号码
    cin >> n; // 从标准输入读取一个整数，赋值给 n
    
    int zhonN[105]; // 定义一个长度为 105 的整数数组 zhonN，用于存储获奖号码
    for (int i = 0; i < n; i++) { // 使用 for 循环遍历 n 次
        cin >> zhonN[i]; // 从标准输入读取一个整数，赋值给数组 zhonN 的第 i 个元素
    }
    cin >> w; // 从标准输入读取一个整数，赋值给 w
    
    for (int i = 0; i < n; i++) { // 使用 for 循环遍历 n 次
        if (zhonN[i] == w) { // 如果数组 zhonN 的第 i 个元素等于 w
            cout << i + 1 << endl; // 输出 i + 1，表示小谢中奖的是第几个号码（从 1 开始计数）
            return 0; // 结束程序
        }
    }
    
    cout << 0 << endl; // 如果循环结束后仍未找到 w，输出 0，表示小谢没有中奖
    return 0; // 结束程序
}