#include <iostream>
#include <algorithm>
using namespace std;

int m3(int n1, int n2, int n3) {
    return max(max(n1, n2), n3);
}

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int maxn = m3(n1, n2, n3);
    cout << maxn << endl;
    return 0;
}