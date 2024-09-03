#include<iostream>
using namespace std;
int a[10][10];
int main(){
    int n; cin >> n;
    for(int q=1; q <= (n+1)/2; q++){ 
        for(int i=q; i <= n-q+1; i++){
            a[q][i] = q;
            a[i][n-q+1] = q;
            a[n-q+1][i] = q; 
            a[i][q] = q;
        }
    }
    for(int i=1; i <= n; i++){
        for (int j=1; j <= n; j++){
            cout << a[i][j] << " ";
            if (j != n) cout << " ";
        }
        cout << endl;
    }
    return 0;
}