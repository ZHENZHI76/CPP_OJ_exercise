#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

struct xy {
    int x, y;
};

struct client {
    int x, y, o;
};

xy q[1000005];
client c[1000005];
int g[1005][1005];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
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
    int n, m, k, d;
    cin >> n >> m >> k >> d;
    for(int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        xy temp = {x, y};
        push(temp);
        g[x][y] = 0;
    }
    for(int i = 1; i <= k; i++) {
        cin >> c[i].x >> c[i].y >> c[i].o;
    }
    for(int i = 1; i <= d; i++) {
        int x, y;
        cin >> x >> y;
        g[x][y] = -2;
    }
    while(!empty()) {
        xy c = pop();
        for(int i = 0; i < 4; i++) {
            int nx = c.x + dx[i];
            int ny = c.y + dy[i];
            if(nx > 0 && nx <= n && ny > 0 && ny <= n && g[nx][ny] == -1) {
                xy temp = {nx, ny};
                push(temp);
                g[nx][ny] = g[c.x][c.y] + 1;
            }
        }
    }
    long long total = 0;
    for(int i = 1; i <= k; i++) {
        total += g[c[i].x][c[i].y] * c[i].o;
    }
    cout << total << endl;
    return 0;
}