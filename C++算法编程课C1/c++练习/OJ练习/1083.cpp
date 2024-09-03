#include <iostream>
using namespace std;

int main() {
    int s[7];
    int d[7];

    for (int i = 0; i < 7; i++) {
        int a, b;
        cin >> a >> b;
        s[i] = a + b;
    }

    int maxa = 0;
    int maxb = 0;

    for (int i = 0; i < 7; i++) {
        if (s[i] > 8) {
            d[i] = s[i] - 8;
        } else {
            d[i] = 0;
        }
        
        if (d[i] > maxa) {
            maxa = d[i];
            maxb = i + 1;
        }
    }

    cout << maxb << endl;

    return 0;
}



