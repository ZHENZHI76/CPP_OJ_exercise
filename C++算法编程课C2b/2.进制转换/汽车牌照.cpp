#include<iostream>
#include<algorithm>
using namespace std;

int a[500005], top = 0;

int main() {
    char pai[12];
    while(scanf("%s", pai) != -1) {
        getchar(); //读掉换行符
        int s = 0;
        for(int i = 2; pai[i]; i++) {
            if(pai[i] >= 'A') {
                pai[i] -= 7;
            }
            s = s * 36 + (pai[i] - 48);
        }
        a[top++] = s;
    }
    
    sort(a, a + top);
    
    int minn = a[1] - a[0];
    for(int i = 2; i < top; i++) {
        minn = min(minn, a[i] - a[i - 1]);
    }
    
    cout << minn << endl;
    
    return 0;
}