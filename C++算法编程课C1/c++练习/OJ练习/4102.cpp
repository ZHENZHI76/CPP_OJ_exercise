#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << "只青蛙" << i << "张嘴，" << i * 2 << "只眼睛" << i * 4 << "条腿。" << endl;
    }
    return 0;
}