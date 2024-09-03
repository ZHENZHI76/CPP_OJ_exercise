#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    
    long long f[1005] = {0};
    f[m] = 1;
    f[m + 1] = 1;

    for (int i = m + 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    cout << f[n] << endl;

    return 0;
}
