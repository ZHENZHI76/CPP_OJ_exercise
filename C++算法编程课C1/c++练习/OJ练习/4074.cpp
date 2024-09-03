#include <iostream>
#include <cstdio>
using namespace std;
int a[1000000];
int main()
{
    int n, m, k;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++){
        scanf("%d", &k);
        a[k]++;
    }
    for (int j = 1; j <= m; j++){ 
        scanf("%d", &k);
        printf("%d ", a[k]);
    }
    cout << endl;
    return 0;
}