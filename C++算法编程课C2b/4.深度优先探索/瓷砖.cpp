#include<iostream>
using namespace std;

int w, h;
char a[55][55];
int fx[4] = {0, 1, 0, -1};
int fy[4] = {-1, 0, 1, 0};
int cnt;

void dfs(int x, int y){
    cnt++;
    a[x][y] = '#';
    for(int i = 0; i < 4; i++){
        int dx = x + fx[i];
        int dy = y + fy[i];
        if(dx > 0 && dx <= w && dy > 0 && dy <= h && a[dx][dy] == '.'){
            dfs(dx, dy);
        }
    }
}

int main(){
    cin >> h >> w;
    int x, y;
    for(int i = 1; i <= w; i++){
        for(int j = 1; j <= h; j++){
            cin >> a[i][j];
            if(a[i][j] == '@'){
                x = i;
                y = j;
                a[i][j] = '.';
            }
        }
    }
    dfs(x, y);
    cout << cnt << endl;
    return 0;
}