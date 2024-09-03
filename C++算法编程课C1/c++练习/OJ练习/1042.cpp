#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int age;
        cin >> age;
        sum += age;
    }

    double average = sum / (1.0 * n);

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}
