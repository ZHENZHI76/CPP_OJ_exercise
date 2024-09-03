#include<iostream>
using namespace std;

void f(int n){
    if (n > 0){
        f(n-1);
        for(int i = 0; i < n; i++){
            cout << n;
        }
        cout << endl;
    }
}

int main(){
    f(3);
    return 0;
}