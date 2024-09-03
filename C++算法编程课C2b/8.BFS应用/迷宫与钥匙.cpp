#include<iostream>
#include<queue>
#include<cstring>
using namespace std;

const int N = 1010;
int g[N][N], d[N][N];
int dx[8] = {-1, 0, 1, 0, -1, -1, 1, 1};
int dy[8] = {0, 1, 0, -1, -1, 1, -1, 1};

struct node{
    int x, y, step;
};

int n, m, x, y, kx, ky;

void bfs(int x, int y){
    queue<node> q;
    q.push({x, y, 0});
    d[x][y] = 0;
    while(!q.empty()){
        node t = q.front();
        q.pop();
        for(int i=0;i<8;i++){
            int nx = t.x + dx[i], ny = t.y + dy[i];
            if(nx>=1 && nx<=n && ny>=1 && ny<=n && g[nx][ny]!=-1 && d[nx][ny]==-1){
                d[nx][ny] = t.step + 1;
                q.push({nx, ny, t.step + 1});
            }
        }
    }
}

int main(){
    cin >> n >> m;
    memset(d, -1, sizeof d);
    for(int i=0;i<m;i++){
        cin >> x >> y;
        g[x][y] = -1;
    }
    cin >> kx >> ky;
    bfs(1, 1);
    int temp = d[kx][ky];
    memset(d, -1, sizeof d);
    bfs(kx, ky);
    cout << temp + d[n][n];
    return 0;
}