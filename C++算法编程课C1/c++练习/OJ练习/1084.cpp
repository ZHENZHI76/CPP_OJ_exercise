#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    int n[10005];
    for (int i = 1; i < a; i++) {
        cin >> n[i];
    }

    int maxv = n[1];
    int minv = n[1];

    for (int i = 1; i < a; i++) {
        if (n[i] > maxv) {
            maxv = n[i];
        }
        if (n[i] < minv) {
            minv = n[i];
        }
    }

    int d = maxv - minv;
    cout << d << endl;

    return 0;
}

