#include<iostream>
using namespace std;

bool a[5005];

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 2; i <= m; i++){
        for(int j = i; j <= n; j += i){ 
            a[j] = !a[j];
        }
    }
    
    cout << 1;
    for (int i = 2; i <= n; i++){
        if (a[i] == 0){
            cout << "," << i;
        }
    }
    cout << endl;
    return 0;
}