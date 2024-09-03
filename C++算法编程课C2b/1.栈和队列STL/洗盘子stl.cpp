#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N;
    cin >> N;
    stack<int> quxi, xiwan, gan;
    for (int i = N; i >= 1; --i) {
        quxi.push(i);
    }
    int op, num;
    while (cin >> op >> num) {
        if (op == 1) {
            while (num--) {
                xiwan.push(quxi.top());
                quxi.pop();
            }
        } else if (op == 2) {
            while (num--) {
                gan.push(xiwan.top());
                xiwan.pop();
            }
        }
    }
    while (!xiwan.empty()) {
        gan.push(xiwan.top());
        xiwan.pop();
    }
    while (!gan.empty()) {
        cout << gan.top() << endl;
        gan.pop();
    }
    return 0;
}
