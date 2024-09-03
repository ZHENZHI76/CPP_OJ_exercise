#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    double vals[300];
    for (int i = 0; i < n; i++) {
        cin >> vals[i];
    }

    int maxi = 0;
    int mini = 0;
    for (int i = 1; i < n; i++) {
        if (vals[i] > vals[maxi]) {
            maxi = i;
        }
        if (vals[i] < vals[mini]) {
            mini = i;
        }
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        if (i != maxi && i != mini) {
            sum += vals[i];
        }
    }
    double avg = sum / (n - 2);

    double maxe = 0;
    for (int i = 0; i < n; i++) {
        if (i != maxi && i != mini) {
            double e = abs(vals[i] - avg);
            if (e > maxe) {
                maxe = e;
            }
        }
    }

    cout << fixed << setprecision(2) << avg << " " << maxe << endl;

    return 0;
}
