#include <iostream>

using namespace std;

void r(char n[245], int s) {
    int len = 0;
    while (n[len] != '\0') len++;

    while (s > 0) {
        int i = 0;
        while (i < len - 1 && n[i] <= n[i + 1]) i++;
        for (int j = i; j < len - 1; j++) {
            n[j] = n[j + 1];
        }
        len--;
        s--;
    }

    n[len] = '\0';

    int b = 0;
    while (n[b] == '0' && b < len) b++;

    if (b >= len) {
        cout << 0;
    } else {
        for (int i = b; i < len; i++) {
            cout << n[i];
        }
    }
    cout << endl;
}

int main() {
    char n[245];
    int s;
    cin >> n >> s;
    r(n, s);
    return 0;
}