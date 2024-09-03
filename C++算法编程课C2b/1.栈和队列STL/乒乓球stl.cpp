#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    queue<int> q;
    q.push(m);
    for (int i = 0; i < n; i++) {
        long long x = q.front();
        q.pop();
        long long p = x * 123456;
        queue<int> t;
        while (p > 0) {
            t.push(p % 1000);
            p /= 1000;
        }
        while (!t.empty()) {
            q.push(t.front());
            t.pop();
        }
    }
    cout << q.front() << endl;
    return 0;
}