#include <iostream> // 引入输入输出流库

using namespace std; // 使用标准命名空间

void remove_digits(char n[250], int s) { // 定义函数，输入为字符数组和要删除的数字数量
    int len = 0; // 初始化长度为0
    while (n[len] != '\0') len++; // 计算输入数字的长度
    char res[250]; // 创建一个字符数组来存储结果
    int top = 0; // 初始化栈顶指针为0
    for (int i = 0; i < len; i++) { // 遍历输入的数字
        // 如果栈不为空，且栈顶元素大于当前元素，且我们还可以删除数字
        while (top > 0 && s > 0 && res[top - 1] > n[i]) {
            top--; // 弹出栈顶元素
            s--; // 删除一个数字
        }
        res[top++] = n[i]; // 将当前元素压入栈中
    }
    while (s > 0) { // 如果我们还可以删除数字
        top--; // 弹出栈顶元素
        s--; // 删除一个数字
    }
    res[top] = '\0'; // 在结果的末尾添加字符串结束符
    cout << res << endl; // 输出结果
}

int main() { // 主函数
    char n[250]; // 创建一个字符数组来存储输入的数字
    int s; // 创建一个整数来存储要删除的数字数量
    cin >> n >> s; // 读取输入的数字和要删除的数字数量
    remove_digits(n, s); // 调用函数，删除数字并输出结果
    return 0; // 主函数返回0，表示程序正常结束
}