#include<iostream>
using namespace std;
int main() {
    int a[6][6];
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin >> a[i][j];
        }
    }
    int b[6] = {0, 1, 2, 3, 4, 5};
    int m, n;
    cin >> m >> n;
    swap(b[m], b[n]);
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout << a[b[i]][j] << " ";
        }
        cout << endl;
    }
    return 0;
}