#include <iostream>
#include <cstring>
using namespace std;

int dx[8] = {-1, 0, 1, 0, -1, -1, 1, 1};
int dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};
int n, a[10][10], ans;

void dfs(int x, int y) {
    if(x == 0 && y == n - 1) {
        ans++;
        return;
    }
    for(int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && nx < n && ny >= 0 && ny < n && a[nx][ny] == 0) {
            a[nx][ny] = 1;
            dfs(nx, ny);
            a[nx][ny] = 0;
        }
    }
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    a[0][0] = 1;
    dfs(0, 0);
    cout << ans << endl;
    return 0;
}