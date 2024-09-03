#include <iostream>
using namespace std;

int ABS(int num) { // 自定义函数的格式：返回值类型 函数名(参数列表) {函数体}
    if (num < 0) {
        return -num;
    } else {
        return num; // return的作用：1.返回函数值 2.结束函数
    }
}

int main() {
    int num;
    cin >> num;
    cout << ABS(num) << endl;
    return 0;
}

//