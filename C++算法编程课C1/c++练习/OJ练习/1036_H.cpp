#include <iostream>
using namespace std;

int main() {
    int w;
    char e;
    cin >> w >> e;
    int a = 8;
    if (w > 1000) {
        w -= 1000; // 这行代码的作用是将重量减去1000克，因为在计算邮费时，重量在1000克以内的部分是不需要加收超重费的，所以我们需要将重量减去1000克，只计算超过1000克的部分。
        a += (w + 499) / 500 * 4;
    }
    if (e == 'y') {
        a += 5;
    }
    cout << a << endl;
    return 0;
}