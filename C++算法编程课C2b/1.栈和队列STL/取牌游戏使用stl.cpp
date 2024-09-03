#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;


int gc[100005];

int main() {
    int N, K, P;
    cin >> N >> K >> P;
    queue<int> cards;
    for (int i = 1; i <= K; i++) {
        cards.push(i);
    }
    int cnt = 0;
    int gcnt = 0;
    while (!cards.empty()) {
        if (++cnt % N == 0) {
            gc[gcnt++] = cards.front();
        }
        cards.pop();
        for (int i = 0; i < P && !cards.empty(); i++) {
            cards.push(cards.front());
            cards.pop();
        }
    }
    sort(gc, gc + gcnt);
    for (int i = 0; i < gcnt; i++) {
        cout << gc[i] << endl;
    }
    return 0;
}