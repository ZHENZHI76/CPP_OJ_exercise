#include <iostream>
using namespace std;

int main(){
    int n, m, sum = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int j = n - 3 * m + 8 * i;
        int k = n - m + 2 * i;
        if(j < 0 && k > 0 && j % 2 == 0 && k % 2 == 0){
            sum++;
        }
    }
    cout << sum;
    return 0;
}