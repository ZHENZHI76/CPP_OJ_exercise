#include<iostream>
using namespace std;

int n,m; //地图大小 n*m
int a[105][105];//地图，0表示可以走，墙用1表示,已经走过的点用1表示

//方向数组
int fx[4] = {0,1,0,-1};
int fy[4] = {1,0,-1,0};

//深搜函数
bool dfs(int x, int y){
    if(x==n && y==m){//是否是终点
        return true; //一定要
    }
    a[x][y] = 1;//表示已经走过
    for(int i=0;i<4;i++){
        //下一个要搜索的坐标（dx,dy）
        int dx = x+fx[i];
        int dy = y+fy[i];
        //  是否在地图范围内          并且   可以走
        if(dx>0&&dx<=n&&dy>0&&dy<=m && a[dx][dy]==0){
            if (dfs(dx,dy)) {
                return true;
            }
        }
    }
    return false;
}


int main(){
    int k;
    cin >> n >> m >> k;
    int x,y;
    for(int i=1;i<=k;i++){
        cin >> x >> y;
        a[x][y] = 1; //标记障碍点
    }
    
    if (dfs(1,1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}