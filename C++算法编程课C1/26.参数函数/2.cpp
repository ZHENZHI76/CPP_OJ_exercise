#include <iostream>
using namespace std;

int m3(int n1, int n2, int n3) {
    int maxn = n1;

    if (n2 > maxn) {
        maxn = n2;
    }

    if (n3 > maxn) {
        maxn = n3;
    }

    return maxn;
}

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int maxn = m3(n1, n2, n3);
    cout << maxn << endl;
    return 0;
}