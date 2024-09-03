#include<iostream>
using namespace std;
int cnt = 0;
void f(int n){   
    cnt++;
    for(int i=1;i<=n/2;i++){
        f(i);
    }
}
int main(){
    int n;
    cin >> n;
    f(n);
    cout << cnt;
    cout<<endl;
    return 0;
}