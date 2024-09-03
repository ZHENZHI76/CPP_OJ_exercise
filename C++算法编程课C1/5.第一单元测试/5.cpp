#include <iostream>
#include <iomanip>
using namespace std;

double calculateCost(int wordCount) {
    return ((wordCount - 1) / 70 + 1) * 0.1;
}

int main() {
    int n;
    cin >> n;
    double totalCost = 0.0;
    for(int i = 0; i < n; i++) {
        int wordCount;
        cin >> wordCount;
        totalCost += calculateCost(wordCount);
    }
    cout << fixed << setprecision(1) << totalCost << endl;
    return 0;
}