#include<iostream>
using namespace std;

int n, m;
int h[105][105];
bool cha[105][105];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int maxquyu = 0;

int dfs(int x, int y) {
    int quyu = 1;
    cha[x][y] = 1;
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && nx < n && ny >= 0 && ny < m && h[nx][ny] == 1 && !cha[nx][ny]) {
            quyu += dfs(nx, ny);
        }
    }
    return quyu;
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> h[i][j];
            cha[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(h[i][j] == 1 && !cha[i][j]) {
                maxquyu = max(maxquyu, dfs(i, j));
            }
        }
    }
    cout << maxquyu << endl;
    return 0;
}