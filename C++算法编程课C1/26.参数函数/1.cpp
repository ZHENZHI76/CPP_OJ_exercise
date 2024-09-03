#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int f(int a) {
    a++;
    return a;  // 例如，我们将 a 的值翻倍
}

int main() {
    int a = 5;
    f(a);
    cout << f(a);  // 输出修改后的 a 的值
    return 0;
}