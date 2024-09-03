#include<iostream>
using namespace std;
int n,k=0;
int f(int n){
    k++;
    if(n==1) return k;
    for(int i=1;i<=n/2;i++){
        f(i);
    }
    return k;
}
int main(){
    cin >> n;
    f(n);
    cout << k;
    cout<<endl;
    return 0;
}