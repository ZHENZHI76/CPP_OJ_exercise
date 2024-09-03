#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int maxs = 0;
    for (int i = 0; i < N; i++) {
        int a = 0;
        for (int j = 0; j < M; j++) {
            int val;
            cin >> val;
            a = max(a, val);
        }
        maxs += a;
    }
    cout << maxs << endl;
    return 0;
}