#include <iostream>
using namespace std;

int main() {
    int t[123] = {0};
    char a[100005];
    cin >> a;
    for (int i = 0; a[i]; i++) {
        t[a[i]]++;
    }
    for (int i = 0; a[i]; i++) {
        if (t[a[i]] == 1) {
            cout << a[i];
            return 0;
        }
    }
    cout << "no";
    return 0;
}