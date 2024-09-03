#include <iostream>

using namespace std;

int main() {
    int ts, np;
    cin >> ts >> np;

    int rs = ts;
    int wm = 0;

    for (int i = 0; i < np; i++) {
        int mn;
        cin >> mn;

        if (mn > rs) {
            wm++;
        } else {
            rs -= mn;
        }
    }

    cout << wm << endl;

    return 0;
}
