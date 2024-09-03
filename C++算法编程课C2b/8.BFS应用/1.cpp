#include<iostream>
#include<queue>
using namespace std;

int a[15][15];
int fx[4] = {0,0,-1,1};
int fy[4] = {1,-1,0,0};

struct xy{
    int x, y;
};

queue<xy> q;

int main(){
    for (int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cin >> a[i][j];
        }
    }

    // 找到一个没有被挡住的起点
    for (int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(a[i][j] == 0){
                q.push({i,j});
                a[i][j] = 1;
                break;
            }
        }
        if(!q.empty()){
            break;
        }
    }

    while(!q.empty()){
        xy h = q.front();
        q.pop();
        for (int i=0;i<4;i++){
            int dx = h.x + fx[i];
            int dy = h.y + fy[i];
            if (dx>=1 && dx<=10 && dy>=1 && dy<=10 && a[dx][dy]==0){
                a[dx][dy]=1;
                q.push({dx,dy});
            }
        }
    }

    int cnt = 0;
    for (int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(a[i][j]==1)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}