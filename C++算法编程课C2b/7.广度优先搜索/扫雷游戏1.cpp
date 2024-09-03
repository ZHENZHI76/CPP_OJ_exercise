#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char map[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == '*') {
                cout << '*';
            } else {
                int cnt = 0;
                for (int a = -1; a <= 1; a++) {
                    for (int b = -1; b <= 1; b++) {
                        if (a == 0 && b == 0) {
                            continue;
                        }
                        int x = i + a;
                        int y = j + b;
                        if (x >= 0 && x < n && y >= 0 && y < m && map[x][y] == '*') {
                            cnt++;
                        }
                    }
                }
                cout << cnt;
            }
        }
        cout << endl;
    }

    return 0;
}