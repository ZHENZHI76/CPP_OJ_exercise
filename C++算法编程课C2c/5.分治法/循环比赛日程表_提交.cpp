#include <iostream>
using namespace std;

void f(int a[1024][1024], int n) {
    for (int i = 0; i < n; i++) {
        a[i][0] = i + 1;
    }

    for (int k = 1; k < n; k <<= 1) {
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < k; j++) {
                a[i + k][j] = a[i][j + k] = a[i][j] + k;
                a[i + k][j + k] = a[i][j];
            }
        }
    }
}

int main() {
    int m;
    cin >> m;
    int n = 1 << m;
    int a[1024][1024];
    f(a, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", a[i][j]);
        }
        cout << endl;
    }

    return 0;
}