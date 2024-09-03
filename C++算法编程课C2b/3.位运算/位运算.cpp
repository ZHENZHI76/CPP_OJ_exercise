#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[31];
    int cnt = 0;
    int m=0;
    while(n)
    {
        if(n%2==1)
        {
            a[cnt++] = pow(2,m);
        }
        m++;
        n/=2;
    }
    if(a[0] == 1) {
        cout << "-1";
    } else {
        for(int i = cnt - 1; i >= 0; i--) {
            cout << a[i] << " ";
        }
    }
    return 0;
}