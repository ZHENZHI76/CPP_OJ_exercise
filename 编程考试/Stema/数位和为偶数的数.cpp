#include <iostream>

// 定义一个函数，用于计算一个数字的数位和
int digitSum(int n) {
    int sum = 0;  // 初始化数位和为0
    while (n) {  // 当n不为0时，执行循环
        sum += n % 10;  // 取n的个位数，加到sum上
        n /= 10;  // 将n除以10，去掉个位数
    }
    return sum;  // 返回数位和
}

int main() {
    int n;  // 定义一个整数n
    std::cin >> n;  // 从标准输入读取n的值
    // 遍历从1到n的所有整数
    for (int i = 1; i <= n; ++i) {
        // 如果i的数位和是偶数，就输出i
        if (digitSum(i) % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;  // 输出一个换行符，表示输出结束
    return 0;  // 程序正常结束，返回0
}