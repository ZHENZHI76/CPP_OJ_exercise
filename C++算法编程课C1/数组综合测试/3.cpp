#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int a[1000005];
    int b[1005];

    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= M; i++) {
        cin >> b[i];
    }

    for (int i = 1; i <= M; i++) {
        int cnt = 0;
        for (int j = 1; j <= N; j++) {
            if (a[j] == b[i]) {
                cnt++;
            }
        }
        cout << cnt << " ";
    }

    return 0;
}
