#include <iostream> // 引入iostream库，用于输入输出操作
#include <iomanip>  // 引入iomanip库，用于控制输出格式
using namespace std; // 使用std命名空间，这样就可以直接使用std库中的函数和对象，而不需要加上std::前缀

int main() { // 主函数，程序的入口点
    int n; // 定义一个整数n，用于存储学生的数量
    cin >> n; // 从标准输入读取学生的数量

    int a; // 定义一个整数a，用于存储每个学生的分数
    int b = 0; // 定义一个整数b，用于存储所有学生的总分，初始值为0
    int c = 0; // 定义一个整数c，用于存储及格的学生数量，初始值为0

    for (int i = 1; i <= n; i++) { // 从1开始，到n结束，每次循环i加1
        cin >> a; // 从标准输入读取一个学生的分数
        b += a; // 将这个学生的分数加到总分上
        if (a >= 60) { // 如果这个学生的分数大于等于60
            c++; // 就把及格的学生数量加1
        }
    }

    cout << fixed << setprecision(2) << (double)b / n << endl; // 输出平均分，保留两位小数
    cout << fixed << setprecision(2) << (double)c / n * 100 << "%" << endl; // 输出及格率，保留两位小数，并且以百分比的形式显示

    return 0; // 主函数返回0，表示程序正常结束
}