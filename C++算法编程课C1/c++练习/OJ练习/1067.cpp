#include <iostream>
using namespace std;

int main() {
    int a, b, f;
    char c;
    cin >> a >> b >> c >> f;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (f || i == 0 || i == a - 1 || j == 0 || j == b - 1) {
                cout << c;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}