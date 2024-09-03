/*
#include <iostream>
using namespace std;

int n;
int ans[10];
bool bj[10];

void dfs(int x) {
    if (x > n) {
        for (int i = 1; i <= n; i++) {
            printf("%5d ", ans[i]);
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!bj[i]) {
            ans[x] = i;
            bj[i] = 1;
            dfs(x + 1);
            bj[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    dfs(1);
    return 0;
}
*/
#include<iostream>
using namespace std;

int n;
bool vis[10];
int ans[10];

void dfs(int x) {
    if(x > n) {
        for(int i = 1; i <= n; i++) {
            printf("%5d", ans[i]);
        }
        cout << endl;
        return;
    }
    for(int i = 1; i <= n; i++) {
        if(!vis[i]) {
            vis[i] = 1;
            ans[x] = i;
            dfs(x + 1);
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    dfs(1);
    return 0;
}