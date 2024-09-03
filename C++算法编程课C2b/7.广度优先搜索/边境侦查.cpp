#include <iostream>
#include <queue>
using namespace std;

int t[200005];

int main() {
    int N, K;
    cin >> N >> K;
    for (int i = 0; i < 200005; i++) {
        t[i] = -1;
    }
    queue<int> q;
    q.push(N);
    t[N] = 0;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        if (x == K) {
            cout << t[x] << endl;
            return 0;
        }
        if (x - 1 >= 0 && t[x - 1] == -1) {
            q.push(x - 1);
            t[x - 1] = t[x] + 1;
        }
        if (x + 1 < 200005 && t[x + 1] == -1) {
            q.push(x + 1);
            t[x + 1] = t[x] + 1;
        }
        if (2 * x < 200005 && t[2 * x] == -1) {
            q.push(2 * x);
            t[2 * x] = t[x] + 1;
        }
    }
    return 0;
}