#include<iostream>
using namespace std;
int main() {
    int n, t, m;
    cin >> n >> t >> m;
    int tp = m;
    for (int i = 2; i <= t; i++) {
        tp = (tp + 1) * 2;
    }
    tp += n;
    cout << tp << endl;
    return 0;
}