#include <iostream>

using namespace std;

void r(char n[245], int len, int s) {
    while (s > 0) {
        int i = 0;
        while (i < len - 1 && n[i] <= n[i + 1]) i++;
        for (int j = i; j < len - 1; j++) {
            n[j] = n[j + 1];
        }
        len--;
        s--;
    }

    for (int i = 0; i < len; i++) {
        cout << n[i];
    }
    cout << endl;
}

int main() {
    char n[245];
    int s, len;
    cin >> n >> s;
    cin >> len;
    r(n, len, s);
    return 0;
}