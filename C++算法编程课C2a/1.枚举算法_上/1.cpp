#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for (int x = 1; x <= m / 3; x++) {
        for (int y = 1; y <= m; y++) {
            int z = n - x - y;
            if (z > 0 && z % 3 == 0 && 3 * x + y + z / 3 == m) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
