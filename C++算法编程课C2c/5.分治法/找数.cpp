#include <iostream>
using namespace std;

int a[100005];

int bs(int a[], int n, int x) {
    int le = 0, ri = n - 1;
    while (le <= ri) {
        int mid = le + (ri - le) / 2;
        if (a[mid] <= x) {
            if (mid == n - 1 || a[mid + 1] > x) {
                return a[mid];
            }
            le = mid + 1;
        } else {
            ri = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        cout << bs(a, n, x) << endl;
    }
    
    return 0;
}