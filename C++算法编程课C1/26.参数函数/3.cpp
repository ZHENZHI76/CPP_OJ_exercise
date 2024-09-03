#include <iostream>
using namespace std;

long long mypow(int x, int y){
    long long ans=1;
    for(int i=1; i<=y; i++){
        ans *= x;
    }
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;
    long long r = mypow(a, b) + mypow(b, a);
    cout << r << endl;
    return 0;
}