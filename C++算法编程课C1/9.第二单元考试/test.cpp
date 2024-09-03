#include <iostream>
using namespace std;

int main() {
    int a = 5; // 创建一个变量a并赋值为5
    if (a >= 10) { // 如果a的值小于10
        cout << "小于10";
    }
    else if (a < 4) { // 如果a的值大于等于4
        cout << "大于4";
    }
    else if (a != 5) { // 如果a的值不等于5
        cout << "等于5";
    }
    else { // 如果a的值是偶数
        cout << "是偶数";
    }
    return 0;
}