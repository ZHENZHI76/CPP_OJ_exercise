#include<iostream>
using namespace std;

const int N = 1005;
int q1[N], f1, r1, q2[N], f2, r2;

int main() {
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        q1[r1++] = i;
    }
    for(int i=1; i<=m; i++){
        q2[r2++] = i;
    }
    int k; 
    cin >> k;
    for(int i=1; i<=k; i++) {
        cout << q1[f1] << " " << q2[f2] << endl;
        q1[r1] = q1[f1];
        r1 = (r1+1)%N;
        f1 = (f1+1)%N;
        q2[r2] = q2[f2];
        r2 = (r2+1)%N;
        f2 = (f2+1)%N;
    }
    return 0;
}