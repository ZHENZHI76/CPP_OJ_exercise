#include <iostream>
#include <algorithm>
using namespace std;

int N = 8;
int a[8];
int s[92];
int cnt = 0;

bool panduan(int r, int c) {
    for (int i = 0; i < r; i++) {
        if (a[i] == c || abs(a[i] - c) == abs(i - r)) {
            return 0;
        }
    }
    return 1;
}

void dfs(int r) {
    if (r == N) {
        int n = 0;
        for (int i = 0; i < N; i++) {
            n = n * 10 + (a[i] + 1);
        }
        s[cnt++] = n;
        return;
    }

    for (int c = 0; c < N; c++) {
        if (panduan(r, c)) {
            a[r] = c;
            dfs(r + 1);
        }
    }
}

int main() {
    dfs(0);
    sort(s, s + cnt);

    int test;
    cin >> test;
    while (test--) {
        int lans;
        cin >> lans;
        cout << s[lans - 1] << endl;
    }

    return 0;
}