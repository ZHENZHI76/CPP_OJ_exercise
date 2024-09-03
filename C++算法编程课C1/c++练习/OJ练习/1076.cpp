#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, age, count[4] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> age;
        if (age <= 18) {
            count[0]++;
        } else if (age <= 35) {
            count[1]++;
        } else if (age <= 60) {
            count[2]++;
        } else {
            count[3]++;
        }
    }
    for (int i = 0; i < 4; i++) {
        cout << fixed << setprecision(2) << (double)count[i] / n * 100 << "%" << endl;
    }
    return 0;
}