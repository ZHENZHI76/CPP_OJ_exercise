#include <iostream>
using namespace std;

int a[1005];

int main() {
    a[10] = 1;
    for (int i = 9; i >= 2; --i) {
        a[i] = (a[i + 1] + 1) * 2;
    }
    cout << a[2] << endl;
    return 0;
}