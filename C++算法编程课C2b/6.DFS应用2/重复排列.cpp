#include <iostream>
#include <algorithm>
#include <cstring>

char s[505];
bool vis[505];
char c[505];
int cnt = 0;

using namespace std;

void dfs(int d, int n, char s[], bool vis[], char c[]) {
    if (d == n) {
        c[d] = '\0';
        cout << c << endl;
        cnt++;
        return;
    }

    for (int i = 0; i < n; ++i) {
        if (i == 0 || s[i] != s[i - 1] || vis[i - 1]) {
            if (!vis[i]) {
                vis[i] = 1;
                c[d] = s[i];
                dfs(d + 1, n, s, vis, c);
                vis[i] = 0;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    cin >> s;

    sort(s, s + n);
    dfs(0, n, s, vis, c);

    cout << cnt << endl;

    return 0;
}