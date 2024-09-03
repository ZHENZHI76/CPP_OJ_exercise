#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    for (int x = 0; a * x <= c; x++) {
        if ((c - a * x) % b == 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}