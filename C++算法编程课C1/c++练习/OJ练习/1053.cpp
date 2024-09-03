#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int maxNH = 0;
    int curNH = 0;

    for (int i = 0; i < n; i++) {
        int s, d;
        cin >> s >> d;

        if (s >= 90 && s <= 140 && d >= 60 && d <= 90) {
            curNH++;
            if (curNH > maxNH) {
                maxNH = curNH;
            }
        } else {
            curNH = 0;
        }
    }

    cout << maxNH << endl;

    return 0;
}
