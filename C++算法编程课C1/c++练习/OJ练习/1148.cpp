#include <iostream>
using namespace std;

const int maxn = 95;
long long a[maxn];

int main() {
    int n;
    cin >> n;
    a[1] = 1;
    a[2] = 2;
    for (int i = 3; i <= n; i++) {
        a[i] = a[i-1] + a[i-2];
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}