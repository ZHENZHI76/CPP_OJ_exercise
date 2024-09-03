#include <iostream>

using namespace std;

int main() {
    int m, t;
    cin >> m >> t;

    int r = 0;
    int count = 0;

    while (count < m) {
        r++;
        int temp = r;
        bool contains_t = false;
        while (temp > 0) {
            if (temp % 10 == t) {
                contains_t = true;
                break;
            }
            temp /= 10;
        }
        if (contains_t) {
            continue;
        }
        count++;
    }

    cout << r << endl;

    return 0;
}
