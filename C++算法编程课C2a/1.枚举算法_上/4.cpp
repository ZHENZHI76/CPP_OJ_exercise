#include <iostream>
using namespace std;

int match[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int count(int n) {
    int total = 0;
    for (int i = 0; i <= 9; i++) {
        for (int j = i; j <= 9; j++) {
            int k = i + j;
            if (match[i] + match[j] + match[k] == n - 4) {
                total++;
            }
        }
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    cout << count(n) << endl;
    return 0;
}