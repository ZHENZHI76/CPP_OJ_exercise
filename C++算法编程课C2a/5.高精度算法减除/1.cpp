#include <iostream>
#include <cstring>
using namespace std;

char c[35];
int a[35], len;

int main() {
    cin >> c;
    len = strlen(c);
    for(int i = 0; i < len; i++) {
        a[len - i - 1] = c[i] - '0';
    }

    bool none = true;
    for(int k = 2; k <= 9; k++) {
        int r = 0;
        for(int i = len - 1; i >= 0; i--) {
            r = (r * 10 + a[i]) % k;
        }
        if(r == 0) {
            cout << k << " ";
            none = false;
        }
    }
    if(none) {
        cout << "none";
    }
    return 0;
}