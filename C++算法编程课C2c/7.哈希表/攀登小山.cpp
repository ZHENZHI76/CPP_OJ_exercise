#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int s = -1;
    
    for (int x = (n + 1) / 2; x <= n; ++x) {
        if (x % m == 0) {
            s = x;
            break;
        }
    }

    cout << s << endl;
    return 0;
}
