//常量表达式 不能有变量
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "输入学号首位：";
    cin >> a;

    switch (a) {
        case 1:
            cout << "宿舍在A区" << endl;
            break;
        case 2:
            cout << "宿舍在B区" << endl;
            break;
        case 3:
            cout << "宿舍在C区" << endl;
            break;
        default:
            cout << "输入错误！" << endl;
    }

    return 0;
}
