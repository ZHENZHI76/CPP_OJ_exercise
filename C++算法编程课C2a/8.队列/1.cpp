#include <iostream>
using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n >> k;

    int man = 1, woman = 1;

    for (int i = 0; i < k; ++i) {
        cout << man << " " << woman << endl;

        man = man % m + 1;
        woman = woman % n + 1;
    }

    return 0;
}