#include <iostream>

using namespace std;

int main() {
    int w;
    char ep;
    cin >> w >> ep;

    int p = 8;

    if (w > 1000) {
        int ew = w - 1000;
        int ef = 0;

        if (ew % 500 == 0) {
            ef = (ew / 500) * 4;
        } else {
            ef = ((ew / 500) + 1) * 4;
        }

        p += ef;
    }

    if (ep == 'y') {
        p += 5;
    }

    cout << p << endl;

    return 0;
}
