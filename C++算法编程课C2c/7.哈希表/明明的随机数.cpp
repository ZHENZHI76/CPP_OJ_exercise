#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool jl[1005] = {0};
    int n[105];
    int btsz = 0;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        if (!jl[num]) {
            jl[num] = 1;
            n[btsz++] = num;
        }
    }

    sort(n, n + btsz);

    cout << btsz << endl;
    for (int i = 0; i < btsz; ++i) {
        cout << n[i] << " ";
    }
    cout << endl;

    return 0;
}
