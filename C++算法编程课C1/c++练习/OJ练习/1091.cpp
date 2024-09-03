#include <iostream>
using namespace std;

int a[105][105];

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += a[i][0] + a[i][n-1];
    }
    for (int j = 1; j < n-1; j++) {
        sum += a[0][j] + a[m-1][j];
    }

    cout << sum << endl;

    return 0;
}