#include <iostream>
using namespace std;

int a[1029][1029];

int main() {
    int m;
    cin >> m;
    int len = 1;
    a[1][1] = 1;

    for (int i = 1; i <= m; i++) {
        for (int x = 1; x <= len; x++) {
            for (int y = 1; y <= len; y++) {
                a[x + len][y] = a[x][y + len] = a[x][y] + len;
                a[x + len][y + len] = a[x][y];
            }
        }
        len <<= 1;
    }
    int n = 1 << m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%3d", a[i][j]);
        }
        cout << endl;
    }

    return 0;
}
