#include<iostream>
#include<queue>
using namespace std;

int fx[4] = {0,0,-1,1};
int fy[4] = {1,-1,0,0};

struct xy{
    int x, y;
    xy(int a, int b) : x(a), y(b) {}
};

int main(){
    bool a[12][12] = {0};
    for (int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cin >> a[i][j];
        }
    }

    queue<xy> q;
    q.push(xy(0,0));
    a[0][0] = 1;

    while(!q.empty()){
        xy h = q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int dx = h.x + fx[i];
            int dy = h.y + fy[i];
            if(dx>=0 && dx<=11 && dy>=0 && dy<=11 && a[dx][dy]==0){
                a[dx][dy] = 1;
                q.push(xy(dx, dy));
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

    cout << cnt << endl;
    return 0;
}