#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 1;
    for (int i = 0; i < 8; i++) {
        if ((n >> i) & 1) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}