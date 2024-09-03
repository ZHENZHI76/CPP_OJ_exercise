#include <iostream>
#include <cmath>
using namespace std;

int N;
int a[15];
bool f = 0;

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
        f = 1;
        for (int i = 0; i < N; i++) {
            cout << a[i] + 1 << " ";
        }
        cout << endl;
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
    cin >> N;
    dfs(0);
    if (!f) {
        cout << "no solute!" << endl;
    }
    return 0;
}