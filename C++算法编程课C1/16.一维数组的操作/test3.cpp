#include <iostream>
#include <iomanip>
using namespace std;

void insertionSort(double arr[], int n) {
    for (int i = 1; i < n; ++i) {
        double key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cin >> n;

    double samples[300];

    for (int i = 0; i < n; ++i) {
        cin >> samples[i];
    }

    insertionSort(samples, n);

    double sum = 0.0;
    for (int i = 1; i < n - 1; ++i) {
        sum += samples[i];
    }

    double average = sum / (n - 2);

    double max_difference = max(abs(samples[1] - average), abs(samples[n - 2] - average));

    cout << fixed << setprecision(2) << average << " " << max_difference << endl;

    return 0;
}

