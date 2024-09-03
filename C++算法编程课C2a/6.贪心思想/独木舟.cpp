#include <iostream>
#include <algorithm>
using namespace std;

int w[30005];

int main() {
    int W, n;
    cin >> W >> n;
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    sort(w, w + n);
    int b = 0, i = 0;
    for (int j = n - 1; j >= i; j--) {
        if (w[i] + w[j] <= W) {
            i++;
        }
        b++;
    }
    cout << b << endl;
    return 0;
}