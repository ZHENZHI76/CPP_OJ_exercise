#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

struct xy {
    int x, y;
};

xy q[1000005];
int g[1005][1005];
int dx[8] = {0, 0, -1, 1, -1, -1, 1, 1};
int dy[8] = {1, -1, 0, 0, -1, 1, -1, 1};
int h, t;

void push(xy p) {
    q[t++] = p;
}

xy pop() {
    return q[h++];
}

bool empty() {
    return h == t;
}

int main() {
    memset(g, -1, sizeof(g));
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        g[x][y] = -2;
    }
    xy start = {1, 1};
    push(start);
    g[1][1] = 0;
    while(!empty()) {
        xy c = pop();
        if(c.x == n && c.y == n) {
            break;
        }
        for(int i = 0; i < 8; i++) {
            int nx = c.x + dx[i];
            int ny = c.y + dy[i];
            if(nx > 0 && nx <= n && ny > 0 && ny <= n && g[nx][ny] != -2 && g[nx][ny] == -1) {
                xy temp = {nx, ny};
                push(temp);
                g[nx][ny] = g[c.x][c.y] + 1;
            }
        }
    }
    cout << g[n][n] << endl;
    return 0;
}