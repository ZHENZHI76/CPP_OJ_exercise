#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int p[100];
    for (int i = 0; i < m; i++){
        p[i] = i + 1;
    }
    int i = 0, count = m;
    while(count > 0){
        for(int j = 1; j < n; j++){
            i = (i + 1) % m;
            while(p[i] == 0) i = (i + 1) % m;
        }
        cout << p[i] << endl;
        p[i] = 0;
        count--;
        if(count > 0) while(p[i] == 0) i = (i + 1) % m;
    }
    return 0;
}