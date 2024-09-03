#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num;
    cin >> num;

    int maxa = num;
    int mina = num;

    for (int i = 1; i < n; ++i) {
        cin >> num;
        if (num > maxa) {
            maxa = num;
        }
        if (num < mina) {
            mina = num;
        }
    }

    cout << maxa - mina << endl;

    return 0;
}
