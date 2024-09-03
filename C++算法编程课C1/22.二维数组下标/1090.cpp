#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int N, i, j;
    cin >> N >> i >> j;

    for (int k = 1; k <= N; k++) {
        printf("(%d,%d) ", i, k);
    }
    cout << endl;

    for (int k = 1; k <= N; k++) {
        printf("(%d,%d) ", k, j);
    }
    cout << endl;

    for (int k = 1; k <= N; k++) {
        int y = j - i + k;
        if (y >= 1 && y <= N) {
            printf("(%d,%d) ", k, y);
        }
    }
    cout << endl;

    for (int k = N; k >= 1; k--) {
        int y = i + j - k;
        if (y >= 1 && y <= N) {
            printf("(%d,%d) ", k, y);
        }
    }
    cout << endl;

    return 0;
}