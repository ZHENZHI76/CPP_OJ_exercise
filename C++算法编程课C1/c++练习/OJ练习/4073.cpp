#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (h[j] > h[j + 1]) {
                int temp = h[j];
                h[j] = h[j + 1];
                h[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << h[i] << " ";
    }
    return 0;
}