#include <iostream>
using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    for (int i = 0; i < k; i++) {
        cout << i % m + 1 << " " << i % n + 1 << endl;
    }
    return 0;
}