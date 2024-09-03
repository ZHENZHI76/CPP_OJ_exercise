#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    int w[30000];
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }

    sort(w + 1, w + n + 1);

    int l = 1, r = n;
    int b = 0;
    while (l <= r) {
        if (w[r] + w[l] <= a) {
            l++;
        }
        r--;
        b++;
    }

    cout << b << endl;

    return 0;
}