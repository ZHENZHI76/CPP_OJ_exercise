#include<iostream>
using namespace std;
int ans[40], cnt;

void dfs(int x, int n, int c) {
    if(n == 0 && x > 2) {
        cout << ans[1];
        for (int i = 2; i < x; i++)
            cout << "+" << ans[i];
        cout << endl;
        cnt++;
        return;
    }

    for(int i = c; i <= n; i++) {     
        ans[x] = i;
        dfs(x+1, n-i, i);
    }
}

int main() {
    int n;
    cin >> n;
    dfs(1, n, 1);
    cout << "total=" << cnt << endl;
    return 0;
}