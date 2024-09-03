#include <iostream>
using namespace std;

int main() {
    int n, m, count = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < n; i++) {
        if (a[i] == m) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}