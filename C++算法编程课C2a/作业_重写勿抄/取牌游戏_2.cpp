#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100005;
int q[N], front, rear;
int a[N], id;

int main() {
    int n, k, p;
    cin >> n >> k >> p;
    int m = k/n;
    for(int i=1; i<=k; i++){
        q[rear++] = i;
    }

    for(int i=1; i<=m; i++) {
        for(int j=1; j<=n; j++) {
            if(j == n) {
                a[id++] = q[front];
            }
            front = (front+1)%N;
            for (int x=1; x<=p; x++) {
                q[rear] = q[front];
                rear = (rear+1)%N;
                front = (front+1)%N;
            }
        }
    }
    sort(a, a+m);
    for (int i=0; i<m; i++) {
        cout << a[i] << endl;
    }
    return 0;
}