#include<iostream>
using namespace std;

int cnt;
int vis[10][10];

void biaoji(int row, int j, int add){
    for(int i=row+1;i<=8;i++){
        for(int k=1;k<=8;k++){
            if(k==j||row-j==i-k||row+j==i+k){
                vis[i][k]+=add;
            }
        }
    }
}

void dfs(int row){
    if(row>8){
        cnt++;
        return;
    }
    for(int j=1;j<=8;j++){
        if(vis[row][j]==0){
            biaoji(row,j,1);
            dfs(row+1);
            biaoji(row,j,-1);
        }
    }
}

int main(){
    dfs(1);
    cout << cnt;
    return 0;
}