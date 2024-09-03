#include <iostream>
using namespace std;

int main() {
    int k, a1 = 0, a5 = 0, a10 = 0;
    cin >> k;

    for (int i = 0; i < k; i++) {
        int num;
        cin >> num;
        if (num == 1) {
            a1++;
        } else if (num == 5) {
            a5++;
        } else if (num == 10) {
            a10++;
        }
    }

    cout << a1 << endl;
    cout << a5 << endl;
    cout << a10 << endl;
    return 0;
}
