#include <iostream>
using namespace std;

int L1[100005], L2[100005], L[100005];

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    for (int i = 0; i < N1; ++i) {
        cin >> L1[i];
    }

    for (int i = 0; i < N2; ++i) {
        cin >> L2[i];
    }

    int i = 0, j = 0, k = 0;
    while (i < N1 && j < N2) {
        if (L1[i] <= L2[j]) {
            L[k++] = L1[i++];
        } else {
            L[k++] = L2[j++];
        }
    }

    while (i < N1) {
        L[k++] = L1[i++];
    }

    while (j < N2) {
        L[k++] = L2[j++];
    }

    for (int i = 0; i < N1 + N2; ++i) {
        cout << L[i] << " ";
    }

    return 0;
}