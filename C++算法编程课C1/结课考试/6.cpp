#include<iostream>
#include<algorithm>
using namespace std;

int a[100000], b[100000];

int main() {
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i = m - 1; i >= 0; i--) {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}