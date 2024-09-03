#include <iostream>
using namespace std;

int a[1029][1029];

void f(int x, int y, int v, int len) {
    if (len == 1) {
        a[x][y] = v;
        return;
    }

    len >>= 1;
    
    f(x, y, v, len);
    f(x, y + len, v + len, len);
    f(x + len, y, v + len, len);
    f(x + len, y + len, v, len);
}

int main() {
    int m;
    cin >> m;
    int len = 1 << m;
    f(1, 1, 1, len);

    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= len; j++) {
            printf("%3d", a[i][j]);
        }
        cout << endl;
    }

    return 0;
}
