#include<iostream>
using namespace std;

int m[105][105];

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> m[i][j];
        }
    }

    for(int i = 2; i <= n; i++) {
        for(int j = 2; j <= n; j++) {
            if(m[i][j] > m[i-1][j] && m[i][j] > m[i+1][j] && m[i][j] > m[i][j-1] && m[i][j] > m[i][j+1]) {
                cout << "(" << i << "," << j << ") ";
            }
        }
    }

    return 0;
}