#include<iostream>
#include<algorithm>
using namespace std;

int n, c, maxw = 0;
int w[45];

void dfs(int i, int s) {
    if(i == n) {
        maxw = max(maxw, s);
        return;
    }
    if(s + w[i] <= c) {
        dfs(i + 1, s + w[i]);
    }
    dfs(i + 1, s);
}

int main() {
    cin >> n >> c;
    for(int i = 0; i < n; i++) {
        cin >> w[i];
    }
    dfs(0, 0);
    cout << maxw << endl;
    return 0;
}