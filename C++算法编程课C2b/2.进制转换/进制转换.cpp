#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
int n;
char str[100010];
int main()
{
    cin >> n >> str;
    int ans = 0;
    int len = strlen(str);
    int a = 1;
    for (int i = len - 1; i >= 0; --i)
    {
        ans += (str[i] - '0') * a;
        a *= n;
    }
    cout << ans << endl;
    return 0;
}