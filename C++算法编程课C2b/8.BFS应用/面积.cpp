#include<iostream>
#include<queue>
using namespace std;

int a[15][15];
int fx[4] = {0,0,-1,1};
int fy[4] = {1, -1,0,0};

struct xy{
    int x, y;
};

queue<xy> q;

int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cin >> a[i][j];
        }
    }

    q.push({1,1});
    q.push({1,10});
    q.push({10,1});
    q.push({10,10});

    a[1][1] = 1;
    a[1][10] = 1;
    a[10][1] = 1;
    a[10][10] = 1;

    while(!q.empty()){
        xy h = q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int dx = h.x + fx[i];
            int dy = h.y + fy[i];
            if(dx>0 && dx<=10 && dy>0 && dy<=10 && a[dx][dy]==0){
                a[dx][dy] = 1;
                q.push({dx,dy});
            }
        }
    }

    int cnt = 0;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(a[i][j]==0)
                cnt++;
        }
    }

    cout << cnt;
    return 0;
}