#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[105][105], b[105][105];

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            b[j][i] = a[i][j];
        }
    }
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}