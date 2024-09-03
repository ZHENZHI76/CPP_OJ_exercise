#include <iostream>
using namespace std;

int main() {
    char s[101];
    int l = 0;
    while (cin >> s[l]) {
        ++l;
    }
    for (int i = 0; i < l - 1; ++i) {
        s[i] = s[i] + s[i + 1];
    }
    s[l - 1] = s[l - 1] + s[0];
    for (int i = 0; i < l; ++i) {
        cout << s[i];
    }
    cout << endl;
    return 0;
}
