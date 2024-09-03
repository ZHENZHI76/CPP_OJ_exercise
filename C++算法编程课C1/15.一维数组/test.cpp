#include <iostream>

using namespace std;

int main() {
    int N, m;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    cin >> m;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] == m) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}