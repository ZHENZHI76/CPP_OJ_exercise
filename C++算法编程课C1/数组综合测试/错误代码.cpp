#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    bool l[5005] = {false};

    for (int i = 1; i <= M; i++) {
        for (int j = i; j <= N; j += i) {
            l[j - 1] = !l[j - 1];
        }
    }

    bool f = true;
    for (int i = 1; i <= N; i++) {
        if (l[i-1]) {
            if (!f) {
                cout << ",";
            }
            cout << i;
            f = false;
        }
    }

    cout << endl;

    return 0;
}
