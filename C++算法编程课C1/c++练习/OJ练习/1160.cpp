#include<iostream>
using namespace std;
int t[1005];
int gzb[10000005];

int main() {
    int k, maxd=0, n=0;
    while(1){
        cin >> k;
        if(k==0){
            break;
        }
        if(k>maxd){
            maxd = k;
        }
        t[++n] = k;
    }
    int b = 1;
    int cnt = 0;
    for(int i=1; i<=maxd; i++){
        gzb[i] = gzb[i-1] + b;
        cnt++;
        if(cnt==b){
            b++;
            cnt = 0;
        }
    }
    for(int i=1; i<=n; i++){
        cout << gzb[t[i]] << endl;
    }
    return 0;
}